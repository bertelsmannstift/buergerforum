<?php
/**
 * @file
 * bf_user_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bf_user_fields_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_params|user|user|form';
  $field_group->group_name = 'group_additional_params';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional fields',
    'weight' => '12',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_user_title',
      2 => 'field_user_education',
      3 => 'field_sphere_of_activity',
      4 => 'field_user_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-additional-params field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_additional_params|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extparam|user|user|form';
  $field_group->group_name = 'group_extparam';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ext param',
    'weight' => '14',
    'children' => array(
      0 => 'field_your_age',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-extparam field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_extparam|user|user|form'] = $field_group;

  return $export;
}
