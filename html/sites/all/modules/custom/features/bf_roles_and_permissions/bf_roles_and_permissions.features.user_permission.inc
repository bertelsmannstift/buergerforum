<?php
/**
 * @file
 * bf_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bf_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access admin_menu'.
  $permissions['access admin_menu'] = array(
    'name' => 'access admin_menu',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'bf_admin_menu',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access electoral list'.
  $permissions['access electoral list'] = array(
    'name' => 'access electoral list',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access vote up/down statistics'.
  $permissions['access vote up/down statistics'] = array(
    'name' => 'access vote up/down statistics',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'vud',
  );

  // Exported permission: 'add write-ins'.
  $permissions['add write-ins'] = array(
    'name' => 'add write-ins',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer complaints'.
  $permissions['administer complaints'] = array(
    'name' => 'administer complaints',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'comment_abuse',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer counter'.
  $permissions['administer counter'] = array(
    'name' => 'administer counter',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'counter',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer lightbox2'.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer owlcarousel settings'.
  $permissions['administer owlcarousel settings'] = array(
    'name' => 'administer owlcarousel settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'owlcarousel',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer path breadcrumbs'.
  $permissions['administer path breadcrumbs'] = array(
    'name' => 'administer path breadcrumbs',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'path_breadcrumbs_ui',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer polls'.
  $permissions['administer polls'] = array(
    'name' => 'administer polls',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_taxonomy'.
  $permissions['administer rh_taxonomy'] = array(
    'name' => 'administer rh_taxonomy',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer secureshare'.
  $permissions['administer secureshare'] = array(
    'name' => 'administer secureshare',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'secureshare',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer vote up/down'.
  $permissions['administer vote up/down'] = array(
    'name' => 'administer vote up/down',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'vud',
  );

  // Exported permission: 'administer vote up/down on comments'.
  $permissions['administer vote up/down on comments'] = array(
    'name' => 'administer vote up/down on comments',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'vud_comment',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'become editor'.
  $permissions['become editor'] = array(
    'name' => 'become editor',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
    ),
    'module' => 'bf_proposal',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_taxonomy'.
  $permissions['bypass rh_taxonomy'] = array(
    'name' => 'bypass rh_taxonomy',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create advpoll content'.
  $permissions['create advpoll content'] = array(
    'name' => 'create advpoll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create committee content'.
  $permissions['create committee content'] = array(
    'name' => 'create committee content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create info_article content'.
  $permissions['create info_article content'] = array(
    'name' => 'create info_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create poll content'.
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create proposal content'.
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create task content'.
  $permissions['create task content'] = array(
    'name' => 'create task content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any advpoll content'.
  $permissions['delete any advpoll content'] = array(
    'name' => 'delete any advpoll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any committee content'.
  $permissions['delete any committee content'] = array(
    'name' => 'delete any committee content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any info_article content'.
  $permissions['delete any info_article content'] = array(
    'name' => 'delete any info_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any poll content'.
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any proposal content'.
  $permissions['delete any proposal content'] = array(
    'name' => 'delete any proposal content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any task content'.
  $permissions['delete any task content'] = array(
    'name' => 'delete any task content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own advpoll content'.
  $permissions['delete own advpoll content'] = array(
    'name' => 'delete own advpoll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own committee content'.
  $permissions['delete own committee content'] = array(
    'name' => 'delete own committee content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own info_article content'.
  $permissions['delete own info_article content'] = array(
    'name' => 'delete own info_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own poll content'.
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own proposal content'.
  $permissions['delete own proposal content'] = array(
    'name' => 'delete own proposal content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own task content'.
  $permissions['delete own task content'] = array(
    'name' => 'delete own task content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in bf_owl_carousel_slides'.
  $permissions['delete terms in bf_owl_carousel_slides'] = array(
    'name' => 'delete terms in bf_owl_carousel_slides',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in phase'.
  $permissions['delete terms in phase'] = array(
    'name' => 'delete terms in phase',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'edit any advpoll content'.
  $permissions['edit any advpoll content'] = array(
    'name' => 'edit any advpoll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any committee content'.
  $permissions['edit any committee content'] = array(
    'name' => 'edit any committee content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any info_article content'.
  $permissions['edit any info_article content'] = array(
    'name' => 'edit any info_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any poll content'.
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any proposal content'.
  $permissions['edit any proposal content'] = array(
    'name' => 'edit any proposal content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any task content'.
  $permissions['edit any task content'] = array(
    'name' => 'edit any task content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advpoll content'.
  $permissions['edit own advpoll content'] = array(
    'name' => 'edit own advpoll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own committee content'.
  $permissions['edit own committee content'] = array(
    'name' => 'edit own committee content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own info_article content'.
  $permissions['edit own info_article content'] = array(
    'name' => 'edit own info_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own poll content'.
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own proposal content'.
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own task content'.
  $permissions['edit own task content'] = array(
    'name' => 'edit own task content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'edit terms in bf_owl_carousel_slides'.
  $permissions['edit terms in bf_owl_carousel_slides'] = array(
    'name' => 'edit terms in bf_owl_carousel_slides',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in phase'.
  $permissions['edit terms in phase'] = array(
    'name' => 'edit terms in phase',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flag bf_comment_approve'.
  $permissions['flag bf_comment_approve'] = array(
    'name' => 'flag bf_comment_approve',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag bf_comment_close'.
  $permissions['flag bf_comment_close'] = array(
    'name' => 'flag bf_comment_close',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag bf_comment_faq'.
  $permissions['flag bf_comment_faq'] = array(
    'name' => 'flag bf_comment_faq',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag bf_comment_hide'.
  $permissions['flag bf_comment_hide'] = array(
    'name' => 'flag bf_comment_hide',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag bf_comment_vote'.
  $permissions['flag bf_comment_vote'] = array(
    'name' => 'flag bf_comment_vote',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_taxonomy'.
  $permissions['php redirect rh_taxonomy'] = array(
    'name' => 'php redirect rh_taxonomy',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'process task'.
  $permissions['process task'] = array(
    'name' => 'process task',
    'roles' => array(),
    'module' => 'bf_task',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'registration_access'.
  $permissions['registration_access'] = array(
    'name' => 'registration_access',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'bf_register_form',
  );

  // Exported permission: 'registration_settings'.
  $permissions['registration_settings'] = array(
    'name' => 'registration_settings',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'bf_register_form',
  );

  // Exported permission: 'registration_statistics'.
  $permissions['registration_statistics'] = array(
    'name' => 'registration_statistics',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Project coordinator' => 'Project coordinator',
    ),
    'module' => 'bf_register_form',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'reset vote up/down votes'.
  $permissions['reset vote up/down votes'] = array(
    'name' => 'reset vote up/down votes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'vud',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'send complaints on comments'.
  $permissions['send complaints on comments'] = array(
    'name' => 'send complaints on comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_abuse',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'show vote results'.
  $permissions['show vote results'] = array(
    'name' => 'show vote results',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: 'show write-ins'.
  $permissions['show write-ins'] = array(
    'name' => 'show write-ins',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'stop editor'.
  $permissions['stop editor'] = array(
    'name' => 'stop editor',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
    ),
    'module' => 'bf_proposal',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unflag bf_comment_approve'.
  $permissions['unflag bf_comment_approve'] = array(
    'name' => 'unflag bf_comment_approve',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag bf_comment_close'.
  $permissions['unflag bf_comment_close'] = array(
    'name' => 'unflag bf_comment_close',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag bf_comment_faq'.
  $permissions['unflag bf_comment_faq'] = array(
    'name' => 'unflag bf_comment_faq',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag bf_comment_hide'.
  $permissions['unflag bf_comment_hide'] = array(
    'name' => 'unflag bf_comment_hide',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag bf_comment_vote'.
  $permissions['unflag bf_comment_vote'] = array(
    'name' => 'unflag bf_comment_vote',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use inline editor'.
  $permissions['use inline editor'] = array(
    'name' => 'use inline editor',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bf_pief',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'use vote up/down'.
  $permissions['use vote up/down'] = array(
    'name' => 'use vote up/down',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'vud',
  );

  // Exported permission: 'use vote up/down on comments'.
  $permissions['use vote up/down on comments'] = array(
    'name' => 'use vote up/down on comments',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'vud_comment',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rate',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view vote up/down count on comments'.
  $permissions['view vote up/down count on comments'] = array(
    'name' => 'view vote up/down count on comments',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'vud_comment',
  );

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(
      'Admin' => 'Admin',
      'Expert' => 'Expert',
      'Manager' => 'Manager',
      'Participant' => 'Participant',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  return $permissions;
}
