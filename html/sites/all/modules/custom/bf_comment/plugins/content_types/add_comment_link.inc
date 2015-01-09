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
  'title' => t('Create comment add link'),
  'descripion' => t('Create comment add link'),
  'single' => TRUE,
  'category' => t('Ctools plugins'),
  'render callback' => 'bf_comment_add_comment_link_render',
  'edit form' => 'bf_comment_add_comment_link_form',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(),
);

/**
 * Generates static block edit form.
 */

function bf_comment_add_comment_link_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */

function bf_comment_add_comment_link_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;
  global $user;

  $block = new stdClass();
  $block->title = '';
  $block->content = '';

  $add_comment = TRUE;
  $is_editor = FALSE;
  if (user_is_anonymous()) {
    $add_comment = FALSE;
  } else {
    if ($node->type == 'proposal') {
      // get phase name.
      $query = db_select('taxonomy_term_data', 't');
      $phase = $query
        ->fields('t', array('name'))
        ->condition('t.tid', $node->field_phase[LANGUAGE_NONE][0]['tid'])
        ->execute()->fetchField();

      if ($phase == 'Preparation') {
        $add_comment = FALSE;
      }
    }
  }

  if (!in_array('Admin', $user->roles) && !in_array('Manager', $user->roles)) {
    if ($node->type == 'page') {
      if ($node->comment == COMMENT_NODE_CLOSED) {
        $add_comment = FALSE;
      }
    }
  }

  if ($add_comment) {
    $block->content .= l(
      t('Add comment'),
      "bfcomment/add/$node->nid",
      array(
        'attributes' => array(
          'title' => t('Add comment'),
          'class' => array('use-ajax', 'ajax-comment-reply', 'btn', 'add-comment-btn'),
        )
      )
    );
  }

  return $block;
}
