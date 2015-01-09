<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
 * This plugin array is for editors pane.
 */

$plugin = array(
  'title'            => t('User comments'),
  'descripion'       => t('User comments pane'),
  'category'         => t('Ctools plugins'),
  'required context' => array(new ctools_context_required(t('User'), 'user')),
  'render callback'  => 'user_comments_pane_ctools_content_type_render'
);

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */

function user_comments_pane_ctools_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $account = isset($context[0]->data) ? clone($context[0]->data) : NULL;
  if (!$account || ($account->access == 0)) {
    return NULL;
  }

  if (module_exists('bf_core')) {
    $name = bf_core_display_name($account);
  } else {
    $name = $account->field_first_name[LANGUAGE_NONE][0]['value'] . ' ' .  $account->field_last_name[LANGUAGE_NONE][0]['value'];
  }
  $view = views_embed_view('bf_user_comments','block', $account->uid);
  if (preg_match('/<div class="views-field views-field-title">/', $view)) {

    $block->title =  t('Contributions of') . ' ' . $name;
    $block->content = $view;
  } else {
    return array();
  }

  return $block;
}