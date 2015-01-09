<?php
/**
 * @file
 *
 * File for description plugin.
 */

/**
* This plugin array is for editors pane.
*/
function bf_task_tasklist_pane_ctools_content_types() {
  return array(
    'title' => t('Tasklist pane'),
    'description' => t('Tasklist pane for all users'),
    'single' => TRUE,
    'category' => t('BF'),
    'required context' => new ctools_context_required(t('User'), 'user'),
    'render callback' => 'bf_task_tasklist_pane_ctools_content_type_render',
  );
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function bf_task_tasklist_pane_ctools_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  
  global $user;
  $current_user = user_load($user->uid);
  $nids = array();

  //contition date <= date begin
  $or = db_or();
  $or->condition('fdb.field_date_begin_value', date('Y-m-d'),'<=');
  $or->condition('fdb.field_date_begin_value', NULL, 'IS');

  //create account
  if (user_is_anonymous()) {
    $query = db_select('field_data_field_users', 'fu')->distinct();
    $query->innerJoin('field_data_field_task_type', 'ftt', 'ftt.entity_id = fu.entity_id');
    $query->leftJoin('field_data_field_date_begin', 'fdb', 'fdb.entity_id = fu.entity_id');
    $query->leftJoin('field_data_field_date', 'fd', 'fd.entity_id = fu.entity_id');
    $query->innerJoin('node', 'n', 'n.nid = fu.entity_id');
    $query->fields('n', array('nid'));
    $query->fields('fdb', array('field_date_begin_value'))
      ->condition('ftt.field_task_type_value','create account')
      ->condition('n.type','task')
      ->condition('n.status',1)
      ->condition($or)
      ->condition('fd.field_date_value', date('Y-m-d'),'>=')
      ->condition('fu.field_users_target_id', $user->uid);
    $result = $query->execute();
    foreach ($result as $row){
      $nids[] = $row->nid;
    }
  }

  //group task
  $query = db_select('field_data_field_users', 'fu')->distinct();
  $query->innerJoin('field_data_field_task_type', 'ftt', 'ftt.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date_begin', 'fdb', 'fdb.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date', 'fd', 'fd.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_poll', 'fp', 'fp.entity_id = fu.entity_id');
  $query->innerJoin('node', 'n', 'n.nid = fu.entity_id');
  $query->fields('n', array('nid'));
  $query->fields('fp', array('field_poll_target_id'))
  ->condition('ftt.field_task_type_value','group task')
  ->condition('n.type','task')
  ->condition('n.status',1)
  ->condition($or)
  ->condition('fd.field_date_value', date('Y-m-d'),'>=')
  ->condition('fu.field_users_target_id',$user->uid);
  $result = $query->execute();

  foreach ($result as $row){
    if (!user_is_anonymous()) {
      $nids[] = $row->nid;
    } else {
      if (empty($row->field_poll_target_id)) {
        $nids[] = $row->nid;
      }
    }
  }
  
  //fill profile
  if($user->uid > 0){
    // don't show to unregistered users
    $query = db_select('field_data_field_users', 'fu')->distinct();
    $query->innerJoin('field_data_field_task_type', 'ftt', 'ftt.entity_id = fu.entity_id');
    $query->leftJoin('field_data_field_date_begin', 'fdb', 'fdb.entity_id = fu.entity_id');
    $query->leftJoin('field_data_field_date', 'fd', 'fd.entity_id = fu.entity_id');
    $query->innerJoin('node', 'n', 'n.nid = fu.entity_id');
    $query->fields('n', array('nid'));
    $query->fields('fdb', array('field_date_begin_value'))
    ->condition('ftt.field_task_type_value','fill profile')
    ->condition('n.type','task')
    ->condition('n.status',1)
    ->condition($or)
    ->condition('fd.field_date_value', date('Y-m-d'),'>=')
    ->condition('fu.field_users_target_id',$user->uid);
    $result = $query->execute();
    $tmp_nids = array();
    foreach ($result as $row){
      $tmp_nids[] = $row->nid;
    }
    if(!empty($tmp_nids)){
      if(!bf_task_check_user_profile_fullfilled($current_user)){
        $nids = array_merge($nids, $tmp_nids);
      }
    }
  }
  
  //edit proposal
  $query = db_select('field_data_field_users', 'fu')->distinct();
  $query->innerJoin('field_data_field_task_type', 'ftt', 'ftt.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date_begin', 'fdb', 'fdb.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date', 'fd', 'fd.entity_id = fu.entity_id');
  $query->innerJoin('node', 'n', 'n.nid = fu.entity_id');
  $query->fields('n', array('nid'));
  $query->fields('fdb', array('field_date_begin_value'))
  ->condition('ftt.field_task_type_value','edit proposal')
  ->condition('n.type','task')
  ->condition('n.status',1)
  ->condition($or)
  ->condition('fd.field_date_value', date('Y-m-d'),'>=')
  ->condition('fu.field_users_target_id',$user->uid);
  $result = $query->execute();
  $tmp_nids = array();
  foreach ($result as $row){
    $tmp_nids[] = $row->nid;
  }
  if(!empty($tmp_nids)){
    if(bf_task_check_user_is_editor_related_proposals($current_user)){
      $nids = array_merge($nids, $tmp_nids);
    }
  }

  //vote
  $query = db_select('field_data_field_users', 'fu')->distinct();
  $query->innerJoin('field_data_field_task_type', 'ftt', 'ftt.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date_begin', 'fdb', 'fdb.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date', 'fd', 'fd.entity_id = fu.entity_id');
  $query->innerJoin('node', 'n', 'n.nid = fu.entity_id');
  $query->fields('n', array('nid'));
  $query->fields('fdb', array('field_date_begin_value'))
  ->condition('ftt.field_task_type_value','vote')
  ->condition('n.type','task')
  ->condition('n.status',1)
  ->condition($or)
  ->condition('fd.field_date_value', date('Y-m-d'),'>=')
  ->condition('fu.field_users_target_id',$user->uid);
  $result = $query->execute();
  $tmp_nids = array();
  foreach ($result as $row){
    $tmp_nids[] = $row->nid;
  }

  if(!empty($tmp_nids)){
    if (!user_is_anonymous()) {
      if(bf_task_check_user_has_related_votes($current_user)){
        $phase_id = variable_get('bf_forum_phase', 1);
        $phase_name = taxonomy_term_load($phase_id)->name;
        if ($phase_name == 'Voting') {
          $nids = array_merge($nids, $tmp_nids);
        }
      }
    }
  }
  
  //answer question
  $query = db_select('field_data_field_users', 'fu')->distinct();
  $query->innerJoin('field_data_field_task_type', 'ftt', 'ftt.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date_begin', 'fdb', 'fdb.entity_id = fu.entity_id');
  $query->leftJoin('field_data_field_date', 'fd', 'fd.entity_id = fu.entity_id');
  $query->innerJoin('node', 'n', 'n.nid = fu.entity_id');
  $query->fields('n', array('nid'));
  $query->fields('fdb', array('field_date_begin_value'))
  ->condition('ftt.field_task_type_value','answer question')
  ->condition('n.type','task')
  ->condition('n.status',1)
  ->condition($or)
  ->condition('fd.field_date_value', date('Y-m-d'),'>=')
  ->condition('fu.field_users_target_id',$user->uid);
  $result = $query->execute();

  $tmp_nids = array();
  foreach ($result as $row) {
    $tmp_nids[] = $row->nid;
  }
  if (!empty($tmp_nids)) {
    $questions = bf_task_check_user_has_unanswered_questions($current_user);
    if($questions){
      $nids = array_merge($nids, $tmp_nids);
    }
  }

  $nids = array_unique($nids);
  $arg = implode('+', $nids);
  $view = views_get_view('bf_main_page');
  $view->init();
  $view->set_display('block_1');
  $view->set_arguments(array($arg));
  $view->pre_execute();
  $view->execute();
  $result = $view->render();
  
  $block = new stdClass();
  $block->title = t('My tasks');
  $block->content = $result;
  if (!isset($result)) {
    $block->content = t('No task available');
  }
  return $block;
}