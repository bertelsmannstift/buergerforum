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
  'title' => t('Create exposed form for faq'),
  'descripion' => t('Create exposed form for faq'),
  'single' => TRUE,
  'category' => t('Ctools plugins'),
  'render callback' => 'bf_comment_exposed_form_faq_render',
  'edit form' => 'bf_comment_exposed_form_faq_form',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(),
);

/**
 * Generates static block edit form.
 */

function bf_comment_exposed_form_faq_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */

function bf_comment_exposed_form_faq_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;

  $block = new stdClass();
  $block->title = '';
  $block->content = '';

  $form = drupal_get_form('bf_comment_faq_exposed_form');
  $form = drupal_render($form);
  $block->content .= $form;

  return $block;
}
