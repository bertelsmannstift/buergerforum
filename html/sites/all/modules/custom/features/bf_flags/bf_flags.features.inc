<?php
/**
 * @file
 * bf_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function bf_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Comment approve".
  $flags['bf_comment_approve'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment approve',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_page',
    ),
    'flag_short' => 'approve',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'unapprove',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 'token',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'bf_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Comment close".
  $flags['bf_comment_close'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment close',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_proposal',
    ),
    'flag_short' => 'close',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'open',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => -9,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 'token',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'bf_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Comment faq".
  $flags['bf_comment_faq'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment faq',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_page',
    ),
    'flag_short' => 'Mark as FAQ',
    'flag_long' => 'Mark as FAQ',
    'flag_message' => '',
    'unflag_short' => 'Unmark as FAQ',
    'unflag_long' => 'Unmark as FAQ',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 'token',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'bf_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Kommentar verbergen".
  $flags['bf_comment_hide'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment hide',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_proposal',
    ),
    'flag_short' => 'hide',
    'flag_long' => 'Hide comment',
    'flag_message' => '',
    'unflag_short' => 'show',
    'unflag_long' => 'Show comment',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => -10,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 'token',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'bf_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Comment mark".
  $flags['bf_comment_mark'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment mark',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_page',
    ),
    'flag_short' => 'mark',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'unmark',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 'token',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'bf_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Comment vote".
  $flags['bf_comment_vote'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment vote',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_proposal',
    ),
    'flag_short' => '+',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '-',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'bf_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
