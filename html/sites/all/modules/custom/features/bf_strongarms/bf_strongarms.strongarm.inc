<?php
/**
 * @file
 * bf_strongarms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bf_strongarms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'actions';
  $strongarm->value = array();
  $export['actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_advpoll';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_article';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_commentary_complaint';
  $strongarm->value = 'edit-secureshare';
  $export['additional_settings__active_tab_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_committee';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_info_article';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_proposal';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_simplenews';
  $strongarm->value = 'edit-secureshare';
  $export['additional_settings__active_tab_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_task';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_toolbar-disabled';
  $strongarm->value = TRUE;
  $export['adminimal_admin_menu_toolbar-disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ajax_comments_node_types';
  $strongarm->value = array(
    'page' => 'page',
    'proposal' => 'proposal',
    'advpoll' => 0,
    'article' => 0,
    'committee' => 0,
    'info_article' => 0,
    'poll' => 0,
    'simplenews' => 0,
    'task' => 0,
  );
  $export['ajax_comments_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ajax_comments_notify';
  $strongarm->value = 0;
  $export['ajax_comments_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous';
  $strongarm->value = 'Anonymous';
  $export['anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_destination_id';
  $strongarm->value = 'download';
  $export['backup_migrate_destination_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_profile_id';
  $strongarm->value = 'default';
  $export['backup_migrate_profile_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_source_id';
  $strongarm->value = 'db';
  $export['backup_migrate_source_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bf_articles_field_sort_by';
  $strongarm->value = 'created';
  $export['bf_articles_field_sort_by'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bf_articles_field_sort_order';
  $strongarm->value = 'DESC';
  $export['bf_articles_field_sort_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_default_settings';
  $strongarm->value = array(
    'validate_options' => array(
      'disable_html5' => 1,
      'captcha' => '1',
      'validate_onsubmit' => '1',
      'validate_onblur' => '0',
      'validate_onblur_always' => '0',
      'validate_onkeyup' => '1',
      'validate_before_ajax' => '0',
      'show_messages' => '0',
    ),
    'error' => array(
      'prefix' => '',
      'suffix' => '',
      'scrollto_errormessage' => 1,
      'scroll_speed' => '1000',
      'error_element' => 'label',
    ),
    'error_placement' => array(
      'error_placement_default' => '5',
      'jquery_selector' => '',
      'custom_error_function' => '',
    ),
    'include_hidden' => array(
      'include_hidden_fields' => 0,
      'validate_tabs' => 0,
      'include_hidden' => '',
    ),
  );
  $export['clientside_validation_default_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_filter_paths';
  $strongarm->value = '0';
  $export['clientside_validation_filter_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_override_jquery_form';
  $strongarm->value = '0';
  $export['clientside_validation_override_jquery_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_path_list';
  $strongarm->value = 'admin/structure/views/*
node/add/*';
  $export['clientside_validation_path_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_use_minified';
  $strongarm->value = '0';
  $export['clientside_validation_use_minified'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_validate_all';
  $strongarm->value = '0';
  $export['clientside_validation_validate_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_validate_specific';
  $strongarm->value = 'user_register_form';
  $export['clientside_validation_validate_specific'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_article';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_commentary_complaint';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_committee';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_info_article';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_page';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_poll';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_poll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_proposal';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_simplenews';
  $strongarm->value = 0;
  $export['comment_abuse_comment_node_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_comment_node_task';
  $strongarm->value = 1;
  $export['comment_abuse_comment_node_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_complaint_fail_message';
  $strongarm->value = 'Your complaint has been not received.';
  $export['comment_abuse_complaint_fail_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_complaint_popup_title';
  $strongarm->value = 'Complain about a message...';
  $export['comment_abuse_complaint_popup_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_complaint_success_message';
  $strongarm->value = 'Your complaint has been received.';
  $export['comment_abuse_complaint_success_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_complaint_text';
  $strongarm->value = 'Complain about a message';
  $export['comment_abuse_complaint_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_email_list';
  $strongarm->value = '';
  $export['comment_abuse_email_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_email_notification';
  $strongarm->value = 0;
  $export['comment_abuse_email_notification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_abuse_use_popup';
  $strongarm->value = '1';
  $export['comment_abuse_use_popup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_advpoll';
  $strongarm->value = '1';
  $export['comment_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_advpoll';
  $strongarm->value = 0;
  $export['comment_anonymous_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_simplenews';
  $strongarm->value = 0;
  $export['comment_anonymous_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_advpoll';
  $strongarm->value = 1;
  $export['comment_default_mode_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_simplenews';
  $strongarm->value = 1;
  $export['comment_default_mode_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_advpoll';
  $strongarm->value = '50';
  $export['comment_default_per_page_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_simplenews';
  $strongarm->value = '50';
  $export['comment_default_per_page_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_advpoll';
  $strongarm->value = 1;
  $export['comment_form_location_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_simplenews';
  $strongarm->value = 1;
  $export['comment_form_location_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_advpoll';
  $strongarm->value = '1';
  $export['comment_preview_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_simplenews';
  $strongarm->value = '1';
  $export['comment_preview_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_simplenews';
  $strongarm->value = '1';
  $export['comment_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_advpoll';
  $strongarm->value = 1;
  $export['comment_subject_field_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_simplenews';
  $strongarm->value = 1;
  $export['comment_subject_field_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 1;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'confirm add comment';
  $strongarm->value = FALSE;
  $export['confirm add comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'confirm form id';
  $strongarm->value = 'comment_node_proposal_form';
  $export['confirm form id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_default_status';
  $strongarm->value = 1;
  $export['contact_default_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_blocked_user';
  $strongarm->value = 1;
  $export['counter_blocked_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_insert_delay';
  $strongarm->value = '1';
  $export['counter_insert_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_override';
  $strongarm->value = 1;
  $export['counter_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_published_node';
  $strongarm->value = 1;
  $export['counter_published_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_refresh_delay';
  $strongarm->value = '10';
  $export['counter_refresh_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_registered_user';
  $strongarm->value = 1;
  $export['counter_registered_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_show_counter_since';
  $strongarm->value = 1;
  $export['counter_show_counter_since'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_show_ip';
  $strongarm->value = 1;
  $export['counter_show_ip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_show_server_ip';
  $strongarm->value = 1;
  $export['counter_show_server_ip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_show_site_counter';
  $strongarm->value = 1;
  $export['counter_show_site_counter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_show_unique_visitor';
  $strongarm->value = 1;
  $export['counter_show_unique_visitor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_skip_admin';
  $strongarm->value = 0;
  $export['counter_skip_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_statistic_month';
  $strongarm->value = 1;
  $export['counter_statistic_month'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_statistic_today';
  $strongarm->value = 1;
  $export['counter_statistic_today'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_statistic_week';
  $strongarm->value = 1;
  $export['counter_statistic_week'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_statistic_year';
  $strongarm->value = 1;
  $export['counter_statistic_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_unpublished_node';
  $strongarm->value = 1;
  $export['counter_unpublished_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'counter_unregistered_user';
  $strongarm->value = 1;
  $export['counter_unregistered_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'XHCCQBIV-aPWhji8dX0Ka-u_PcH3dmphIIr_hQOCD4M';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1396850169;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'n3lv6c';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1396850145;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_negative_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_negative_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_or_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_or_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_phrase_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_phrase_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_article_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_article_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_committee_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_committee_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_info_article_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_info_article_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_page_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_page_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_poll_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_poll_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_proposal_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_proposal_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_simplenews_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_simplenews_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_task_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_task_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_voc1_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_voc1_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_voc2_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_voc2_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_voc3_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_voc3_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_voc4_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_voc4_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_any_force';
  $strongarm->value = 0;
  $export['custom_search_any_force'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_any_restricts';
  $strongarm->value = 0;
  $export['custom_search_any_restricts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_filter';
  $strongarm->value = 'disabled';
  $export['custom_search_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_filter_label';
  $strongarm->value = 'Filter the results';
  $export['custom_search_filter_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_node_types';
  $strongarm->value = array(
    'article' => 0,
    'committee' => 0,
    'info_article' => 0,
    'page' => 0,
    'poll' => 0,
    'proposal' => 0,
    'simplenews' => 0,
    'task' => 0,
  );
  $export['custom_search_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_node_types_excluded';
  $strongarm->value = array(
    'article' => 'article',
    'committee' => 'committee',
    'poll' => 'poll',
    'simplenews' => 'simplenews',
    'task' => 'task',
    'info_article' => 0,
    'page' => 0,
    'proposal' => 0,
  );
  $export['custom_search_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_other';
  $strongarm->value = array(
    'user' => 0,
  );
  $export['custom_search_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_advanced_search';
  $strongarm->value = 0;
  $export['custom_search_results_advanced_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_advanced_search_collapsed';
  $strongarm->value = 1;
  $export['custom_search_results_advanced_search_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_advanced_search_collapsible';
  $strongarm->value = 1;
  $export['custom_search_results_advanced_search_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_comment';
  $strongarm->value = 1;
  $export['custom_search_results_info_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_date';
  $strongarm->value = 1;
  $export['custom_search_results_info_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_type';
  $strongarm->value = 1;
  $export['custom_search_results_info_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_user';
  $strongarm->value = 1;
  $export['custom_search_results_info_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_search';
  $strongarm->value = 1;
  $export['custom_search_results_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_target';
  $strongarm->value = '_self';
  $export['custom_search_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector';
  $strongarm->value = 'select';
  $export['custom_search_type_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector_all';
  $strongarm->value = '-Any-';
  $export['custom_search_type_selector_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector_label';
  $strongarm->value = 'Search for';
  $export['custom_search_type_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_type_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_use_iso8601';
  $strongarm->value = 0;
  $export['date_api_use_iso8601'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '0';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'd.m.Y H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'd.m.Y';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_privatemsg_current_day';
  $strongarm->value = 'g:i a';
  $export['date_format_privatemsg_current_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_privatemsg_current_year';
  $strongarm->value = 'M j';
  $export['date_format_privatemsg_current_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_privatemsg_years';
  $strongarm->value = 'n/j/y';
  $export['date_format_privatemsg_years'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'd.m.Y';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_extparam|user|user|form' => FALSE,
    'group_additional_params|user|user|form' => FALSE,
  );
  $export['default_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array(
    'faq' => TRUE,
    'cas' => TRUE,
  );
  $export['default_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_secureshare_profiles';
  $strongarm->value = array(
    'Info article' => FALSE,
  );
  $export['default_secureshare_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_query';
  $strongarm->value = 0;
  $export['dev_query'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_advpoll';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_info_article';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_proposal';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_simplenews';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_advpoll';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_info_article';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_proposal';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_simplenews';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_advpoll';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_info_article';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_proposal';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_simplenews';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'ixDTuCVGJ786BUDfXd52SekTY66ByulIfVoPZg4z2cI';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'email__active_tab';
  $strongarm->value = 'edit-email-admin-created';
  $export['email__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'empty_timezone_message';
  $strongarm->value = 0;
  $export['empty_timezone_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'flagging' => array(
      0 => 'flagging',
      1 => 'flagging_id',
    ),
    'i18n_translation' => array(
      0 => 'i18n_translation_set',
      1 => 'tsid',
    ),
    'privatemsg_message' => array(
      0 => 'pm_message',
      1 => 'mid',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_advpoll';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_commentary_complaint';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_info_article';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_page';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_simplenews';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'node' => 'node',
    'taxonomy_term' => 0,
    'comment' => 0,
    'user' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_advpoll';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_commentary_complaint';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_info_article';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_page';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_simplenews';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_advpoll';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_commentary_complaint';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_info_article';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_page';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_simplenews';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__page';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_shared_labels';
  $strongarm->value = 1;
  $export['entity_translation_shared_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_workflow_enabled';
  $strongarm->value = 0;
  $export['entity_translation_workflow_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'faq_exposed_form_value';
  $strongarm->value = '';
  $export['faq_exposed_form_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'bf_content_types' => array(
      'variable' => '9aab16e325165438c57709a6bfb6d095',
      'field_base' => '703f63ef17bd4ee58a39e86e887ae606',
      'field_instance' => 'db720e204b705f1d714de07f48e8e519',
      'taxonomy' => 'e5602b649898ba8bf06dcd32873151c3',
      'dependencies' => '17e840b1d99a30ab0bf7e3d219827916',
      'node' => 'bbf6ef7f0e8dbbe1a7ca28983490145e',
    ),
    'bf_languages' => array(
      'language' => '7b2b9bf0dd93c821f5d9e6ed293ab51f',
      'dependencies' => '26da803a3439815a5c0cf87a7752c0bb',
    ),
    'bf_panels' => array(
      'dependencies' => '6a0b338cb71f39f77b2b0870c767354d',
      'page_manager_handlers' => '7e3d0ec98c22412ded69ba33be353f31',
      'page_manager_pages' => '53e4a39000d7f448eb89c4a26fe8de27',
      'panels_mini' => '2239d7c2244d710861ac045afcb5a83c',
    ),
    'bf_views' => array(
      'dependencies' => '7aa8ab6d0a3daf0b9466533d07b8ba38',
      'views_view' => 'f4acea8f7c1e38058de1a60d6d2acfb6',
    ),
    'bf_menu' => array(
      'menu_custom' => '5138f1b252b4a4dbe9000dfae3f46865',
      'dependencies' => 'f8159c18e6bfe8da4339a8dbeaebe8e5',
      'menu_links' => '9f0e4180ed41194580b1a79d46e115e1',
    ),
    'bf_roles_and_permissions' => array(
      'user_role' => 'e4aef355db154fd80f42e7fc0dafa482',
      'user_permission' => '540ea5777418dda4b18b095f3f2458a8',
      'dependencies' => '288cef0fa2b2a08702dd0b0760e95a28',
    ),
    'bf_image_styles' => array(
      'dependencies' => 'b5cc61d4a303d79dab8a8515c295c0c2',
      'image' => '63c9c4b394524469774583c5530b8f86',
    ),
    'bf_ckeditor' => array(
      'ckeditor_profile' => '917a86abff2b82e2b328cfbb754feb9a',
      'dependencies' => 'e7e6abdc6a9a27d31bad3334af806782',
      'filter' => '50b124df1d60210769737f249717d051',
    ),
    'bf_dependencies' => array(
      'dependencies' => '0cd1475c05fcac7f13eb59736e4d945e',
    ),
    'bf_secure_share' => array(
      'dependencies' => 'f45255965b941f1129e9358e0ce6713a',
      'secureshare_profiles' => 'a9308b68b95cb40225dfd9367e335f77',
    ),
    'bf_user_fields' => array(
      'field_base' => '8a3892102894a42b4257c02a25adf714',
      'field_instance' => '3f01a93e5773b7411008688147cb3620',
      'dependencies' => '224398678114cd5b9b474f15173a0bd8',
    ),
    'bf_strongarms' => array(
      'variable' => '69be35ed0474ba1a544e46fb73bf8b95',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'bf_rules' => array(
      'dependencies' => '77c278d18d04f1e8b8c56a499708316c',
      'rules_config' => 'acca7056a61227092e43ed9a40a6dbb9',
    ),
    'bf_flags' => array(
      'dependencies' => '7a33d0dd70eaa5e0a423ea0f635495d2',
      'flag' => 'f3fabef7f9f76b4d81c0baebee35a659',
    ),
    'bf_elysia_cron' => array(
      'dependencies' => '60be5c50443b13dca7c4c1e34ff72507',
      'elysia_cron' => '436cf64ae0ec1ef02e13b6c7b9e0d390',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_page';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'author' => array(
          'weight' => '-2',
        ),
      ),
      'display' => array(
        'flag_bf_comment_faq' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_proposal';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'author' => array(
          'weight' => '-2',
        ),
      ),
      'display' => array(
        'flag_bf_comment_vote' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__simplenews';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'rabbit_hole' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__bf_owl_carousel_slides';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'rabbit_hole' => array(
          'weight' => '0',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__bf_owl_carousel_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '6',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '5',
        ),
        'privatemsg' => array(
          'weight' => '3',
        ),
        'picture' => array(
          'weight' => '2',
        ),
        'contact' => array(
          'weight' => '1',
        ),
        'locale' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'privatemsg_send_new_message' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'simplenews' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = 'sites/default/files/temp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'finalName';
  $strongarm->value = '';
  $export['finalName'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'finalValues';
  $strongarm->value = array();
  $export['finalValues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_default_flag_status';
  $strongarm->value = array(
    'bf_comment_close' => TRUE,
    'bf_comment_faq' => TRUE,
    'bf_comment_hide' => TRUE,
  );
  $export['flag_default_flag_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlmail_debug';
  $strongarm->value = 0;
  $export['htmlmail_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlmail_postfilter';
  $strongarm->value = 'full_html';
  $export['htmlmail_postfilter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlmail_theme';
  $strongarm->value = 'bf_theme';
  $export['htmlmail_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_language_list';
  $strongarm->value = '1';
  $export['i18n_language_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_advpoll';
  $strongarm->value = 1;
  $export['i18n_node_extended_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_info_article';
  $strongarm->value = 1;
  $export['i18n_node_extended_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_simplenews';
  $strongarm->value = 1;
  $export['i18n_node_extended_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_advpoll';
  $strongarm->value = array();
  $export['i18n_node_options_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_info_article';
  $strongarm->value = array();
  $export['i18n_node_options_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_page';
  $strongarm->value = array();
  $export['i18n_node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_simplenews';
  $strongarm->value = array();
  $export['i18n_node_options_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_select_nodes';
  $strongarm->value = 0;
  $export['i18n_select_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_select_page_block';
  $strongarm->value = 1;
  $export['i18n_select_page_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_select_page_list';
  $strongarm->value = 'admin/*';
  $export['i18n_select_page_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_select_page_mode';
  $strongarm->value = '0';
  $export['i18n_select_page_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_select_skip_tags';
  $strongarm->value = 'views';
  $export['i18n_select_skip_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_select_taxonomy';
  $strongarm->value = 0;
  $export['i18n_select_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => '0',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'pictures/imce',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
    3 => array(
      'name' => 'authorized',
      'usertab' => 1,
      'filesize' => '1',
      'quota' => '2',
      'tuquota' => '0',
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => '1',
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    4 => array(
      'weight' => '0',
      'public_pid' => '1',
    ),
    6 => array(
      'weight' => '0',
      'public_pid' => '1',
    ),
    5 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    3 => array(
      'weight' => '0',
      'public_pid' => '1',
    ),
    2 => array(
      'weight' => 11,
      'public_pid' => 0,
    ),
    1 => array(
      'weight' => 12,
      'public_pid' => 0,
    ),
  );
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;
  $export['imce_settings_absurls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_disable_private';
  $strongarm->value = 1;
  $export['imce_settings_disable_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';
  $export['imce_settings_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';
  $export['imce_settings_textarea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';
  $export['imce_settings_thumb_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'standard';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1390808332;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'javascript_parsed';
  $strongarm->value = array(
    0 => 'misc/drupal.js',
    1 => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/themes/contrib/radix/assets/javascripts/modernizr-2.6.1.min.js',
    4 => 'sites/all/themes/contrib/radix/assets/javascripts/radix-script.js',
    5 => 'misc/progress.js',
    6 => 'misc/ajax.js',
    7 => 'sites/all/modules/contrib/lightbox2/js/lightbox.js',
    8 => 'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
    9 => 'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.js',
    10 => 'sites/all/modules/contrib/ctools/js/modal.js',
    11 => 'sites/all/modules/contrib/modal_forms/js/modal_forms_popup.js',
    12 => 'sites/all/modules/contrib/panels/js/panels.js',
    13 => 'sites/all/modules/contrib/admin_menu/admin_devel/admin_devel.js',
    14 => 'sites/all/modules/custom/bf_comment/js/image-collapse.js',
    15 => 'sites/all/modules/contrib/devel/devel_krumo_path.js',
    16 => 'sites/all/modules/contrib/custom_search/js/custom_search.js',
    17 => 'modules/contextual/contextual.js',
    18 => 'sites/all/modules/contrib/ctools/js/dropbutton.js',
    19 => 'sites/all/modules/contrib/adminimal_admin_menu/adminimal_admin_menu.js',
    20 => 'sites/all/themes/custom/bf_theme/assets/js/admin.js',
    21 => 'sites/all/modules/contrib/responsive_menus/styles/google_nexus/js/responsive_menus_google_nexus.js',
    22 => 'sites/all/libraries/GoogleNexusWebsiteMenu/js/gnmenu.js',
    23 => 'sites/all/libraries/GoogleNexusWebsiteMenu/js/classie.js',
    24 => 'sites/all/modules/custom/bf_core/js/toolbar_search.js',
    25 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    'refresh:de' => 'waiting',
    26 => 'misc/form.js',
    27 => 'sites/all/modules/custom/bf_comment/js/collapse.js',
    28 => 'sites/all/themes/custom/bf_theme/assets/js/bootstrap.min.js',
    29 => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.5/jquery.js',
    30 => 'sites/all/themes/contrib/adminimal_theme/js/adminimal_theme.js',
    31 => 'sites/all/modules/contrib/views/js/base.js',
    32 => 'sites/all/modules/contrib/views/js/ajax_view.js',
    33 => 'sites/all/modules/contrib/views_bulk_operations/js/views_bulk_operations.js',
    34 => 'sites/all/modules/contrib/views/js/views-contextual.js',
    35 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.core.js',
    36 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.datepicker.js',
    37 => 'modules/locale/locale.datepicker.js',
    38 => 'sites/all/modules/contrib/date/date_popup/jquery.timeentry.pack.js',
    39 => 'sites/all/modules/contrib/date/date_popup/date_popup.js',
    40 => 'misc/states.js',
    41 => 'sites/all/modules/contrib/ckeditor/includes/ckeditor.utils.js',
    42 => 'sites/all/libraries/ckeditor/ckeditor.js',
    43 => 'misc/textarea.js',
    44 => 'modules/filter/filter.js',
    45 => 'misc/collapse.js',
    46 => 'misc/tableheader.js',
    47 => 'sites/all/modules/contrib/rate/rate.js',
    48 => 'sites/all/modules/contrib/secureshare/js/secureshare.d7.init.js',
    49 => 'sites/all/libraries/socialshareprivacy/jquery.socialshareprivacy.js',
    50 => 'sites/all/modules/contrib/flag/theme/flag.js',
    51 => 'sites/all/modules/contrib/ajax_comments/ajax_comments.js',
    52 => 'misc/tabledrag.js',
    53 => 'sites/all/modules/contrib/token/jquery.treeTable.js',
    54 => 'sites/all/modules/contrib/token/token.js',
    55 => 'sites/all/modules/contrib/flag/theme/flag-admin.js',
    56 => 'sites/all/modules/contrib/ctools/js/auto-submit.js',
    57 => 'misc/jquery.ba-bbq.js',
    58 => 'sites/all/modules/contrib/views/js/views-list.js',
    59 => 'sites/all/modules/contrib/views/js/ajax.js',
    60 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.widget.js',
    61 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.tabs.js',
    62 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.button.js',
    63 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.mouse.js',
    64 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.draggable.js',
    65 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.position.js',
    66 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.resizable.js',
    67 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.dialog.js',
    68 => 'sites/all/modules/contrib/views/js/jquery.ui.dialog.patch.js',
    69 => 'sites/all/modules/contrib/ctools/js/dependent.js',
    70 => 'sites/all/modules/contrib/ctools/js/collapsible-div.js',
    71 => 'sites/all/modules/contrib/views/js/views-admin.js',
    72 => 'sites/all/modules/contrib/features/features.js',
    73 => 'misc/vertical-tabs.js',
    74 => 'misc/autocomplete.js',
    75 => 'modules/user/user.js',
    76 => 'modules/file/file.js',
    77 => 'sites/all/modules/contrib/ctools/js/ajax-responder.js',
  );
  $export['javascript_parsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_admin';
  $strongarm->value = 1;
  $export['jquery_update_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'none';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_advpoll';
  $strongarm->value = '0';
  $export['language_content_type_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_commentary_complaint';
  $strongarm->value = '0';
  $export['language_content_type_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_simplenews';
  $strongarm->value = '0';
  $export['language_content_type_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => 1,
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
    'javascript' => '',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-session' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_session',
        'switcher' => 'locale_language_switcher_session',
        'url_rewrite' => 'locale_language_url_rewrite_session',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_field_language_fallback';
  $strongarm->value = 1;
  $export['locale_field_language_fallback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailsystem_theme';
  $strongarm->value = 'default';
  $export['mailsystem_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MimeMailSystem',
    'mimemail' => 'MimeMailSystem',
    'htmlmail' => 'MimeMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = 0;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manager_settings';
  $strongarm->value = array();
  $export['manager_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    1 => 'devel',
    2 => 'features',
    3 => 'main-menu',
    4 => 'management',
    5 => 'menu-menu-info-article',
    6 => 'navigation',
    7 => 'user-menu',
    8 => 'menu-bf-footer',
    9 => 'menu-bf-footer-top-menu',
    10 => 'menu-menu-for-proposal',
    11 => 'menu-project-manager',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 494,
    4 => 493,
    5 => 490,
    6 => 253,
    7 => 252,
    8 => 250,
    9 => 247,
    10 => 246,
    11 => 245,
    12 => 238,
    13 => 234,
    14 => 127,
    15 => 126,
    16 => 125,
    17 => 124,
    18 => 123,
    19 => 122,
    20 => 121,
    21 => 119,
    22 => 118,
    23 => 117,
    24 => 64,
    25 => 63,
    26 => 62,
    27 => 61,
    28 => 60,
    29 => 59,
    30 => 58,
    31 => 56,
    32 => 44,
    33 => 32,
    34 => 31,
    35 => 30,
    36 => 29,
    37 => 28,
    38 => 27,
    39 => 26,
    40 => 24,
    41 => 23,
    42 => 22,
    43 => 21,
    44 => 20,
    45 => 15,
    46 => 14,
    47 => 13,
    48 => 12,
    49 => 11,
    50 => 10,
    51 => 8,
    52 => 7,
    53 => 6,
    54 => 5,
    55 => 3,
    56 => 2,
    57 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_advpoll';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_commentary_complaint';
  $strongarm->value = array();
  $export['menu_options_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_simplenews';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_advpoll';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_commentary_complaint';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_simplenews';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_alter';
  $strongarm->value = FALSE;
  $export['mimemail_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_engine';
  $strongarm->value = 'mimemail';
  $export['mimemail_engine'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_format';
  $strongarm->value = 'full_html';
  $export['mimemail_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_incoming';
  $strongarm->value = 0;
  $export['mimemail_incoming'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_key';
  $strongarm->value = '0sWbzxeqltK3_gGv30Bzpp5L4QVXz3Z-KhVnAgdqPCk';
  $export['mimemail_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_linkonly';
  $strongarm->value = 0;
  $export['mimemail_linkonly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_simple_address';
  $strongarm->value = 0;
  $export['mimemail_simple_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_sitestyle';
  $strongarm->value = 0;
  $export['mimemail_sitestyle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_textonly';
  $strongarm->value = 0;
  $export['mimemail_textonly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minimum_word_size';
  $strongarm->value = '3';
  $export['minimum_word_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_background_color';
  $strongarm->value = '#000';
  $export['modal_forms_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_comment';
  $strongarm->value = 0;
  $export['modal_forms_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_contact';
  $strongarm->value = 0;
  $export['modal_forms_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_login';
  $strongarm->value = 1;
  $export['modal_forms_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_login_links';
  $strongarm->value = '1';
  $export['modal_forms_login_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_opacity';
  $strongarm->value = '0.85';
  $export['modal_forms_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_pages';
  $strongarm->value = 'imagebrowser*
img_assist*
imce*
node/add/*
node/*/edit
print/*
printpdf/*
system/ajax
system/ajax/*';
  $export['modal_forms_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_password';
  $strongarm->value = 0;
  $export['modal_forms_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_large_height';
  $strongarm->value = '0.8';
  $export['modal_forms_popup_large_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_large_type';
  $strongarm->value = 'scale';
  $export['modal_forms_popup_large_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_large_width';
  $strongarm->value = '0.8';
  $export['modal_forms_popup_large_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_medium_height';
  $strongarm->value = '450';
  $export['modal_forms_popup_medium_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_medium_type';
  $strongarm->value = 'fixed';
  $export['modal_forms_popup_medium_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_medium_width';
  $strongarm->value = '550';
  $export['modal_forms_popup_medium_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_small_height';
  $strongarm->value = '400';
  $export['modal_forms_popup_small_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_small_type';
  $strongarm->value = 'fixed';
  $export['modal_forms_popup_small_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_popup_small_width';
  $strongarm->value = '300';
  $export['modal_forms_popup_small_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_register';
  $strongarm->value = 0;
  $export['modal_forms_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'modal_forms_visibility';
  $strongarm->value = '0';
  $export['modal_forms_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'bf_comment_subject' => 1396443350,
    'bf_etracker' => 1396537081,
    'bf_image_fields' => 1396780920,
    'bf_dependencies' => 1396781076,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_advpoll';
  $strongarm->value = '0';
  $export['new_revisions_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_commentary_complaint';
  $strongarm->value = '0';
  $export['new_revisions_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_info_article';
  $strongarm->value = '0';
  $export['new_revisions_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_page';
  $strongarm->value = '0';
  $export['new_revisions_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_proposal';
  $strongarm->value = '0';
  $export['new_revisions_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_simplenews';
  $strongarm->value = '0';
  $export['new_revisions_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_autocomplete_limit';
  $strongarm->value = '20';
  $export['nodequeue_autocomplete_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_links';
  $strongarm->value = FALSE;
  $export['nodequeue_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_tab_name';
  $strongarm->value = 'Nodequeue';
  $export['nodequeue_tab_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_use_tab';
  $strongarm->value = 1;
  $export['nodequeue_use_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_view_per_queue';
  $strongarm->value = 1;
  $export['nodequeue_view_per_queue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1396774315';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_advpoll';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_commentary_complaint';
  $strongarm->value = array();
  $export['node_options_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_simplenews';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_advpoll';
  $strongarm->value = '1';
  $export['node_preview_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_simplenews';
  $strongarm->value = '1';
  $export['node_preview_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_comments';
  $strongarm->value = '0';
  $export['node_rank_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_promote';
  $strongarm->value = '0';
  $export['node_rank_promote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_recent';
  $strongarm->value = '0';
  $export['node_rank_recent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_relevance';
  $strongarm->value = '0';
  $export['node_rank_relevance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_sticky';
  $strongarm->value = '0';
  $export['node_rank_sticky'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_advpoll';
  $strongarm->value = 1;
  $export['node_submitted_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_commentary_complaint';
  $strongarm->value = 0;
  $export['node_submitted_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_simplenews';
  $strongarm->value = 1;
  $export['node_submitted_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlap_cjk';
  $strongarm->value = 1;
  $export['overlap_cjk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_slides';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_slides';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_default';
  $strongarm->value = '7000';
  $export['owlcarousel_auto_play_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_slides';
  $strongarm->value = '7000';
  $export['owlcarousel_auto_play_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_default';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_slides';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_width';
  $strongarm->value = '1100';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_slides_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_slides_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_slides_width';
  $strongarm->value = '1100';
  $export['owlcarousel_items_desktop_owlcarousel_settings_slides_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_width';
  $strongarm->value = '900';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_slides_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_slides_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_slides_width';
  $strongarm->value = '900';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_slides_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_slides_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_slides_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_slides_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_slides_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_default';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_slides';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_slides';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_slides_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_slides_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_slides_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_slides_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_slides_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_slides_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_slides_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_slides_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_slides';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_slides';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_default';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_slides';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_slides';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_default';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_slides';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_slides';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_default';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_slides';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_default';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_slides';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_slides';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_default';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_slides';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_default';
  $strongarm->value = 'owlcarousel_settings_slides';
  $export['owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_slides';
  $strongarm->value = 'slides';
  $export['owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_single_item_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_single_item_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_slides';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_default';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_slides';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_slides';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_slides';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '1800';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 0;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_override_anyway';
  $strongarm->value = TRUE;
  $export['page_manager_override_anyway'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_case';
  $strongarm->value = '1';
  $export['pathauto_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'a, an, as, at, before, but, by, for, from, is, in, into, like, of, off, on, onto, per, since, than, the, this, that, to, up, via, with';
  $export['pathauto_ignore_words'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_component_length';
  $strongarm->value = '100';
  $export['pathauto_max_component_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_length';
  $strongarm->value = '100';
  $export['pathauto_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_committee_pattern';
  $strongarm->value = '';
  $export['pathauto_node_committee_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_info_article_pattern';
  $strongarm->value = 'informationsseite/[node:title]';
  $export['pathauto_node_info_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_poll_pattern';
  $strongarm->value = '';
  $export['pathauto_node_poll_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_proposal_pattern';
  $strongarm->value = '/buergerprogramm/[node:field-committee:title]/[node:title]';
  $export['pathauto_node_proposal_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_task_pattern';
  $strongarm->value = '';
  $export['pathauto_node_task_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_ampersand';
  $strongarm->value = '0';
  $export['pathauto_punctuation_ampersand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_asterisk';
  $strongarm->value = '0';
  $export['pathauto_punctuation_asterisk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_at';
  $strongarm->value = '0';
  $export['pathauto_punctuation_at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_backtick';
  $strongarm->value = '0';
  $export['pathauto_punctuation_backtick'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_back_slash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_back_slash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_caret';
  $strongarm->value = '0';
  $export['pathauto_punctuation_caret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_colon';
  $strongarm->value = '0';
  $export['pathauto_punctuation_colon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_comma';
  $strongarm->value = '0';
  $export['pathauto_punctuation_comma'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_dollar';
  $strongarm->value = '0';
  $export['pathauto_punctuation_dollar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_double_quotes';
  $strongarm->value = '0';
  $export['pathauto_punctuation_double_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_equal';
  $strongarm->value = '0';
  $export['pathauto_punctuation_equal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_exclamation';
  $strongarm->value = '0';
  $export['pathauto_punctuation_exclamation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_greater_than';
  $strongarm->value = '0';
  $export['pathauto_punctuation_greater_than'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = '1';
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_curly';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_curly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_parenthesis';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_parenthesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_square';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_square'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_less_than';
  $strongarm->value = '0';
  $export['pathauto_punctuation_less_than'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_percent';
  $strongarm->value = '0';
  $export['pathauto_punctuation_percent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_period';
  $strongarm->value = '0';
  $export['pathauto_punctuation_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_pipe';
  $strongarm->value = '0';
  $export['pathauto_punctuation_pipe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_plus';
  $strongarm->value = '0';
  $export['pathauto_punctuation_plus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_question_mark';
  $strongarm->value = '0';
  $export['pathauto_punctuation_question_mark'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_quotes';
  $strongarm->value = '0';
  $export['pathauto_punctuation_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_curly';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_curly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_parenthesis';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_parenthesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_square';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_square'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_semicolon';
  $strongarm->value = '0';
  $export['pathauto_punctuation_semicolon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_slash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_slash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_tilde';
  $strongarm->value = '0';
  $export['pathauto_punctuation_tilde'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_underscore';
  $strongarm->value = '0';
  $export['pathauto_punctuation_underscore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_reduce_ascii';
  $strongarm->value = 0;
  $export['pathauto_reduce_ascii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_separator';
  $strongarm->value = '-';
  $export['pathauto_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_bf_owl_carousel_slides_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_bf_owl_carousel_slides_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_phase_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_phase_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_update_action';
  $strongarm->value = '2';
  $export['pathauto_update_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'teilnehmeruebersicht/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_verbose';
  $strongarm->value = 0;
  $export['pathauto_verbose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_email_notify_default';
  $strongarm->value = 0;
  $export['pm_email_notify_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_email_notify_from';
  $strongarm->value = '';
  $export['pm_email_notify_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_email_notify_subject';
  $strongarm->value = '[privatemsg_message:subject]';
  $export['pm_email_notify_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 0;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 0;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_default_redirect';
  $strongarm->value = '';
  $export['privatemsg_default_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_default_redirect_reply';
  $strongarm->value = 0;
  $export['privatemsg_default_redirect_reply'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_disabled_message';
  $strongarm->value = 1;
  $export['privatemsg_display_disabled_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_fields';
  $strongarm->value = array(
    'participants' => 'participants',
    'thread_started' => 0,
    'count' => 0,
  );
  $export['privatemsg_display_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_link_self';
  $strongarm->value = 1;
  $export['privatemsg_display_link_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_loginmessage';
  $strongarm->value = 1;
  $export['privatemsg_display_loginmessage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_on_comments';
  $strongarm->value = 0;
  $export['privatemsg_display_on_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_on_teaser';
  $strongarm->value = 1;
  $export['privatemsg_display_on_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_preview_button';
  $strongarm->value = 0;
  $export['privatemsg_display_preview_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_profile_links';
  $strongarm->value = 1;
  $export['privatemsg_display_profile_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_flush_days';
  $strongarm->value = '30';
  $export['privatemsg_flush_days'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_flush_enabled';
  $strongarm->value = 0;
  $export['privatemsg_flush_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_flush_max';
  $strongarm->value = '200';
  $export['privatemsg_flush_max'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_link_node_types';
  $strongarm->value = array(
    'advpoll' => 0,
    'article' => 0,
    'committee' => 0,
    'info_article' => 0,
    'page' => 0,
    'poll' => 0,
    'proposal' => 0,
    'simplenews' => 0,
    'task' => 0,
  );
  $export['privatemsg_link_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_per_page';
  $strongarm->value = '25';
  $export['privatemsg_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_view_default_amount';
  $strongarm->value = '10';
  $export['privatemsg_view_default_amount'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_view_max_amount';
  $strongarm->value = '20';
  $export['privatemsg_view_max_amount'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_view_use_max_as_default';
  $strongarm->value = 0;
  $export['privatemsg_view_use_max_as_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'private_message_view_template';
  $strongarm->value = 'privatemsg-view';
  $export['private_message_view_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'bf_info_article_rate_up',
      'tag' => 'vote',
      'title' => 'Info article rate up',
      'node_types' => array(
        0 => 'info_article',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'up',
        ),
      ),
      'template' => 'thumbs_up',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => '3',
        2 => '2',
        4 => '4',
        5 => '5',
        1 => 0,
        6 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '3',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'use_source_translation' => TRUE,
      'value_type' => 'points',
      'theme' => 'rate_template_thumbs_up',
      'css' => 'sites/all/modules/contrib/rate/templates/thumbs-up/thumbs-up.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_advpoll';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_article';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_commentary_complaint';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_committee';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_info_article';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_page';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_proposal';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_simplenews';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_task';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'registration_settings';
  $strongarm->value = array(
    'count_members_all' => '95',
    'count_members_form' => '70',
  );
  $export['registration_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_codrops_responsive_multi_ani_in';
  $strongarm->value = 'dl-animate-in-1';
  $export['responsive_menus_codrops_responsive_multi_ani_in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_codrops_responsive_multi_ani_out';
  $strongarm->value = 'dl-animate-out-1';
  $export['responsive_menus_codrops_responsive_multi_ani_out'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_codrops_responsive_multi_css_selectors';
  $strongarm->value = '#block-menu-menu-project-manager .content > .menu';
  $export['responsive_menus_codrops_responsive_multi_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_codrops_responsive_multi_media_size';
  $strongarm->value = '1920';
  $export['responsive_menus_codrops_responsive_multi_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_css_selectors';
  $strongarm->value = '#block-menu-menu-project-manager .content > .menu';
  $export['responsive_menus_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_disable_mouse_events';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_disable_mouse_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_google_nexus_css_selectors';
  $strongarm->value = '';
  $export['responsive_menus_google_nexus_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_google_nexus_icons';
  $strongarm->value = '\\ue005
\\ue006';
  $export['responsive_menus_google_nexus_icons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_google_nexus_icon_fallback';
  $strongarm->value = '&#57347;';
  $export['responsive_menus_google_nexus_icon_fallback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_google_nexus_use_ecoicons';
  $strongarm->value = '1';
  $export['responsive_menus_google_nexus_use_ecoicons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_ignore_admin';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_ignore_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_close_size';
  $strongarm->value = '18px';
  $export['responsive_menus_mean_menu_close_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_close_txt';
  $strongarm->value = 'X';
  $export['responsive_menus_mean_menu_close_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_contract_txt';
  $strongarm->value = '-';
  $export['responsive_menus_mean_menu_contract_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_css_selectors';
  $strongarm->value = '#block-menu-menu-project-manager .content > .menu';
  $export['responsive_menus_mean_menu_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_expand_children';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_expand_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_expand_txt';
  $strongarm->value = '+';
  $export['responsive_menus_mean_menu_expand_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_media_size';
  $strongarm->value = '1920';
  $export['responsive_menus_mean_menu_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_position';
  $strongarm->value = 'right';
  $export['responsive_menus_mean_menu_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_remove_attrs';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_remove_attrs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_show_children';
  $strongarm->value = '1';
  $export['responsive_menus_mean_menu_show_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_mean_menu_trigger_txt';
  $strongarm->value = '<span /><span /><span />';
  $export['responsive_menus_mean_menu_trigger_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_media_size';
  $strongarm->value = '768';
  $export['responsive_menus_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_no_jquery_update';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_no_jquery_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_remove_attributes';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_remove_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_animation_speed';
  $strongarm->value = '200';
  $export['responsive_menus_sidr_animation_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_css_selectors';
  $strongarm->value = '#block-menu-menu-project-manager .content > .menu';
  $export['responsive_menus_sidr_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_displace';
  $strongarm->value = '1';
  $export['responsive_menus_sidr_displace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_media_size';
  $strongarm->value = '1920';
  $export['responsive_menus_sidr_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_menu_side';
  $strongarm->value = 'left';
  $export['responsive_menus_sidr_menu_side'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_on_close';
  $strongarm->value = '';
  $export['responsive_menus_sidr_on_close'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_on_open';
  $strongarm->value = '';
  $export['responsive_menus_sidr_on_open'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_trigger_txt';
  $strongarm->value = 'Menu';
  $export['responsive_menus_sidr_trigger_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_absolute';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_simple_absolute'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_text';
  $strongarm->value = '☰ Menu';
  $export['responsive_menus_simple_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'google_nexus';
  $export['responsive_menus_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_advpoll';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_commentary_complaint';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_info_article';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_page';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_proposal';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_simplenews';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_advpoll';
  $strongarm->value = 'rh_node';
  $export['rh_module_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_article';
  $strongarm->value = 'rh_node';
  $export['rh_module_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_commentary_complaint';
  $strongarm->value = 'rh_node';
  $export['rh_module_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_committee';
  $strongarm->value = 'rh_node';
  $export['rh_module_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_info_article';
  $strongarm->value = 'rh_node';
  $export['rh_module_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_page';
  $strongarm->value = 'rh_node';
  $export['rh_module_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_proposal';
  $strongarm->value = 'rh_node';
  $export['rh_module_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_simplenews';
  $strongarm->value = 'rh_node';
  $export['rh_module_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_task';
  $strongarm->value = 'rh_node';
  $export['rh_module_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_advpoll';
  $strongarm->value = '0';
  $export['rh_node_action_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_article';
  $strongarm->value = '0';
  $export['rh_node_action_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_committee';
  $strongarm->value = '0';
  $export['rh_node_action_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_info_article';
  $strongarm->value = '0';
  $export['rh_node_action_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_page';
  $strongarm->value = '0';
  $export['rh_node_action_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_proposal';
  $strongarm->value = '0';
  $export['rh_node_action_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_simplenews';
  $strongarm->value = '0';
  $export['rh_node_action_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_task';
  $strongarm->value = '0';
  $export['rh_node_action_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_advpoll';
  $strongarm->value = 0;
  $export['rh_node_override_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_article';
  $strongarm->value = 0;
  $export['rh_node_override_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_commentary_complaint';
  $strongarm->value = 0;
  $export['rh_node_override_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_committee';
  $strongarm->value = 0;
  $export['rh_node_override_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_info_article';
  $strongarm->value = 0;
  $export['rh_node_override_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_page';
  $strongarm->value = 0;
  $export['rh_node_override_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_proposal';
  $strongarm->value = 0;
  $export['rh_node_override_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_simplenews';
  $strongarm->value = 0;
  $export['rh_node_override_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_task';
  $strongarm->value = 0;
  $export['rh_node_override_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_advpoll';
  $strongarm->value = '';
  $export['rh_node_redirect_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_article';
  $strongarm->value = '';
  $export['rh_node_redirect_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_committee';
  $strongarm->value = '';
  $export['rh_node_redirect_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_info_article';
  $strongarm->value = '';
  $export['rh_node_redirect_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_page';
  $strongarm->value = '';
  $export['rh_node_redirect_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_proposal';
  $strongarm->value = '';
  $export['rh_node_redirect_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_advpoll';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_article';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_committee';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_info_article';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_page';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_proposal';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_simplenews';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_task';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_simplenews';
  $strongarm->value = '';
  $export['rh_node_redirect_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_task';
  $strongarm->value = '';
  $export['rh_node_redirect_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_bf_owl_carousel_slides';
  $strongarm->value = '0';
  $export['rh_taxonomy_term_action_bf_owl_carousel_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_phase';
  $strongarm->value = '0';
  $export['rh_taxonomy_term_action_phase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_override_bf_owl_carousel_slides';
  $strongarm->value = 0;
  $export['rh_taxonomy_term_override_bf_owl_carousel_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_override_phase';
  $strongarm->value = 0;
  $export['rh_taxonomy_term_override_phase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_override_user_titles';
  $strongarm->value = 0;
  $export['rh_taxonomy_term_override_user_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_redirect_bf_owl_carousel_slides';
  $strongarm->value = '';
  $export['rh_taxonomy_term_redirect_bf_owl_carousel_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_redirect_phase';
  $strongarm->value = '';
  $export['rh_taxonomy_term_redirect_phase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_redirect_response_bf_owl_carousel_slides';
  $strongarm->value = '301';
  $export['rh_taxonomy_term_redirect_response_bf_owl_carousel_slides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_redirect_response_phase';
  $strongarm->value = '301';
  $export['rh_taxonomy_term_redirect_response_phase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_event_whitelist';
  $strongarm->value = array(
    'node_update--proposal' => 0,
    'comment_insert--comment_node_page' => 1,
    'comment_abuse_created' => 2,
    'new_message_created' => 3,
    'node_insert--committee' => 4,
    'node_insert--proposal' => 5,
    'node_insert--info_article' => 6,
    'node_insert--task' => 7,
    'node_insert--advpoll' => 8,
    'new_message_created_send' => 9,
  );
  $export['rules_event_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_settings';
  $strongarm->value = array(
    'field_sex' => array(
      'Male' => '60',
      'Female' => '60',
    ),
    'field_your_age' => array(
      '<21' => '30',
      '22-30' => '10',
      '>30' => '60',
    ),
  );
  $export['rules_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_commentary_complaint';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_committee';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_committee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_info_article';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_proposal';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_task';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '500';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'node';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_blocks_default';
  $strongarm->value = 'default';
  $export['secureshare_blocks_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_fields_node_advpoll';
  $strongarm->value = '';
  $export['secureshare_fields_node_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_fields_node_commentary_complaint';
  $strongarm->value = '';
  $export['secureshare_fields_node_commentary_complaint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_fields_node_info_article';
  $strongarm->value = 'Info article';
  $export['secureshare_fields_node_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_fields_node_page';
  $strongarm->value = '';
  $export['secureshare_fields_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_fields_node_proposal';
  $strongarm->value = '';
  $export['secureshare_fields_node_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'secureshare_fields_node_simplenews';
  $strongarm->value = '';
  $export['secureshare_fields_node_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'settings__active_tab';
  $strongarm->value = 'edit-pm-email-notify';
  $export['settings__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simpelnews_roles_resync';
  $strongarm->value = array();
  $export['simpelnews_roles_resync'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_content_type_advpoll';
  $strongarm->value = 0;
  $export['simplenews_content_type_advpoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_content_type_info_article';
  $strongarm->value = 0;
  $export['simplenews_content_type_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_content_type_simplenews';
  $strongarm->value = 1;
  $export['simplenews_content_type_simplenews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_roles_auto_remove';
  $strongarm->value = array(
    9 => 1,
    11 => 1,
    17 => 1,
  );
  $export['simplenews_roles_auto_remove'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_roles_tids_rids';
  $strongarm->value = array(
    11 => array(
      0 => '3',
    ),
    9 => array(
      0 => '3',
    ),
    17 => array(
      0 => '20',
    ),
  );
  $export['simplenews_roles_tids_rids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_vid';
  $strongarm->value = '4';
  $export['simplenews_vid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'DE';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'speedy_js_production';
  $strongarm->value = 0;
  $export['speedy_js_production'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tabs__active_tab';
  $strongarm->value = 'edit-node';
  $export['tabs__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bf_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translation_language_type';
  $strongarm->value = 'language_content';
  $export['translation_language_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_search';
  $strongarm->value = 1;
  $export['transliteration_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1394391319;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_email_notification';
  $strongarm->value = 1394378359;
  $export['update_last_email_notification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_reassign';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 0;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'public://default_profile.gif';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'bf_user_picture';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_module_list';
  $strongarm->value = array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'simplenews' => array(
      0 => 'simplenews_confirm_subscribe_subject',
      1 => 'simplenews_confirm_subscribe_unsubscribed',
      2 => 'simplenews_confirm_subscribe_subscribed',
      3 => 'simplenews_confirm_unsubscribe_subscribed',
      4 => 'simplenews_confirm_unsubscribe_unsubscribed',
      5 => 'simplenews_confirm_combined_subject',
      6 => 'simplenews_confirm_combined_body',
      7 => 'simplenews_confirm_combined_body_unchanged',
      8 => 'simplenews_confirm_combined_line_subscribe_unsubscribed',
      9 => 'simplenews_confirm_combined_line_subscribe_subscribed',
      10 => 'simplenews_confirm_combined_line_unsubscribe_subscribed',
      11 => 'simplenews_confirm_combined_line_unsubscribe_unsubscribed',
    ),
  );
  $export['variable_module_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_realm_list_language';
  $strongarm->value = array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'user_mail_status_activated_[mail_part]',
    3 => 'user_registrationpassword_register_[mail_part]',
  );
  $export['variable_realm_list_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array(
    '8a623bf15752254823092cd65e4363b4' => 'bf_articles-bf_info_articles_block',
  );
  $export['views_block_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_exposed_filter_any_label';
  $strongarm->value = 'new_any';
  $export['views_exposed_filter_any_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_localization_plugin';
  $strongarm->value = 'i18nstrings';
  $export['views_localization_plugin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_show_additional_queries';
  $strongarm->value = 0;
  $export['views_show_additional_queries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_always_live_preview';
  $strongarm->value = 1;
  $export['views_ui_always_live_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_custom_theme';
  $strongarm->value = '_default';
  $export['views_ui_custom_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_display_embed';
  $strongarm->value = 0;
  $export['views_ui_display_embed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_advanced_column';
  $strongarm->value = 0;
  $export['views_ui_show_advanced_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_advanced_help_warning';
  $strongarm->value = 1;
  $export['views_ui_show_advanced_help_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_listing_filters';
  $strongarm->value = 0;
  $export['views_ui_show_listing_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_master_display';
  $strongarm->value = 0;
  $export['views_ui_show_master_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_performance_statistics';
  $strongarm->value = 0;
  $export['views_ui_show_performance_statistics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_preview_information';
  $strongarm->value = 1;
  $export['views_ui_show_preview_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_sql_query';
  $strongarm->value = 1;
  $export['views_ui_show_sql_query'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_sql_query_where';
  $strongarm->value = 'above';
  $export['views_ui_show_sql_query_where'] = $strongarm;

  return $export;
}
