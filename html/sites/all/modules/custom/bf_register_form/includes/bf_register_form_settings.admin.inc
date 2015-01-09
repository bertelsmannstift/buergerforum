<?php

/**
 * Configuration for system settings.
 */

/**
 * Settings form.
 */
function bf_register_form_settings_form($form, &$form_state) {
  ctools_add_css('reg_form_settings', 'bf_register_form', 'css');

  if (empty($form_state['count_fields'])) {
    $form_state['count_fields'] = 0;
  }
  //fieldset conference
  $form['conference_settings'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Conference'),
    '#access' => bf_register_form_manager_access(),
  );

  $form['conference_settings']['conference_title'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Conference title'),
    '#default_value' => variable_get('bf_conference_title', ''),
    '#required'      => TRUE
  );
  $form['conference_settings']['conference_place'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Conference place'),
    '#default_value' => variable_get('bf_conference_place', ''),
    '#required'      => TRUE
  );
  $format = 'd.m.Y';

  $form['conference_settings']['date_day'] = array(
    '#title'               => t('Date conference'),
    '#type'                => 'date_popup',
    '#date_format'         => $format,
    '#default_value'       => date('Y-m-d', strtotime(variable_get('bf_conference_date_day', date('Y-m-d', time())))),
    '#date_year_range'     => '-0:+2',
    '#date_timezone'       => 'Europe/Berlin',
    '#prefix'              => '<div class="setup-time">',
    '#date_label_position' => 'none',
  );
  $form['conference_settings']['date_time_with'] = array(
    '#type'          => 'textfield',
    '#required'      => TRUE,
    '#title'         => t('Time start'),
    '#default_value' => variable_get('bf_conference_date_time_with', date('h')),
  );
  $form['conference_settings']['date_time_by'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Time end'),
    '#default_value' => variable_get('bf_conference_date_time_by', date('h')),
  );

  $form['conference_settings']['date_online'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Date online'),
    '#access' => bf_register_form_manager_access(),
  );

  $form['conference_settings']['date_online']['with'] = array(
    '#title'               => t('Date start'),
    '#type'                => 'date_popup',
    '#date_format'         => $format,
    '#default_value'       => date('Y-m-d', strtotime(variable_get('bf_conference_date_online_with', date('Y-m-d',
      time())))),
    '#date_year_range'     => '-0:+2',
    '#date_timezone'       => 'Europe/Berlin',
    '#prefix'              => '<div class="setup-time">',
    '#date_label_position' => 'none',
  );
  $form['conference_settings']['date_online']['by'] = array(
    '#title'               => t('Date end'),
    '#type'                => 'date_popup',
    '#date_format'         => $format,
    '#default_value'       => date('Y-m-d', strtotime(variable_get('bf_conference_date_online_by', date('Y-m-d',
      time())))),
    '#date_year_range'     => '-0:+2',
    '#date_timezone'       => 'Europe/Berlin',
    '#prefix'              => '<div class="setup-time">',
    '#date_label_position' => 'none',
  );
  //fieldset registration
  $form['registration_settings'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Extended criteria'),
  );
  $form['registration_settings']['count_members_all'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Count members all'),
    '#default_value' => variable_get('bf_count_members_all', 450),
    '#required'      => TRUE
  );
  $form['registration_settings']['count_members_form'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Count members for registration form'),
    '#default_value' => variable_get('bf_count_members_form', 300),
    '#required'      => TRUE
  );

  //fieldset rules
  $form['rules_settings'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Rules for committee settings'),
    '#access' => bf_register_form_manager_access(),
  );

  $groups = field_group_read_groups(array(
    'name'      => 'user',
    'bundle'    => 'user',
    'view_mode' => 'full'
  ));

  if ($groups['user']['user']['form']['group_extparam']->children) {
    $rules_comitee = variable_get('bf_rules_comitee_serialize') ?
      unserialize(variable_get('bf_rules_comitee_serialize')) : array();
    $form['rules_settings']['field_sex']['Male'] = array(
      '#type'        => 'textfield',
      '#title'       => t('Male'),
      '#value'       => $rules_comitee && isset($rules_comitee['field_sex']['Male']) ?
        $rules_comitee['field_sex']['Male'] : 100,
      '#description' => t('Percentage, %')
    );
    $form['rules_settings']['field_sex']['Female'] = array(
      '#type'        => 'textfield',
      '#title'       => t('Female'),
      '#value'       => $rules_comitee && isset($rules_comitee['field_sex']['Female']) ?
        $rules_comitee['field_sex']['Female'] : 100,
      '#description' => t('Percentage, %')
    );
    foreach ($groups['user']['user']['form']['group_extparam']->children as $key => $field_name) {
      $entity_type = 'user';
      $bundle_name = 'user';
      $all_fields_info = field_info_fields();
      if (!isset($all_fields_info[$field_name])) {
        continue;
      }
      $info = field_info_instance($entity_type, $field_name, $bundle_name);
      $label = $info['label'];
      $form['rules_settings'][$field_name] = array(
        '#type'  => 'fieldset',
        '#title' => '<span class="view-link">' . t('Field - ' . l("$label ($field_name)",
          'admin/config/people/accounts/fields/'
            . $field_name)) . '</span><span class="delete-link">' . l(t("Delete field"), 'admin/config/people/accounts/fields/'
          . $field_name
          . '/delete') . '</span>',
      );
      //
      $field = field_info_field($field_name);
      $allowed_values = list_allowed_values($field);
      if (empty($allowed_values)) {
        unset($groups['user']['user']['form']['group_extparam']->children[$key]);
        continue;
      }
      foreach ($allowed_values as $allowed_value) {
        $form['rules_settings'][$field_name][$allowed_value] = array(
          '#type'        => 'textfield',
          '#title'       => t($allowed_value),
          '#value'       => $rules_comitee && isset($rules_comitee[$field_name][$allowed_value]) ?
            $rules_comitee[$field_name][$allowed_value] : 100,
          '#description' => t('Percentage, %')
        );
      }
    }
    //remove dublicate fields
    $groups['user']['user']['form']['group_extparam']->children = array_unique
    ($groups['user']['user']['form']['group_extparam']->children);
  }
  field_group_group_save($groups['user']['user']['form']['group_extparam']);

  //fieldset manager
  $form['manager_settings'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Extra fields form settings'),
    '#access' => bf_register_form_manager_access(),
  );
  $form['#tree'] = TRUE;

  $form['manager_settings']['add-more'] = array(
    '#type'        => 'submit',
    '#value'       => t('Add field'),
    '#description' => t("If the amount of boxes above isn't enough, click here to add more choices."),
    '#submit'      => array('bf_register_form_more_choice_callback_submit'),
    '#ajax'        => array(
      'callback' => 'bf_register_form_more_choice_callback_js',
      'wrapper'  => 'names-fieldset-wrapper',
    ),
  );
  $form['manager_settings']['params'] = array(
    '#prefix' => '<div id="names-fieldset-wrapper">',
    '#suffix' => '</div>',
  );
  $form['manager_settings']['params'][$form_state['count_fields']]['name_param'] = array();
  $form['manager_settings']['params'][$form_state['count_fields']]['allowed_values_param'] = array();
  $form['#submit'][] = 'bf_register_form_settings_submit';
  $form['#validate'][] = 'bf_register_form_settings_validate';

  return system_settings_form($form);
}

function bf_register_form_settings_validate(&$form, &$form_state) {
  $values = array();
  $textValues = '';
  $textName = '';
  $error = FALSE;
  foreach ($form_state['input'] as $keyparam => $param) {
    if (preg_match('/allowed_values_/', $keyparam)) {
      if ($param) {
        $list = explode("\n", $param);
        $list = array_map('trim', $list);
        $list = array_filter($list, 'strlen');
        foreach ($list as $keylist => $value) {
          // Check for a manually specified key.
          if (strpos($value, '|') !== FALSE) {
            list($keylist, $value) = explode('|', $value);
          }
          // Otherwise see if we need to use the value as the key. The "list" type
          // will automatically convert non-keyed lines to integers.
          else {
            $keylist = $value;
          }
          $values[$keylist] = (isset($value) && $value !== '') ? $value : $keylist;
        }
      }
      else {
        $error = TRUE;
        $textValues = $param;
      }
    }
    if (preg_match('/name_/', $keyparam)) {

      if (!$param) {
        $error = TRUE;
      }
      else {
        $textName = $param;
      }
    }
  }
  if ($error) {
    bf_register_form_create_fields($form, $form_state['count_fields'], $textName, $textValues);
    if (!$textName && !$textValues) {
      form_set_error('manager_settings', t('Empty field name and empty field values.'));
    }
    elseif (!$textName) {
      form_set_error('manager_settings', t('Empty field name.'));
    }
    else {
      form_set_error('manager_settings', t('Empty field values.'));
    }
  }
  else {
    $form_state['values']['finalValues'] = $values;
    $form_state['values']['finalName'] = $textName;
  }
}


function bf_register_form_settings_submit($form, &$form_state) {
  $machine_readable = strtolower($form_state['values']['finalName']);
  $machine_readable = preg_replace('@[^a-z0-9_]+@', '_', $machine_readable);
  if ($form_state['values']['finalValues'] && $form_state['values']['finalName']) {
    if (!field_info_field('field_' . $machine_readable)) {
      // Create the field base.
      //  $form_state['values']['finalValues'] += array('_none' => '- None -');
      $field = array(
        'field_name'        => 'field_' . $machine_readable,
        'type'              => 'list_text',
        'settings'          => array(
          'allowed_values' => $form_state['values']['finalValues'],
        ),
        'default_widget'    => 'options_select',
        'default_formatter' => 'list_default',
      );

      $field = field_create_field($field);

      // Create the field instance on the bundle.
      $instance = array(
        'field_name'  => 'field_' . $machine_readable,
        'entity_type' => 'user',
        'label'       => t($form_state['values']['finalName']),
        'bundle'      => 'user',
        'settings'    => array(),
        'widget'      => array(
          'type'   => 'options_select',
          'weight' => 0,
        ),
        'display'     => array(),
      );
      field_create_instance($instance);
      $groups = field_group_read_groups(array(
        'name'      => 'user',
        'bundle'    => 'user',
        'view_mode' => 'full'
      ));
      $groups['user']['user']['form']['group_extparam']->children[] = 'field_' . $machine_readable;
      field_group_group_save($groups['user']['user']['form']['group_extparam']);
    }
  }
  if (isset($form_state['input']['rules_settings']) && !empty($form_state['input']['rules_settings'])) {
    variable_set('bf_rules_comitee_serialize', serialize($form_state['input']['rules_settings']));
  }
  if ($form_state['input']['conference_settings'] && $form_state['input']['conference_settings']['date_day']['date']) {
    variable_set('bf_conference_date_day', $form_state['input']['conference_settings']['date_day']['date']);
  }
  if ($form_state['input']['conference_settings'] && $form_state['input']['conference_settings']['date_time_with']) {
    variable_set('bf_conference_date_time_with', $form_state['input']['conference_settings']['date_time_with']);
    variable_set('bf_conference_date_time_by', $form_state['input']['conference_settings']['date_time_by']);
  }
  if ($form_state['input']['conference_settings'] && $form_state['input']['conference_settings']['date_online']) {
    variable_set('bf_conference_date_online_with', $form_state['input']['conference_settings']['date_online']['with']['date']);
    variable_set('bf_conference_date_online_by',
      $form_state['input']['conference_settings']['date_online']['by']['date']);
  }
  if ($form_state['input']['conference_settings']) {
    bf_register_form_save_variable($form_state['input']['conference_settings']);
  }
  if ($form_state['input']['registration_settings']) {
    bf_register_form_save_variable($form_state['input']['registration_settings']);
  }
}

/**
 * ajax more choice callback
 */
function bf_register_form_more_choice_callback_js($form, &$form_state) {
  bf_register_form_create_fields($form, $form_state['count_fields']);
  return $form['manager_settings']['params'];
}

/**
 * submit more choice callback
 */
function bf_register_form_more_choice_callback_submit($form, &$form_state) {
  $form_state['count_fields'] += 1;
  $form_state['rebuild'] = TRUE;
}

/**
 * save in variable data form
 */
function bf_register_form_save_variable($arrayValues) {
  foreach ($arrayValues as $key => $value) {
    variable_set('bf_' . $key, $value);
  }
}


/**
 * Function add fields new param to form.
 */
function bf_register_form_create_fields(&$form, $id, $paramName = '', $paramValues = '') {
  $form['manager_settings']['params'][$id]['name_param'] = array(
    '#type'       => 'textfield',
    '#title'      => t('Param name'),
    '#attributes' => array(
      'id'   => 'name_' . ($id + 1),
      'name' => 'name_' . ($id + 1)
    ),
    '#value'      => $paramName,

  );
  $description = '<p>' . t('The possible values this field can contain. Enter one value per line, in the format key|label.');
  $description .= '<br/>' . t('The key is the stored value. The label will be used in displayed values and edit forms.');
  $description .= '<br/>' . t('The label is optional: if a line contains a single string, it will be used as key and label.');
  $description .= '</p>';

  $form['manager_settings']['params']['allowed_values_param_' . $id] = array(
    '#type'             => 'textarea',
    '#title'            => t('Param values'),
    '#value'            => $paramValues,
    '#rows'             => 10,
    '#element_validate' => array('bf_register_form_allowed_values_setting_validate'),
    '#attributes'       => array(
      'id'   => 'allowed_values_' . ($id + 1),
      'name' => 'allowed_values_' . ($id + 1)
    ),
    '#description'      => $description
  );
}

