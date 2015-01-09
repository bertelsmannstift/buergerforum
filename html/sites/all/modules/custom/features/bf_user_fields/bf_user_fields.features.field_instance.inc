<?php
/**
 * @file
 * bf_user_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bf_user_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_committee'
  $field_instances['user-user-field_committee'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_committee',
    'label' => 'Committee',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_displayed_name'
  $field_instances['user-user-field_displayed_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_displayed_name',
    'label' => 'Display Name',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_invite'
  $field_instances['user-user-field_invite'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_invite',
    'label' => 'Invite',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_last_name'
  $field_instances['user-user-field_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_message_count'
  $field_instances['user-user-field_message_count'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 1,
    'field_name' => 'field_message_count',
    'label' => 'Message count',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_phone'
  $field_instances['user-user-field_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'user-user-field_sex'
  $field_instances['user-user-field_sex'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_sex',
    'label' => 'Sex',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_sphere_of_activity'
  $field_instances['user-user-field_sphere_of_activity'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_sphere_of_activity',
    'label' => 'Sphere of activity',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'user-user-field_user_education'
  $field_instances['user-user-field_user_education'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_user_education',
    'label' => 'Education',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'user-user-field_user_title'
  $field_instances['user-user-field_user_title'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_user_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'user-user-field_user_website'
  $field_instances['user-user-field_user_website'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'exclude_cv' => 0,
    'field_name' => 'field_user_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Committee');
  t('Display Name');
  t('Education');
  t('First Name');
  t('Invite');
  t('Last Name');
  t('Message count');
  t('Phone');
  t('Sex');
  t('Sphere of activity');
  t('Title');
  t('Website');

  return $field_instances;
}
