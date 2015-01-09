<?php

/**
 * @file
 *
 * BF Poll
 */

/**
 * Loads the JpGraph library.
 */
function bf_poll_jpgraph_load($files = array('jpgraph.php')) {
  if (module_exists('libraries')) {
    $path = libraries_get_path('jpgraph');
    $files = (array) $files;
    array_unshift($files, 'jpgraph.php');
    $files = array_unique($files);
    foreach ($files as $file) {
      $file_arr = explode('/', $file);
      $file = array_pop($file_arr);
      $file = isset($file) ? $path . '/src/' . $file : $path . '/src/' . 'jpgraph.php';
      if (file_exists($file)) {
        require_once($file);
      }
    }
  }
}

/**
 * Recalculate votes count.
 */
function bf_poll_update_votes_count($node) {
  $results = (object) array(
    'nid'         => $node->nid,
    'votes_count' => $node->votes_count
  );

  if (isset($results->votes_count)) {
    drupal_write_record('poll', $results, 'nid');
    $node->votes_count = $results->votes_count;
  }
}

/**
 * Display poll chart.
 */
function bf_poll_display_chart($nid, $width = 100, $height = 100) {
  if (!$nid || !is_numeric($nid)) {
    return;
  }

  $node = node_load($nid);

  if (!$node) {
    return;
  }

  if (($width == 100) && ($height == 100)) {
    $chart_width = 100;
    $chart_height = 100;
  }
  elseif (($width == 300) && ($height == 300)) {
    $chart_width = 300;
    $chart_height = 300;
  }
  elseif (($width == 600) && ($height == 600)) {
    $chart_width = 600;
    $chart_height = 600;
  }
  else {
    return;
  }
  $image_dir = 'public://images/' . $node->nid;
  if (!file_prepare_directory($image_dir)) {
    drupal_mkdir($image_dir, NULL, TRUE);
  }
  $plot_uri = $image_dir . '/plot_' . $node->nid . $chart_width . '_' . $chart_height . '.png';
  $plot_path = drupal_realpath($plot_uri);

  $path = file_create_url($plot_uri);
  if (file_exists($plot_path)) {
    drupal_add_http_header('Content-Type', 'image/png');
    readfile($plot_path);
    return;
  }

  if (bf_poll_update_bar($node, $plot_path, $plot_uri, $chart_width, $chart_height)) {
    drupal_add_http_header('Content-Type', 'image/png');
    readfile($plot_path);
    return;
  }

}

// Label callback
function plot_format_callback($aLabel) {
  return (int) $aLabel;
}

/**
 * Redraw advanced poll bar.
 */
function bf_poll_update_bar($node, $plot_path, $plot_uri, $chart_width, $chart_height, $sendChoice = NULL) {
  $includes = array('jpgraph.php', 'jpgraph_pie.php', 'jpgraph_pie3d.php', 'jpgraph_bar.php');
  bf_poll_jpgraph_load($includes);
  if (isset($node->advpoll_choice['und']) && count($node->advpoll_choice['und']) > 0) {
    $query = db_select('votingapi_vote', 'v')
      ->condition('entity_id', $node->nid)
      ->fields('v', array(
        'tag',
      ))->groupBy('v.tag');
    // Add the COUNT expression
    $query->addExpression('COUNT(v.tag)', 'vcount');
    $results = $query->execute();
    $results = $results->fetchAllAssoc('tag');
    foreach ($node->advpoll_choice['und'] as $key => $choice) {
      if (!isset($node->advpoll_choice['und']['others']) && isset($node->advpoll_options['und'][0]['value']) &&
        $node->advpoll_options['und'][0]['value']) {
        $node->advpoll_choice['und']['others'] = array(
          'choice'   => t('Others'),
          'write_in' => 0,
          'vote'     => 0
        );
      }
      if (!isset($node->advpoll_choice['und'][$key]['vote'])) {
        $node->advpoll_choice['und'][$key]['vote'] = 0;
      }
      if (isset($results[$choice['choice_id']])) {
        $node->advpoll_choice['und'][$key]['vote'] = $results[$choice['choice_id']]->vcount;
      }
      //add others choice
      if ($node->advpoll_choice['und'][$key]['write_in']) {
        $node->advpoll_choice['und']['others']['vote'] += $node->advpoll_choice['und'][$key]['vote'];
        unset($node->advpoll_choice['und'][$key]);
      }
    }

    if (is_array($sendChoice)) {
        $poll_data = array_map(function ($choice) use ($sendChoice) {
          if (in_array($choice['choice'],$sendChoice)) {
            $choice['vote']++;
          }
          //if send others choice
          if ($choice['choice'] == t('Others') && in_array('write-in',$sendChoice)) {
            $choice['vote']++;
          }
          return $choice['vote'];
        }, $node->advpoll_choice['und']);
    } else {
      $poll_data = array_map(function ($choice) use ($sendChoice) {
        if ($choice['choice'] == $sendChoice) {
          $choice['vote']++;
        }
        //if send others choice
        if ($choice['choice'] == t('Others') && $sendChoice == 'write-in') {
          $choice['vote']++;
        }
        return $choice['vote'];
      }, $node->advpoll_choice['und']);
    }

    $poll_labels = array_map(function ($choice) {
      return $choice['choice'];
    }, $node->advpoll_choice['und']);
  }
  else {
    $poll_data = array_fill(0, count($node->advpoll_choice['und']), 1);
    $poll_labels = array_fill(0, count($node->advpoll_choice['und']), 1);
  }

  if (isset($node->advpoll_choice['und']['others'])) {
    unset($node->advpoll_choice['und']['others']);
  }

  if (count(array_diff($poll_data, array_fill(0, count($poll_data), 0))) == 0) {
    return FALSE;
  }
  if (empty($colors)) {
    $colors = bf_poll_default_colors();
  }
  $colors = array_slice(array_values($colors), 0, count($poll_data));
  // Generate 3D pie chart.

  $lengths = array_map('strlen', $poll_labels);
  $maxs = reset(array_keys($lengths, max($lengths)));
  $addwidth = strlen($poll_labels[$maxs]);
  $graph = new Graph((350 + $addwidth * 13), 200, 'auto');
  $graph->SetScale('textlin');
  $theme_class = new UniversalTheme;
  $graph->SetTheme($theme_class);
  $graph->yaxis->SetTickPositions(range(0, max($poll_data)));

  //margins
  $graph->Set90AndMargin($addwidth * 13, 40, 40, 40);
  $graph->img->SetAngle(90);

  $graph->SetBox(FALSE);
  $graph->ygrid->SetFill(FALSE);
  $graph->xaxis->SetTickLabels(array_values($poll_labels));
  $graph->yaxis->HideLine(FALSE);
  $graph->yaxis->HideTicks(FALSE, FALSE);

  $graph->yaxis->SetLabelFormatCallback('plot_format_callback');

  $plot = new BarPlot(array_values($poll_data));
  $plot->SetWidth(0.8);
  // Create the grouped bar plot
  $graph->Add($plot);
  $plot->SetColor("white");
  $plot->SetFillColor($colors);
  $plot->value->SetFormat('%2d');

  if (file_exists($plot_path)) {
    $tid = db_select('file_managed', 'f')
      ->fields('f', array('fid'))
      ->condition('uri', $plot_uri)
      ->execute()
      ->fetchField();
    if ($tid) {
      $old_chart = file_load($tid);
      if ($old_chart) {
        file_usage_delete($old_chart, 'bf_poll', 'node', $node->nid);
        file_delete($old_chart);
      }
    }
  }

  @unlink($plot_path);
  // Setup graph title ands fonts
  $graph->title->Set($node->title);

// Display the graph
  $graph->Stroke($plot_path);

  // Attach chart image file to poll.
  $file = new stdClass();
  $file->uid = $node->uid;
  $file->uri = $plot_uri;
  $file->filename = basename($plot_uri);
  $file->filemime = file_get_mimetype($plot_uri);
  $file->status = FILE_STATUS_PERMANENT;
  $file = file_save($file);

  $path = file_create_url($plot_uri);
  if (ob_get_level()) {
    ob_end_clean();
  }

  file_usage_add($file, 'bf_poll', 'node', $node->nid);

  $chart = array(
    'nid' => $node->nid,
    'fid' => $file->fid,
  );

  drupal_write_record('poll', $chart, 'nid');

  return TRUE;
}

/**
 * Redraw poll bar.
 */
function bf_poll_update_poll_bar($node, $plot_path, $plot_uri, $chart_width, $chart_height, $sendChoice = NULL) {
  $includes = array('jpgraph.php', 'jpgraph_pie.php', 'jpgraph_pie3d.php', 'jpgraph_bar.php');
  bf_poll_jpgraph_load($includes);
  if (isset($node->choice) && count($node->choice) > 0) {
    $poll_data = array_map(function ($choice) use ($sendChoice) {
      if ($choice['chid'] == $sendChoice) {
        $choice['chvotes']++;
      }
      return $choice['chvotes'];
    }, $node->choice);
    $poll_labels = array_map(function ($choice) {
      return $choice['chtext'];
    }, $node->choice);
  }
  else {
    $poll_data = array_fill(0, count($node->choice), 1);
    $poll_labels = array_fill(0, count($node->choice), 1);
  }
  if (count(array_diff($poll_data, array_fill(0, count($poll_data), 0))) == 0) {
    return FALSE;
  }
  if (empty($colors)) {
    $colors = bf_poll_default_colors();
  }
  $colors = array_slice(array_values($colors), 0, count($poll_data));

  // Generate 3D pie chart.
  $lengths = array_map('strlen', $poll_labels);
  $maxs = reset(array_keys($lengths, max($lengths)));
  $addwidth = strlen($poll_labels[$maxs]);
  $graph = new Graph((350 + $addwidth * 10), 200, 'auto');
//  $graph->SetScale("textlin");
  $graph->SetScale('textlin');
  $theme_class = new UniversalTheme;
  $graph->SetTheme($theme_class);
  $graph->yaxis->SetTickPositions(range(0, max($poll_data)));

  $graph->Set90AndMargin($addwidth * 7.5, 40, 40, 40);
  $graph->img->SetAngle(90);

  $graph->SetBox(FALSE);
  $graph->ygrid->SetFill(FALSE);
  $graph->xaxis->SetTickLabels(array_values($poll_labels));
  $graph->yaxis->HideLine(FALSE);
  $graph->yaxis->HideTicks(FALSE, FALSE);

  $plot = new BarPlot(array_values($poll_data));
  $plot->SetWidth(0.8);
  // Create the grouped bar plot
  $graph->Add($plot);
  $plot->SetColor("white");
  $plot->SetFillColor($colors);
  //$plot->SetAbsWidth(100);
  if (file_exists($plot_path)) {

    $tid = db_select('file_managed', 'f')
      ->fields('f', array('fid'))
      ->condition('uri', $plot_uri)
      ->execute()
      ->fetchField();
    if ($tid) {
      $old_chart = file_load($tid);
      if ($old_chart) {
        file_usage_delete($old_chart, 'bf_poll', 'node', $node->nid);
        file_delete($old_chart);
      }
    }
  }
  else {
    $fid = db_select('file_managed', 'f')
      ->fields('f', array('fid'))
      ->condition('uri', $plot_uri)
      ->execute()
      ->fetchField();
    if ($fid) {
      db_delete('file_managed')
        ->condition('fid', $fid, '=')
        ->execute();
      db_delete('file_usage')
        ->condition('fid', $fid, '=')
        ->execute();
    }
  }

  @unlink($plot_path);
  // Setup graph title ands fonts
  // $graph->title->Set('Using grace = 50%');
  $graph->title->Set($node->title);

// Display the graph
  $graph->Stroke($plot_path);

  // Attach chart image file to poll.
  $file = new stdClass();
  $file->uid = $node->uid;
  $file->uri = $plot_uri;
  $file->filename = basename($plot_uri);
  $file->filemime = file_get_mimetype($plot_uri);
  $file->status = FILE_STATUS_PERMANENT;
  $file = file_save($file);

  $path = file_create_url($plot_uri);
  if (ob_get_level()) {
    ob_end_clean();
  }

  file_usage_add($file, 'bf_poll', 'node', $node->nid);

  $chart = array(
    'nid' => $node->nid,
    'fid' => $file->fid,
  );

  drupal_write_record('poll', $chart, 'nid');

  return TRUE;
}


/**
 * Redraw poll chart.
 */
function bf_poll_update_chart($node, $plot_path, $plot_uri, $chart_width, $chart_height, $sendChoice = NULL) {
  $includes = array('jpgraph.php', 'jpgraph_pie.php', 'jpgraph_pie3d.php');
  bf_poll_jpgraph_load($includes);
  if (isset($node->choice) && count($node->choice) > 0) {
    $poll_data = array_map(function ($choice) use ($sendChoice) {
      if ($choice['chid'] == $sendChoice) {
        $choice['chvotes']++;
      }
      return $choice['chvotes'];
    }, $node->choice);
  }
  else {
    $poll_data = array_fill(0, count($node->choice), 1);
  }
  if (count(array_diff($poll_data, array_fill(0, count($poll_data), 0))) == 0) {
    return FALSE;
  }
  if (empty($colors)) {
    $colors = bf_poll_default_colors();
  }
  $colors = array_slice(array_values($colors), 0, count($poll_data));

  // Generate 3D pie chart.
  $graph = new PieGraph($chart_width, $chart_height);
  $graph->SetShadow();
  $plot = new PiePlot3D(array_values($poll_data));
  $plot->SetSize($chart_height < $chart_width ? $chart_height / 1.4 : $chart_width / 2);
  $plot->SetCenter(0.5);
  $plot->SetAngle(50);
  $plot->SetLabels(array_fill(0, count($node->choice), ''));

  $graph->Add($plot);
  $plot->SetSliceColors($colors);

  if (file_exists($plot_path)) {

    $tid = db_select('file_managed', 'f')
      ->fields('f', array('fid'))
      ->condition('uri', $plot_uri)
      ->execute()
      ->fetchField();
    if ($tid) {
      $old_chart = file_load($tid);
      if ($old_chart) {
        file_usage_delete($old_chart, 'bf_poll', 'node', $node->nid);
        file_delete($old_chart);
      }
    }
  }

  @unlink($plot_path);
  $graph->Stroke($plot_path);
  // Attach chart image file to poll.
  $file = new stdClass();
  $file->uid = $node->uid;
  $file->uri = $plot_uri;
  $file->filename = basename($plot_uri);
  $file->filemime = file_get_mimetype($plot_uri);
  $file->status = FILE_STATUS_PERMANENT;
  $file = file_save($file);

  $path = file_create_url($plot_uri);
  if (ob_get_level()) {
    ob_end_clean();
  }

  file_usage_add($file, 'bf_poll', 'node', $node->nid);

  $chart = array(
    'nid' => $node->nid,
    'fid' => $file->fid,
  );

  drupal_write_record('poll', $chart, 'nid');

  return TRUE;
}

/**
 * Array of default colors.
 */
function bf_poll_default_colors() {
  return array('#3366FF', '#6633FF', '#CC33FF', '#FF33CC', '#33CCFF', '#003DF5', '#002EB8', '#FF3366');
}
