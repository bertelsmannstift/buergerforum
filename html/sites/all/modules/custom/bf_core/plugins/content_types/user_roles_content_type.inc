<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
 * Description content type.
 */

$plugin = array(
  'title' => t('User roles in info-article'),
  'descripion' => t('User roles in info-article'),
  'category' => t('Ctools plugins'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'render callback' => 'user_roles_content_type_secure_share_render',
  'edit form' => 'user_roles_content_type_secure_share_form',
  'defaults' => array()
);

/**
 * Generates static block edit form.
 */

function user_roles_content_type_secure_share_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}


/**
 * Rendering of the body of the block.
 */

function user_roles_content_type_secure_share_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;
  $user = user_load($node->uid);

  $roles = $user->roles;
  foreach ($roles as $id => $role) {
    if ($id <= 2) {
      unset($roles[$id]);
    } else {
      $roles[$id] = $role;
    }
  }
  $gender = $user->field_sex['und'][0]['value'];

  // Build the content type block.
  $block = new stdClass();
  $block->content = bf_core_get_gender_role(implode(', ', $roles),$gender);

  return $block;
}
