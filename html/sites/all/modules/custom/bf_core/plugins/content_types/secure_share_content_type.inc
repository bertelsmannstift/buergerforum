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
  'title' => t('Secure share widget'),
  'descripion' => t('Secure share widget'),
  'category' => t('Ctools plugins'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'render callback' => 'secure_share_content_type_secure_share_render',
  'edit form' => 'secure_share_content_type_secure_share_form',
  'defaults' => array()
);

/**
 * Generates static block edit form.
 */
 
function secure_share_content_type_secure_share_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}


/**
 * Rendering of the body of the block.
 */

function secure_share_content_type_secure_share_render($subtype, $conf, $args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  // Get secure share block
  $widget_block = module_invoke('secureshare_blocks', 'block_view', 'default');

  // Build the content type block.
  $block = new stdClass();
  $block->content = $widget_block['content'];

  return $block;
}
