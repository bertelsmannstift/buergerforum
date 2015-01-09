<?php

/**
 * @file
 * Views definitions for bf message module.
 */

/**
 * Implements hook_views_data().
 */
function bf_message_views_data() {
  $data = array();

  $data['pm_message']['table']['group'] = t('Statistics private messages');
  $data['pm_message']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
    'pm_index' => array(
      'left_field' => 'mid',
      'field' => 'mid',
    ),
    'users' => array(
      'left_field' => 'uid',
      'field' => 'author',
    ),
  );

  $data['pm_message']['table']['base'] = array(
    'field' => 'mid',
    'title' => 'Statistics private messages',
    'weight' => 10,
  );
  $data['pm_index']['table']['base'] = array(
    'field' => 'mid',
    'title' => 'Statistics private messages',
    'weight' => 10,
  );
  /*
   * Use sort uid.
   * $data['pm_message']['author'] = array(
    'title' => t('author'),
    'help' => t('author'),
    'field' => array(
      'handler' => 'views_handler_field_pm_author',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_formula',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );*/
  $data['pm_message']['timestamp'] = array(
    'title' => t('Date send message'), // The item it appears as on the UI,
    'field' => array(
      'title' => t('Date send message'),
      'handler' => 'views_handler_field_pm_timestamp',
      'click sortable' => TRUE,
    ),
  );
  $data['pm_message']['mid'] = array(
    'title' => t('MID'),
    'relationship' => array(
      'title' => t('Mid'),
      'help' => t('Mid'),
      'group' => t('Mid'),
      'base' => 'pm_index',
      'base field' => 'mid',
      'handler' => 'views_handler_relationship',
      'label' => t('Mid'),
    ),
  );
  $data['pm_message']['author'] = array(
    'title' => t('Author relationship'),
    'relationship' => array(
      'title' => t('Author relationship'),
      'help' => t('Author relationship'),
      'group' => t('Author relationship'),
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Author relationship'),
    ),
  );
  /*
   * Use sort uid.
  $data['pm_index']['recipient'] = array(
    'title' => t('Recipient'), // The item it appears as on the UI,
    'field' => array(
      'title' => t('Recipient'),
      'handler' => 'views_handler_field_pm_recipient',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );*/

  $data['pm_index']['recipient'] = array(
    'title' => t('Recipient relationship'),
    'relationship' => array(
      'title' => t('Recipient relationship'),
      'help' => t('Recipient relationship'),
      'group' => t('Recipient relationship'),
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Recipient relationship'),
    ),
  );

  return $data;
}
