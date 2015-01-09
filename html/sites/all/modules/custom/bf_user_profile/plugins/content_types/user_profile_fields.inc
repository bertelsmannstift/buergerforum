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
  'title'            => t('User profile fields'),
  'descripion'       => t('User profile fields pane'),
  'category'         => t('Ctools plugins'),
  'required context' => array(new ctools_context_required(t('User'), 'user')),
  'render callback'  => 'user_profile_fields_pane_ctools_content_type_render'
);

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */

function user_profile_fields_pane_ctools_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $account = isset($context[0]->data) ? clone($context[0]->data) : NULL;
  if (!$account) {
    return NULL;
  }

  $vars['title'] = t('User profile');
  $vars['user_profile'] = array();

  //check expert role user
  if (in_array('Expert', $account->roles)) {
    $vars['user_profile']['expert'] = 'Expert';
  }
  //get nodes
  $query = db_select('node', 'n');
  $query->innerJoin('field_revision_field_editors', 'fe', 'fe.entity_id = n.nid');
  $query->condition('fe.field_editors_target_id', $account->uid);
  $query->condition('type', 'proposal');
  $query->fields('n', array('title', 'nid'));
  $query->distinct('n.nid');
  $result = $query->execute();
  $items=array();
  foreach ($result as $res) {
    $res->link = drupal_get_path_alias('node/' . $res->nid);
    $items[] = $res;
  }

  if (module_exists('bf_core')) {
    $vars['user_profile']['picture'] = bf_core_users_picture($account, 'userpic120', FALSE, array('width' => 120,
                                                                                                 'height' => 120));
    $vars['user_profile']['name'] = bf_core_display_name($account);
  } else {
    $vars['user_profile']['picture']='';
  }
  if (isset($account->field_committee) && isset($account->field_committee['und'][0]) && !empty($account->field_committee)) {
    $vars['user_profile']['commitee']=$account->field_committee['und'][0]['entity']->title;
  }
  $vars['user_profile']['editor_article'] = $items;
  $vars['user_profile']['gender'] = $account->field_sex['und'][0]['value'];
  $vars['user_profile']['register_date'] = date('d.m.Y', $account->created);
  //additional_information
  $user_phone = variable_get('additional_user_field_phone', FALSE);
  $user_title = variable_get('additional_user_field_title', FALSE);
  $user_education = variable_get('additional_user_field_education', FALSE);
  $user_sphere_of_activity = variable_get('additional_user_field_sphere_of_activity', FALSE);
  $user_website = variable_get('additional_user_field_website', FALSE);

  $vars['user_profile']['additional_information']=array(
    'field_phone'=>$user_phone?render(field_view_field('user', $account, 'field_phone')):FALSE,
    'field_user_title'=>$user_title?render(field_view_field('user', $account, 'field_user_title')):FALSE,
    'field_user_education'=>$user_education?render(field_view_field('user', $account, 'field_user_education')):FALSE,
    'field_sphere_of_activity'=>$user_sphere_of_activity?render(field_view_field('user', $account, 'field_sphere_of_activity')):FALSE,
    'field_user_website'=>$user_website?render(field_view_field('user', $account, 'field_user_website')):FALSE,
  );

  $block->content = theme('user_profile_fields', $vars);
  return $block;
}