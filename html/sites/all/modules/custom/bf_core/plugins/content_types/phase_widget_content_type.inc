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
  'title' => t('Phase of the proposal'),
  'descripion' => t('Phase of the proposal'),
  'single' => TRUE,
  'category' => t('Ctools plugins'),
  'render callback' => 'bf_core_phase_widget_render',
  'edit form' => 'bf_core_phase_widget_form',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(),
);

/**
 * Generates static block edit form.
 */

function bf_core_phase_widget_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */

function bf_core_phase_widget_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $block = new stdClass();
  $block->title = '';
  $block->content = '';

  $node = $context->data;

  $term = taxonomy_term_load($node->field_phase[LANGUAGE_NONE][0]['tid']);
  $datetime_start = new DateTime();
  $datetime_end = new DateTime($node->field_phase_end[LANGUAGE_NONE][0]['value']);
  $interval = $datetime_start->diff($datetime_end);

  $block->content = '<div class="phase-' . $term->tid . '">' . t($term->name) . '</div>';

  if ($interval->invert == 0 && $interval->days > 0) {
    $block->content .= t('Ends in&nbsp;@days', array('@days' => format_plural($interval->days, '1 day', '@count days')));
  }

  return $block;
}
