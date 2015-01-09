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
  'title' => t('Create exposed form for info-article'),
  'descripion' => t('Create exposed form for info-article'),
  'single' => TRUE,
  'category' => t('Ctools plugins'),
  'render callback' => 'bf_core_add_exposed_form_info_article_render',
  'edit form' => 'bf_core_add_exposed_form_info_article_form',
  'defaults' => array(),
);

/**
 * Generates static block edit form.
 */

function bf_core_add_exposed_form_info_article_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */

function bf_core_add_exposed_form_info_article_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->title = '';
  $block->content = '';

  $form = drupal_get_form('bf_core_info_article_exposed_form');
  $form = drupal_render($form);
  $block->content .= $form;

  return $block;
}
