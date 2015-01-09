<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
 * Description content type.
 */

$plugin = array(
  'title' => t('Rate widget for recommends'),
  'descripion' => t('Rate widget for recommends'),
  'category' => t('Ctools plugins'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'render callback' => 'rate_widget_content_type_rate_widget_render',
  'edit form' => 'rate_widget_content_type_rate_widget_form',
  'defaults' => array(),
);

/**
 * Generates static block edit form.
 */

function rate_widget_content_type_rate_widget_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */

function rate_widget_content_type_rate_widget_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  // Get a shortcut to the node.
  $node = $context->data;
  global $user;

  // Load information about the node type.
  $type = node_type_get_type($node);

  $vote_close = FALSE;
  if (in_array('Expert', $user->roles) || user_is_anonymous()) {
    $vote_close = TRUE;
  } else {
    if ($node->type == 'proposal') {
      $is_editor = FALSE;
      $editors = field_get_items('node', $node, 'field_editors');
      if (!empty($editors)) {
        foreach ($editors as $editor) {
          if ($editor['target_id'] == $user->uid) {
            $is_editor = TRUE;
          }
        }
      }
      // get phase name.
      $query = db_select('taxonomy_term_data', 't');
      $phase = $query
        ->fields('t', array('name'))
        ->condition('t.tid', $node->field_phase[LANGUAGE_NONE][0]['tid'])
        ->execute()->fetchField();

      switch ($phase) {
        case 'Preparation':
          $vote_close = TRUE;
          break;
        case 'Discussion':
          if (in_array('Expert', $user->roles)) {
            $vote_close = TRUE;
          }
          break;
        case 'Result':
          $vote_close = TRUE;
          break;
      }
    }
  }

  if (!$vote_close) {
    $mode = RATE_FULL;
  } else {
    $mode = RATE_DISABLED;
  }
  $widget_code = array(
    '#markup' => rate_generate_widget('1', 'node', $node->nid, $mode),
  );

  // Build the content type block.
  $block = new stdClass();
  $block->module = 'rate_extras';
  $block->title = $type->title_label;
  $block->content = $widget_code;
  $block->delta = $node->nid;

  return $block;
}
