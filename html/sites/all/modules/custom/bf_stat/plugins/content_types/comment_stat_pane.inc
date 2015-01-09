<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
* This plugin array is for editors pane.
*/
function bf_stat_comment_stat_pane_ctools_content_types() {
  return array(
    'title' => t('Comment statistics pane'),
    'description' => t('Comment statistic pane'),
    'single' => TRUE,
    'category' => t('BF'),
    'render callback' => 'bf_stat_comment_stat_pane_ctools_content_type_render',
  );
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function bf_stat_comment_stat_pane_ctools_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block->content = '';  
  $block->content .= '<div class="questions">'.t('Questions:').' <span>'.bf_stat_get_count_questions().'</span></div>';
  $block->content .= '<div class="unanswered">'.t('Unanswered questions:').' <span>'.bf_stat_get_count_unanswered_questions().'</span></div>';
  $block->content .= '<div class="answers">'.t('Answers:').' <span>'.bf_stat_get_count_answers().'</span></div>';
  $block->title = t('Comment statistics');
  
  return $block;
}