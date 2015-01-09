<?php

/**
 * @file
 * Theme functions
 */

/**
 * Implements hook_menu_link().
 */
function bf_theme_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  if (in_array('first', $element['#attributes']['class']) && $element['#href'] == '<front>') {
    $element['#title'] = '<i class="fa fa-home"></i>' . $element['#title'];
  }
  global $language;
  $settings_main_menu = variable_get('main_menu_' . $language->language,array());
  foreach ($settings_main_menu as $menu_link) {
    if ($element['#original_link']['link_path'] != 'statistics/registration-statistics') {
      $element['#title'] = @$settings_main_menu['link_' . $element['#original_link']['mlid']]['title'];
      if ($element['#href']=='<front>') {
        $element['#title'] = '<i class="fa fa-home"></i>' . $element['#title'];
      }
    }
  }
  $output = l($element['#title'], $element['#href'], $options = array('html' => TRUE));
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . "</li>\n";
}

/**
 * Implements hook_form_alter().
 */
function bf_theme_form_alter(&$form, &$form_state, $form_id) {

  //delete actions buttons for revision list
  if (in_array($form_id, array('revisioning_ux_delete_all', 'revisioning_ux_delete_archived'))) {
    $form['#access'] = FALSE;
  }
  // add redirect to user login form
  if ($form_id == 'user_login') {
    if (module_exists('bf_core')) {
      $form['#submit'][] = 'bf_core_login_redirect';
    }
  }
}

/**
 * Preprocess html.
 */
function bf_theme_preprocess_html(&$vars) {
  global $user;
  if (in_array('Manager', $user->roles)) {
    $vars['classes_array'][] = 'role-manager';
  }
  if (in_array('Admin', $user->roles)) {
    $vars['classes_array'][] = 'role-admin';
  }
  if ((isset($_SERVER['HTTP_USER_AGENT']) && (strpos($_SERVER['HTTP_USER_AGENT'],
    'Trident') !== false || strpos($_SERVER['HTTP_USER_AGENT'], 'MSIE') !== false))) {
    $vars['classes_array'][] = 'ie-10-or-11';
  }

  drupal_add_css(
    path_to_theme() . '/assets/stylesheets/ie8.css',
    array(
      'browsers' => array(
        'IE' => 'lte IE 8',
        '!IE' => FALSE
      )
    )
  );


  $vars['etracker_widget'] ='';
  if (variable_get('etracker_active', 0) == 1) {
    $eTracker = variable_get('etracker_text', array('value' => ''));
    $vars['etracker_widget'] = array(
      '#type' => 'markup',
      '#markup' => $eTracker['value'],
    );
  }
}

/**
 * Implements hook_preprocess_page().
 */
function bf_theme_preprocess_page(&$vars) {
  global $user;
  $style_name='logo_style';

  if ($vars['logo'] && pathinfo($vars['logo'])) {
    $fileInfo = pathinfo($vars['logo']);
    $uri = 'public://'.$fileInfo['basename'];
    $parseUrl = parse_url($fileInfo['dirname']);
    if ($parseUrl['path']!=base_path() . drupal_get_path('theme','bf_theme')) {
      $vars['logo']=image_style_url($style_name,  $uri);
    }
  }
  $vars['second_logo'] = theme_get_setting('second_logo_path', 'bf_theme');
  if ($vars['second_logo'] && pathinfo($vars['second_logo'])) {
    $fileInfo = pathinfo($vars['second_logo']);
    $uri = 'public://'.$fileInfo['basename'];
    $parseUrl = parse_url($fileInfo['dirname']);
    if (isset($parseUrl['path']) || $uri) {
      $vars['second_logo'] = image_style_url($style_name,  $uri);
    }
  }

  //delete comments block for revision page
  if (isset($vars['page']['content']['system_main']['nodes']) && in_array('page__node__revisions', $vars['theme_hook_suggestions'])) {
    $nid = reset(array_keys($vars['page']['content']['system_main']['nodes']));
    unset($vars['page']['content']['system_main']['nodes'][$nid]['comments']);
  }

  //hide tabs for user profile page
  if ($vars['is_panel'] && in_array('page__user', $vars['theme_hook_suggestions']) && isset($vars['tabs']['#theme'])) {
    unset($vars['tabs']['#theme']);
  }
  // Add search_form to theme.
  $variables['search_form'] = '';
  if (module_exists('search') && user_access('search content')) {
    $search_box_form                                            = drupal_get_form('search_form');
    $search_box_form['basic']['keys']['#title']                 = '';
    $search_box_form['basic']['keys']['#attributes']            = array('placeholder' => t('Search'));
    $search_box_form['basic']['keys']['#attributes']['class'][] = 'search-query';
    $search_box_form['basic']['submit']['#value']               = t('Search');
    $search_box_form['#attributes']['class'][]                  = 'navbar-form';
    $search_box_form['#attributes']['class'][]                  = 'pull-right';
    $search_box                                                 = drupal_render($search_box_form);
    $vars['search_form']                                        = (user_access('search content')) ? $search_box : NULL;
  }
}

/**
 * Implements hook_theme().
 */
function bf_theme_theme() {
  $items = array();

  $items['bf_user_register_form'] = array(
    'render element'       => 'form',
    'path'                 => drupal_get_path('theme', 'bf_theme') . '/templates/user',
    'template'             => 'bf-user-register-form',
    'preprocess functions' => array(
      'bf_theme_custom_user_register_form'
    ),
  );

  return $items;
}

/**
 * Preprocess theme register form.
 */
function bf_theme_custom_user_register_form(&$vars) {
  $vars['intro_text'] = '<div class="registration-text"></div>';
  unset($vars['form']['account']['name']['#description']);
  unset($vars['form']['account']['pass']['#description']);
  if (isset($vars['form']['pass[pass1]'])) {
    unset($vars['form']['account']['pass']['pass1']);
    unset($vars['form']['account']['pass']['pass2']);
  }
  $vars['form']['account']['pass']['pass2']['#title']=t('Repeat password');
  $vars['form']['#attached']['js'][] = drupal_get_path('theme', 'bf_theme') . '/assets/js/register.js';
  if (strtotime(variable_get('bf_conference_date_day')) + 24*60*60 > time()) {
    hide($vars['form']['account']['pass']);
    hide($vars['form']['buttons']);
  }
  drupal_add_css(drupal_get_path('theme', 'bf_theme') . '/assets/stylesheets/registration.css');
}

function bf_theme_preprocess_poll_bar(&$variables) {
  $variables['title'] = check_plain($variables['title']);
  $variables['theme_hook_suggestions'][] = 'poll_bar__block';
}
function bf_theme_preprocess_poll_results(&$variables) {
  $variables['results']='';
}

function bf_theme_preprocess_advpoll_results(&$variables) {
  $variables['bars']='';
  $variables['theme_hook_suggestions'][] = 'advpoll_results__block';
}

function bf_theme_preprocess_advpoll_bar(&$variables) {
  $variables['title'] = check_plain($variables['title']);
  $variables['theme_hook_suggestions'][] = 'advpoll_bar__block';
}

function bf_theme_preprocess_comment(&$variables) {

  if ($variables['node']->type=='proposal' &&  in_array(' page__node__revisions',
    $variables['theme_hook_suggestions'])) {
    $variables['theme_hook_suggestions'][] = 'node__proposal';
  }
}

/**
 * Function preprocess search result.
 *
 * Added summary text.
 */
function bf_theme_preprocess_search_result(&$variables) {
  $result = $variables['result'];
  $variables['url'] = check_url($result['link']);
  $variables['title'] = check_plain($result['title']);
  if (isset($variables['result']['node']->body['und'][0]['safe_summary'])) {
    $variables['snippet'] = $result['node']->body['und'][0]['safe_summary'] . $variables['snippet'];
    if (arg(1)=='node' && arg(2)) {
      $selectSummary = preg_replace('/' . arg(2) . '/iu', '<strong>'.arg(2).'</strong>',
        $variables['snippet']);
      $variables['snippet'] = $selectSummary?$selectSummary:$variables['snippet'];
    }

  }
}

/**
 * Implements hook_js_alter().
 */
function bf_theme_js_alter(&$js) {
  drupal_add_js(drupal_get_path('theme','bf_theme').'/assets/js/bootstrap.min.js');
  unset($js['http://netdna.bootstrapcdn.com/twitter-bootstrap/2.3.1/js/bootstrap.min.js']);
}