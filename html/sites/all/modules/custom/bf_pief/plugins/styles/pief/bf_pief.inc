<?php

/**
 * @file
 * PIEF pane style.
 */

/**
 * Implementation of hook_panels_styles().
 */
$plugin = array(
  'title'       => t('Panels Inline Edit Fields'),
  'description' => t('Allows inline field pane editing'),
  'render pane' => 'bf_pief_render_pane',
  'hook theme'  => 'bf_pief_panels_style_theme',
);

/**
 * Render pane.
 */
function theme_bf_pief_render_pane($vars) {
  if (empty($vars['content']->pief_edit_link)) {
    $pief_edit_link = '';
  } else {
    $pief_edit_link = $vars['content']->pief_edit_link;
  }
  if (empty($vars['content']->pief_id)) {
    $pief_id = '';
  } else {
    $pief_id = $vars['content']->pief_id;
  }
  if (empty($vars['content']->style)) {
    $style = '';
  } else {
    $style = $vars['content']->style;
  }


  return theme(
    'pief_wrapper',
    array(
      'title'     => $vars['content']->title,
      'child'     => render($vars['content']->content),
      'edit_link' => $pief_edit_link,
      'pief_id'   => $pief_id,
      'style'     => $style,
    )
  );
}

/**
 * Implements hook_panels_style_theme().
 */
function bf_pief_panels_style_theme(&$theme, $plugin) {
  $theme['pief_wrapper'] = array(
    'template'       => 'pief-wrapper',
    'path'           => $plugin['path'],
    'render element' => 'element',
  );
}
