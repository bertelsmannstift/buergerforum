<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
 * Description content type
 */

$plugin = array(
  'title' => t('Output sorted comments'),
  'descripion' => t('Output sorted comments'),
  'single' => TRUE,
  'category' => t('Ctools plugins'),
  'render callback' => 'bf_comment_output_sorted_comments_render',
  'edit form' => 'bf_comment_output_sorted_comments_form',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(),
);

/**
 * Generates static block edit form.
 */

function bf_comment_output_sorted_comments_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */

function bf_comment_output_sorted_comments_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;

  $block = new stdClass();
  $block->title = '';
  $block->content = '';

  if ($node->type == 'proposal') {
    $flag_vote = flag_get_flag('bf_comment_vote') or die('no "bf_comment_vote" flag defined');
    $or = db_or();
    $or->condition('fc.fid', $flag_vote->fid);
    $or->condition('fc.fid', NULL, 'IS');
  }

  // get comments of node.
  $query = db_select('comment', 'c');
  $comments_p = $query
    ->fields('c', array('cid', 'pid', 'subject', 'name', 'changed'))
    ->condition('c.status', 1)
    ->condition('c.pid', 0)
    ->condition('c.nid', $node->nid)
    ->orderBy('changed', 'DESC')
    ->execute()->fetchAll();

  $query = db_select('comment', 'c');
  if ($node->type == 'proposal') {
    $query->leftJoin('flag_counts', 'fc', 'fc.entity_id = c.cid');
    $query->fields('fc', array('count'));
  }
  $query->fields('c', array('cid', 'pid', 'subject', 'name', 'changed'))
    ->condition('c.status', 1)
    ->condition('c.pid', 0, '<>')
    ->condition('c.nid', $node->nid);
    if ($node->type == 'proposal') {
      $query->condition($or);
      $query->orderBy('fc.count', 'DESC');
    }
  $query->orderBy('c.changed', 'DESC');
  $comments_c = $query->execute()->fetchAll();

  if (count($comments_p) > 0) {
    $cids = array();
    $flag_close = flag_get_flag('bf_comment_close') or die('no "bf_comment_close" flag defined');

    // add "updated" in comment to sort.
    $parent_comments = array();
    foreach ($comments_p as $id => $comment) {
      $comment->updated = $comment->changed;
      $parent_comments[$comment->cid] = $comment;
    }

    foreach ($comments_c as $id => $comment) {
      $comment->updated = $comment->changed;
      if ($parent_comments[$comment->pid]->updated < $comment->updated) {
        $parent_comments[$comment->pid]->updated = $comment->updated;
      }
    }

    // sort parent comments by updated.
    usort($parent_comments, function($a, $b) {
      return $b->updated - $a->updated;
    });


    // get second level comments.
    $order_comments = array();
    foreach ($parent_comments as $id => $parent_comment) {
      $order_comments[$parent_comment->cid] = $parent_comment;
      foreach ($comments_c as $child_comment) {
        if ($child_comment->pid == $parent_comment->cid) {
          $order_comments[$child_comment->cid] = $child_comment;
        }
      }
    }

    // add weight to comments (all closed go to down).
    $closed_comments = array();
    $ordered_comments = array();
    if ($node->type == 'proposal') {
      $weight = 0;
      foreach ($order_comments as $comment) {
        if ($flag_close->is_flagged($comment->cid) || $flag_close->is_flagged($comment->pid)) {
          $comment->weight = $weight;
          $closed_comments[] = $comment;
        } else {
          $comment->weight = $weight;
          $ordered_comments[] = $comment;
        }
        $weight++;
      }

      // sort comments by weight.
      usort($ordered_comments, function($a, $b) {
        return $a->weight - $b->weight;
      });
      usort($closed_comments, function($a, $b) {
        return $a->weight - $b->weight;
      });
    } else {
      $ordered_comments = $order_comments;
    }


    // get array of open comments id.
    foreach ($ordered_comments as $comment) {
      $cids[] = $comment->cid;
    }

    // get sorted comments.
    $open_comments = comment_load_multiple($cids);
    $build_open = comment_view_multiple($open_comments, $node);

    if ($node->type == 'proposal') {
      if (count($cids) > 0) {
        array_unshift($build_open, array('#markup' => '<div class="comments-title">'.t('Open discussion').'</div>'));
      }
      // get array of closed comments id.
      $closed_cids = array();
      foreach ($closed_comments as $comment) {
        $closed_cids[] = $comment->cid;
      }
      $close_comments = comment_load_multiple($closed_cids);
      $build_close = comment_view_multiple($close_comments, $node);
      if (count($closed_cids) > 0) {
        array_unshift($build_close, array('#markup' => '<div class="comments-title">'.t('Closed discussion').'</div>'));
      }
      $block->content .= drupal_render($build_open) . drupal_render($build_close);
    } else {
      $block->content .= drupal_render($build_open);
    }



  }

  return $block;
}
