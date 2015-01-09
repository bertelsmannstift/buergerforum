<?php

/**
 * @file
 * Overrides title, breadcrumbs and title link for main menu elements.
 */

/**
 * Callback menu path(admin/settings/main-menu-pages).
 */
function bf_core_main_menu_pages_settings_form($form) {

  global $language;

  // Build main menu container.
  $form['main_menu_' . $language->language] = array(
    '#type'     => 'container',
    '#tree'     => TRUE,
    '#language' => LANGUAGE_NONE,
    '#access'   => TRUE,
    'und'       => array()
  );

  $main_menu = menu_tree('main-menu');
  $menu_ids = element_children($main_menu);
  $settings_main_menu = variable_get('main_menu_' . $language->language, array());

  // Build fields.
  foreach ($menu_ids as $menu_id) {
    $form['main_menu_' . $language->language]['link_' . $menu_id] = array(
      '#type'      => 'fieldset',
      '#title'     => $main_menu[$menu_id]['#title'],
      '#collapsed' => FALSE,
    );
    $form['main_menu_' . $language->language]['link_' . $menu_id]['title'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Link title'),
      '#default_value' => $settings_main_menu ? $settings_main_menu['link_' . $menu_id]['title'] : $main_menu[$menu_id]['#title'],
      '#size'          => 20,
      '#maxlength'     => 50,
      '#required'      => TRUE,
    );
    $form['main_menu_' . $language->language]['link_' . $menu_id]['title_page'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Page title'),
      '#default_value' => $settings_main_menu ? $settings_main_menu['link_' . $menu_id]['title_page'] : $main_menu[$menu_id]['#title'],
      '#size'          => 20,
      '#maxlength'     => 50,
      '#required'      => TRUE,
    );

    $form['main_menu_' . $language->language]['link_' . $menu_id]['breadcrumb'] = array(
      '#type'          => ($main_menu[$menu_id]['#href'] == '<front>')?'hidden': 'textfield',
      '#title'         => t('Breadcrumb'),
      '#default_value' => $settings_main_menu ? $settings_main_menu['link_' . $menu_id]['breadcrumb'] : $main_menu[$menu_id]['#title'],
      '#size'          => 20,
      '#maxlength'     => 50,
      '#required'      => TRUE,
    );
    $form['main_menu_' . $language->language]['link_' . $menu_id]['link'] = array(
      '#type'          => 'hidden',
      '#default_value' => $main_menu[$menu_id]['#href'],
    );
  }

  return system_settings_form($form);
}

/**
 * Implements hook_process_page().
 *
 * Overrides page title.
 */

function bf_core_process_page(&$variables) {

  // Get active menu element and override its title page.
  if (!isset($variables['node']) && !in_array('page__user',$variables['theme_hook_suggestions'])) {
    global $language;
    $settings_main_menu = variable_get('main_menu_' . $language->language, array());

    foreach ($variables['main_menu'] as $id => $link) {
      if (drupal_is_front_page() && @$link['#original_link']['href']=='<front>') {
        $link['#original_link']['in_active_trail'] = TRUE;
      }
      if (isset($link['#original_link']) && $link['#original_link']['in_active_trail']) {

        if (isset($settings_main_menu['link_' . $id])) {

          // Overrides title.
          drupal_set_title($settings_main_menu['link_' . $id]['title_page']);
          $variables['title'] = $settings_main_menu['link_' . $id]['title_page'];

          // Overrides breadcrumbs.
          $breadcrumbs = drupal_get_breadcrumb();
          if (!drupal_is_front_page()) {
            $breadcrumbs[count($breadcrumbs) - 1] = '<span>' . $settings_main_menu['link_' . $id]['breadcrumb']
              . '</span>';
          }

          $variables['breadcrumb'] = theme('breadcrumb',
            array(
              'breadcrumb' => $breadcrumbs
            )
          );
        }
      }
    }

  }

}
