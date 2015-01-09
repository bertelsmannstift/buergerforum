<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
 * Description content type
 */
$plugin = array(
  'title'           => t('Private Message form'),
  'descripion'      => t('Private Message form'),
  'single'          => TRUE,
  'category'        => t('Ctools plugins'),
  'content_types'   => array('basic_page'),
  'render callback' => 'widget_privatemessage_form_render',
  'edit form'       => 'widget_privatemessage_form_form',
  'required context' => new ctools_context_required(t('User'), 'user'),
  'defaults'        => array(),
);

/**
 * Generates static block edit form.
 */
function widget_privatemessage_form_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Rendering of the body of the block.
 */
function widget_privatemessage_form_render($subtype, $conf, $args, $context) {
  $user = $context->data;
  $block = new stdClass();
  $block->title = t('Send a Message');
  $block->content = '';

  $object = db_select('pm_disable', 'd')
      ->fields('d')
      ->condition('d.uid', $user->uid)
      ->execute()
      ->fetchObject();
  
  $disabled = empty($object)?false:true;
  if (!user_is_anonymous() && !$disabled) {
    $recipient = user_load($args[0]);
    global $user;
    $sender = user_load($user->uid);
    if ($sender === $recipient) {
      return array();
    }
    $subject = '';
    module_load_include('pages.inc', 'privatemsg');
    $form = drupal_get_form('privatemsg_new', $args[0], $subject);
    $form['body']['#required'] = TRUE;

    $realname = bf_core_display_name($recipient);
    $form['info'] = array(
      '#weight' => -7,
      '#markup' => '<div class="privatemsg-to-label">' . t('Recipient: ') .
        '</div><div class="privatemsg-to-field">' . $realname .
        '</div><div class="privatemsg-from-label">' . t('Sender') . ':</div><div class="privatemsg-to-field">' . t('@name @mail',
        array('@name' => bf_core_display_name($sender), '@mail' => '<' . $sender->mail . '>')) .
        '</div>'
    );
    $form['recipient'] = array(
      '#name'  => 'recipient',
      '#type'  => 'hidden',
      '#value' => $recipient->name,
    );

    unset($form['token'], $form['body']['format'], $form['body'][1]);
    $block->content = $form;
  }
  return $block;
}