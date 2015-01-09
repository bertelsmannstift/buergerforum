<?php

/**
 * @file
 * owlcarousel.admin.inc
 */

/**
 * Owl Carousel settings overview.
 */
function owlcarousel_settings_form() {
  drupal_add_library('system', 'drupal.ajax');
  variable_include();

  $build['groups'] = array(
    '#type' => 'vertical_tabs',
  );

  $group_variables = variable_list_group('owlcarousel');
  $instances = owlcarousel_instance_callback_list();

  // Per instance setting variables.
  foreach ($instances as $instance) {
    foreach ($group_variables as $var) {
      $instance_variables[$instance][$var['name']] = variable_get_child($var['name'], $instance);
    }
    $build['groups'][$instance] = array(
      '#type' => 'fieldset',
      '#title' => $instance,
      '#collapsible' => TRUE, 
      '#collapsed' => TRUE,
      '#id' => $instance,
    );
    $build['groups'][$instance]['actions'] = array(
      '#type' => 'container',
      '#weight' => 10,
    );
    $build['groups'][$instance]['actions']['edit'] = array(
      '#type' => 'markup',
      '#markup' => l(t('Edit instance variables'), 'admin/config/user-interface/owlcarousel/' . $instance, array('attributes' => array(
        'class' => array('button')
      ))),
      '#weight' => 1,
    );
    if ($instance != 'owlcarousel_settings_default') {
      $build['groups'][$instance]['actions']['delete'] = array(
        '#type' => 'markup',
        '#markup' => l(t('Delete'), 'admin/config/user-interface/owlcarousel/' . $instance . '/delete/nojs/', array('attributes' => array(
          'class' => array('button', 'use-ajax')))),
        '#weight' => 2,
      );
    }

    // List per instance variables.
   $build['groups'][$instance]['list'] = owlcarousel_variable_admin_group_list($instance_variables, $instance);
  }

  // Add & remove instance settings.
  $build['groups']['owlcarousel_settings_add'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add settings group'),
    '#collapsible' => TRUE, 
    '#collapsed' => TRUE,
    '#weight' => -10,
  );
  $build['groups']['owlcarousel_settings_add']['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#description' => t('Identifier for group of settings.'),
  );
  $build['groups']['owlcarousel_settings_add']['actions'] = array(
    '#type' => 'container',
    '#title' => t('Add new instance settings group'),
  );
  // @todo, validation.
  $build['groups']['owlcarousel_settings_add']['actions']['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add group'),
    '#submit' => array('owlcarousel_variable_settings_form_submit'),
  );

  return $build;
}

/**
 * Build list of variables for each instance group.
 */
function owlcarousel_variable_admin_group_list($variables, $instance) {
  $list = array();

  foreach ($variables[$instance] as $name => $variable) {
    $type = variable_get_type($variable['type']);
    $list[$instance][$variable['title']] = array(
      '#type' => $type['title'],
      '#title' => l($variable['title'], 'admin/config/user-interface/owlcarousel/' . $instance, array('fragment' => 'edit-' . drupal_html_id($variable['name']))),
      '#markup' => variable_format_value($variable),
      '#description' => isset($variable['description']) ? $variable['description'] : '',
    );
  }

  return array(
    '#theme' => 'table',
    '#rows' => $list[$instance],
  );
}

/**
 * Variable settings form add group submit handler.
 */
function owlcarousel_variable_settings_form_submit($form, $form_state) {
  $message = t('Name already exists as group of settings identifier.');
  $result = FALSE;

  // Readable name.
  $name = $form_state['values']['name'];

  // Check if instance name already exists
  $result = variable_get('owlcarousel_settings_' . drupal_html_class($name));
  if (!$result) {
    $message = t('New group has been added.');
    variable_set('owlcarousel_settings_' . drupal_html_class($name), $name);
  }

  drupal_set_message($message, 'status');
}

/**
 * Per carousel instance settings form.
 */
function owlcarousel_instance_settings_form($instance) {
  module_load_include('form.inc', 'variable_realm');
  return drupal_get_form('variable_module_form', 'owlcarousel', $instance);
}

/**
 * Additional variable settings form submit handler.
 */
function owlcarousel_variable_settings_submit($form, $form_state) {
  // Clear settings cache.
  $instance = str_replace('-', '_', $form_state['build_info']['args'][1]);
  cache_clear_all('owlcarousel_cache_' . $instance . '_settings', 'cache', TRUE); 
}

/** 
 * Menu callback, delete Owl Carousel instance settings.
 */
function owlcarousel_delete_instance_settings($id = NULL, $js) {
  $message = t('Settings group @id could not be found.', array('@id' => $id));

  if ($id) {
    variable_del($id);
    $message = t('Settings group @id has been deleted.', array('@id' => $id));

    if ($js == 'ajax') {
      $message = drupal_set_message($message, 'status');

      $commands = array();
      $commands[] = ajax_command_prepend('#page', theme('status_messages', $message));
      $page = array('#type' => 'ajax', '#commands' => $commands);
      ajax_deliver($page);
      exit;
    }
  }

  drupal_set_message($message, 'status');
  // Return user to settings overview.
  drupal_goto('admin/config/user-interface/owlcarousel');
}
