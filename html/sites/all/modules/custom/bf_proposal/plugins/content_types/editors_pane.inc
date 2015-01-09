<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
* This plugin array is for editors pane.
*/
function bf_proposal_editors_pane_ctools_content_types() {
  return array(
    'title' => t('Editors pane'),
    'description' => t('Editors pane for proposal'),
    'single' => TRUE,
    'category' => t('BF'),
    'required context' => new ctools_context_required(t('Node'), 'node'),
    'render callback' => 'bf_proposal_editors_pane_ctools_content_type_render',
  );
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function bf_proposal_editors_pane_ctools_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block->content = '';  
  $node = $context->data;

  $image = array(
    'style_name' => 'userpic',
    'path' => 'public://default_profile.gif',
    'alt' => t('Your profile picture'),
  );
  $picture = theme('image_style', $image);
  $default_picture = $picture;
  $block_content = array();
  if (count($node->field_editors) > 0) {
    $editors = $node->field_editors[LANGUAGE_NONE];
    if (is_array($editors)) {
      foreach ( $editors as $editor ) {
        $user = user_load($editor['target_id']);
        if (user_is_anonymous()) {
          $picture = $default_picture;
          $display_name = t('Member');
        } else {
          $image = bf_core_users_picture($user);
          $attributes = array(
            'attributes' => array('title' => t('View user profile.')),
            'html' => TRUE,
          );
          $picture = l($image, "user/$user->uid", $attributes);
          $display_name = l($user->field_displayed_name[LANGUAGE_NONE][0]['value'], "user/$user->uid", array());
        }
        $block_content[$user->uid] = array(
          'picture'      => $picture,
          'display_name' => $display_name,
        );

      }
    }
  }
  $block->title = t('Editors');
  $editor_enter = '';
  global $user;
  if(bf_proposal_has_editor($user->uid, $node)){
    if (!user_is_anonymous() && 
        user_access('stop editor') &&
        variable_get('bf_proposal_can_stop_editor', 0)) {
      $block_content[$user->uid]['editor_stop'] = TRUE;
    }
  }else{
    if (!user_is_anonymous() && 
        user_access('become editor') && 
        bf_proposal_check_user_committee($user->uid, $node) &&
        variable_get('bf_proposal_can_become_editor', 0)) {
      if (!isset($node->field_editors[LANGUAGE_NONE]) || count($node->field_editors[LANGUAGE_NONE]) < 2) {
        $editor_enter .= '<div class="editor-enter">' . $default_picture;
        $editor_enter .= l(t('Become an editor'), 'node/'.$node->nid.'/become_editor', array()) . '</div>';
      }
    }
  }
  if (!empty($block_content)) {
    foreach ($block_content as $content) {
      $block->content .= '<div class="editor-block">' . $content['picture'];
      $block->content .= '<div class="editor-name">' . $content['display_name'] . '</div>';
      if (isset($content['editor_stop'])) {
        $block->content .= '<div class="editor-stop">';
        $block->content .= l(t('Reset editor roll'), 'node/'.$node->nid.'/stop_editor', array()) . '</div>';
      }
      $block->content .= '</div>';
    }
  }
  $block->content .= $editor_enter;
  return $block;
}