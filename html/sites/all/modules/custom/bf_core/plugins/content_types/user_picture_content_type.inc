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
  'title' => t('User picture in info-article'),
  'descripion' => t('User picture in info-article'),
  'category' => t('Ctools plugins'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'render callback' => 'user_picture_content_type_secure_share_render',
  'edit form' => 'user_picture_content_type_secure_share_form',
  'defaults' => array()
);

/**
 * Generates static block edit form.
 */

function user_picture_content_type_secure_share_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}


/**
 * Rendering of the body of the block.
 */

function user_picture_content_type_secure_share_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;
  $user = user_load($node->uid);

  if (user_is_anonymous()) {
    $image = array(
      'style_name' => 'bf_user_picture',
      'path' => 'public://default_profile.gif',
      'alt' => t('Your profile picture'),
    );
    $picture = theme('image_style', $image);
  } else {
    $image = bf_core_users_picture($user, 'bf_user_picture');
    $attributes = array(
      'attributes' => array('title' => t('View user profile.')),
      'html' => TRUE,
    );
    $picture = l($image, "user/$user->uid", $attributes);
  }

  // Build the content type block.
  $block = new stdClass();
  $block->content = $picture;

  return $block;
}
