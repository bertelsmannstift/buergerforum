<?php

/**
 * @file
 * Views definitions for bf core module.
 */

/**
 * Implements hook_views_data().
 */
function bf_core_views_data() {
  $data = array();

  $data['users']['translates_role'] = array(
    'group' => t('Translates role'),
    'real field' => 'uid',
    'title' => t('Translates role'),
    'field' => array(
      'title' => t('Translates role field'),
      'help' => t('Translates role field.'),
      'handler' => 'views_handler_field_translate_role',
    //  'no group by' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_translate_role',
      'numeric' => TRUE,
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_translate_role_rid',
      'name table' => 'role',
      'name field' => 'name',
      'empty field name' => t('No role'),
      'zero is null' => TRUE,
      'numeric' => TRUE,
    ),
  );

  return $data;
}
