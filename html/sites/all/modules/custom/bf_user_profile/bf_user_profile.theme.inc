<?php
/**
 * @file
 * Code for Theme functions for OpenAtrium favorites widgets
 */


/**
 * Implements hook_theme()
 */
function bf_user_profile_theme() {
  return array(
    'user_profile_fields' => array(
      'template'  => 'bf-user-profile',
      'arguments' => array(
        'public' => NULL,
        'links'  => array(),
      ),
      'path' => drupal_get_path('module', 'bf_user_profile') . '/templates',
    ),
  );
}
