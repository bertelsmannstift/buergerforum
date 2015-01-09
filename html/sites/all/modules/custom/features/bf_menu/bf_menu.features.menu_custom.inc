<?php
/**
 * @file
 * bf_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bf_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-bf-footer.
  $menus['menu-bf-footer'] = array(
    'menu_name' => 'menu-bf-footer',
    'title' => 'bf_footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-bf-footer-top-menu.
  $menus['menu-bf-footer-top-menu'] = array(
    'menu_name' => 'menu-bf-footer-top-menu',
    'title' => 'BF footer top menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-menu-for-proposal.
  $menus['menu-menu-for-proposal'] = array(
    'menu_name' => 'menu-menu-for-proposal',
    'title' => 'Menu for proposal',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-menu-info-article.
  $menus['menu-menu-info-article'] = array(
    'menu_name' => 'menu-menu-info-article',
    'title' => 'Menu for info-article',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-project-manager.
  $menus['menu-project-manager'] = array(
    'menu_name' => 'menu-project-manager',
    'title' => 'Project Manager',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('BF footer top menu');
  t('Development');
  t('Development link');
  t('Features');
  t('Main menu');
  t('Management');
  t('Menu for info-article');
  t('Menu for proposal');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('Project Manager');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('bf_footer');


  return $menus;
}
