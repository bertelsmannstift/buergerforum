<?php
/**
 * @file
 * bf_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bf_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_administration:admin/content-view/tasks
  $menu_links['main-menu_administration:admin/content-view/tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/content-view/tasks',
    'router_path' => 'admin/content-view/tasks',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_administration:admin/content-view/tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bf-info-pages-nodes-menu-position-rule:menu-position/1
  $menu_links['main-menu_bf-info-pages-nodes-menu-position-rule:menu-position/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/1',
    'router_path' => 'menu-position/%',
    'link_title' => 'BF info pages nodes (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_bf-info-pages-nodes-menu-position-rule:menu-position/1',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_information:informationsseite',
  );
  // Exported menu link: main-menu_bf-members-profile-menu-position-rule:menu-position/2
  $menu_links['main-menu_bf-members-profile-menu-position-rule:menu-position/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/2',
    'router_path' => 'menu-position/%',
    'link_title' => 'BF Members profile (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_bf-members-profile-menu-position-rule:menu-position/2',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_teilnehmer:teilnehmeruebersicht',
  );
  // Exported menu link: main-menu_bf-program-pages-nodes-menu-position-rule:menu-position/3
  $menu_links['main-menu_bf-program-pages-nodes-menu-position-rule:menu-position/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/3',
    'router_path' => 'menu-position/%',
    'link_title' => 'BF program pages nodes (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_bf-program-pages-nodes-menu-position-rule:menu-position/3',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_brgerprogramm:buergerprogramm',
  );
  // Exported menu link: main-menu_how-do-you-heat-your-home:node/62
  $menu_links['main-menu_how-do-you-heat-your-home:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'How do you heat your home?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_how-do-you-heat-your-home:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_aufgaben:<front>',
  );
  // Exported menu link: main-menu_information:informationsseite
  $menu_links['main-menu_information:informationsseite'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'informationsseite',
    'router_path' => 'informationsseite',
    'link_title' => 'Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_information:informationsseite',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_members:teilnehmeruebersicht
  $menu_links['main-menu_members:teilnehmeruebersicht'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'teilnehmeruebersicht',
    'router_path' => 'teilnehmeruebersicht',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_members:teilnehmeruebersicht',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_program:buergerprogramm
  $menu_links['main-menu_program:buergerprogramm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'buergerprogramm',
    'router_path' => 'buergerprogramm',
    'link_title' => 'Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_program:buergerprogramm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tasks:<front>
  $menu_links['main-menu_tasks:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Tasks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tasks:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: management_adminimal-menu:admin/config/administration/adminimal_menu
  $menu_links['management_adminimal-menu:admin/config/administration/adminimal_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/adminimal_menu',
    'router_path' => 'admin/config/administration/adminimal_menu',
    'link_title' => 'Adminimal menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust adminimal menu settings.',
      ),
      'identifier' => 'management_adminimal-menu:admin/config/administration/adminimal_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_ajax-comments:admin/config/content/ajax_comments
  $menu_links['management_ajax-comments:admin/config/content/ajax_comments'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ajax_comments',
    'router_path' => 'admin/config/content/ajax_comments',
    'link_title' => 'AJAX comments',
    'options' => array(
      'attributes' => array(
        'title' => 'AJAXifies comments on site.',
      ),
      'identifier' => 'management_ajax-comments:admin/config/content/ajax_comments',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_bf-footer-top-menu:admin/structure/menu/manage/menu-bf-footer-top-menu
  $menu_links['management_bf-footer-top-menu:admin/structure/menu/manage/menu-bf-footer-top-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-bf-footer-top-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'BF footer top menu',
    'options' => array(
      'identifier' => 'management_bf-footer-top-menu:admin/structure/menu/manage/menu-bf-footer-top-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_bffooter:admin/structure/menu/manage/menu-bf-footer
  $menu_links['management_bffooter:admin/structure/menu/manage/menu-bf-footer'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-bf-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'bf_footer',
    'options' => array(
      'identifier' => 'management_bffooter:admin/structure/menu/manage/menu-bf-footer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_clientside-validation:admin/config/validation/clientside_validation
  $menu_links['management_clientside-validation:admin/config/validation/clientside_validation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation',
    'router_path' => 'admin/config/validation/clientside_validation',
    'link_title' => 'Clientside Validation',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer clientside validation.',
      ),
      'identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_berprfung:admin/config/validation',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_entity-translation:admin/config/regional/entity_translation
  $menu_links['management_entity-translation:admin/config/regional/entity_translation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/entity_translation',
    'router_path' => 'admin/config/regional/entity_translation',
    'link_title' => 'Entity translation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure which entities can be translated and enable or disable language fallback.',
      ),
      'identifier' => 'management_entity-translation:admin/config/regional/entity_translation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_entwicklung:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_menu-for-info-article:admin/structure/menu/manage/menu-menu-info-article
  $menu_links['management_menu-for-info-article:admin/structure/menu/manage/menu-menu-info-article'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-menu-info-article',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Menu for info-article',
    'options' => array(
      'identifier' => 'management_menu-for-info-article:admin/structure/menu/manage/menu-menu-info-article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_menu-for-proposal:admin/structure/menu/manage/menu-menu-for-proposal
  $menu_links['management_menu-for-proposal:admin/structure/menu/manage/menu-menu-for-proposal'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-menu-for-proposal',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Menu for proposal',
    'options' => array(
      'identifier' => 'management_menu-for-proposal:admin/structure/menu/manage/menu-menu-for-proposal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_modal-forms:admin/config/development/modal_forms
  $menu_links['management_modal-forms:admin/config/development/modal_forms'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/modal_forms',
    'router_path' => 'admin/config/development/modal_forms',
    'link_title' => 'Modal forms',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Modal forms settings.',
      ),
      'identifier' => 'management_modal-forms:admin/config/development/modal_forms',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_entwicklung:admin/config/development',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_project-manager:admin/structure/menu/manage/menu-project-manager
  $menu_links['management_project-manager:admin/structure/menu/manage/menu-project-manager'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-project-manager',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Project Manager',
    'options' => array(
      'identifier' => 'management_project-manager:admin/structure/menu/manage/menu-project-manager',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_responsive-menus:admin/config/user-interface/responsive_menus
  $menu_links['management_responsive-menus:admin/config/user-interface/responsive_menus'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/responsive_menus',
    'router_path' => 'admin/config/user-interface/responsive_menus',
    'link_title' => 'Responsive Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Responsive Menus module',
      ),
      'identifier' => 'management_responsive-menus:admin/config/user-interface/responsive_menus',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_benutzeroberflche:admin/config/user-interface',
  );
  // Exported menu link: management_translation-sets:admin/config/regional/i18n_translation
  $menu_links['management_translation-sets:admin/config/regional/i18n_translation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/i18n_translation',
    'router_path' => 'admin/config/regional/i18n_translation',
    'link_title' => 'Translation sets',
    'options' => array(
      'attributes' => array(
        'title' => 'Translation sets overview.',
      ),
      'identifier' => 'management_translation-sets:admin/config/regional/i18n_translation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: menu-bf-footer-top-menu_complaints-and-suggestions:node/30
  $menu_links['menu-bf-footer-top-menu_complaints-and-suggestions:node/30'] = array(
    'menu_name' => 'menu-bf-footer-top-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Complaints and suggestions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bf-footer-top-menu_complaints-and-suggestions:node/30',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-bf-footer-top-menu_faq:node/29
  $menu_links['menu-bf-footer-top-menu_faq:node/29'] = array(
    'menu_name' => 'menu-bf-footer-top-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bf-footer-top-menu_faq:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-bf-footer-top-menu_imprint:node/33
  $menu_links['menu-bf-footer-top-menu_imprint:node/33'] = array(
    'menu_name' => 'menu-bf-footer-top-menu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Imprint',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bf-footer-top-menu_imprint:node/33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bf-footer-top-menu_rules:node/32
  $menu_links['menu-bf-footer-top-menu_rules:node/32'] = array(
    'menu_name' => 'menu-bf-footer-top-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bf-footer-top-menu_rules:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-bf-footer_contact:contact
  $menu_links['menu-bf-footer_contact:contact'] = array(
    'menu_name' => 'menu-bf-footer',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-bf-footer_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-bf-footer_privacy-police:node/34
  $menu_links['menu-bf-footer_privacy-police:node/34'] = array(
    'menu_name' => 'menu-bf-footer',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Privacy police',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bf-footer_privacy-police:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-bf-footer_terms-of-use:node/35
  $menu_links['menu-bf-footer_terms-of-use:node/35'] = array(
    'menu_name' => 'menu-bf-footer',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Terms of use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bf-footer_terms-of-use:node/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-for-proposal_go-to-program:buergerprogramm
  $menu_links['menu-menu-for-proposal_go-to-program:buergerprogramm'] = array(
    'menu_name' => 'menu-menu-for-proposal',
    'link_path' => 'buergerprogramm',
    'router_path' => 'buergerprogramm',
    'link_title' => 'Go to program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-for-proposal_go-to-program:buergerprogramm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-info-article_go-to-info:informationsseite
  $menu_links['menu-menu-info-article_go-to-info:informationsseite'] = array(
    'menu_name' => 'menu-menu-info-article',
    'link_path' => 'informationsseite',
    'router_path' => 'informationsseite',
    'link_title' => 'Go to info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-info-article_go-to-info:informationsseite',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_account-settings-:admin/config/people/accounts
  $menu_links['menu-project-manager_account-settings-:admin/config/people/accounts'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_account-settings-:admin/config/people/accounts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_add-committee:node/add/committee
  $menu_links['menu-project-manager_add-committee:node/add/committee'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'node/add/committee',
    'router_path' => 'node/add/committee',
    'link_title' => 'Add Committee',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-committee:node/add/committee',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_ausschsse:admin/content-view/committees',
  );
  // Exported menu link: menu-project-manager_add-info-article:node/add/info-article
  $menu_links['menu-project-manager_add-info-article:node/add/info-article'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'node/add/info-article',
    'router_path' => 'node/add/info-article',
    'link_title' => 'Add Info-article',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-info-article:node/add/info-article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_infoartikel:admin/content-view/info-articles',
  );
  // Exported menu link: menu-project-manager_add-newsletter:node/add/simplenews
  $menu_links['menu-project-manager_add-newsletter:node/add/simplenews'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'node/add/simplenews',
    'router_path' => 'node/add/simplenews',
    'link_title' => 'Add Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-newsletter:node/add/simplenews',
      'query' => array(
        'destination' => 'admin/content/simplenews',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_newsletter:admin/content/simplenews',
  );
  // Exported menu link: menu-project-manager_add-poll:node/add/advpoll
  $menu_links['menu-project-manager_add-poll:node/add/advpoll'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'node/add/advpoll',
    'router_path' => 'node/add/advpoll',
    'link_title' => 'Add Poll',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-poll:node/add/advpoll',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_umfragen:admin/content-view/polls',
  );
  // Exported menu link: menu-project-manager_add-proposal:node/add/proposal
  $menu_links['menu-project-manager_add-proposal:node/add/proposal'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'node/add/proposal',
    'router_path' => 'node/add/proposal',
    'link_title' => 'Add Proposal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-proposal:node/add/proposal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_vorschlge:admin/content-view/proposals',
  );
  // Exported menu link: menu-project-manager_add-task:node/add/task
  $menu_links['menu-project-manager_add-task:node/add/task'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'node/add/task',
    'router_path' => 'node/add/task',
    'link_title' => 'Add Task',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-task:node/add/task',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_aufgaben:admin/content-view/tasks',
  );
  // Exported menu link: menu-project-manager_add-user:admin/people/create
  $menu_links['menu-project-manager_add-user:admin/people/create'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add User',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_add-user:admin/people/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_teilnehmer:admin/users',
  );
  // Exported menu link: menu-project-manager_additional-field-settings:admin/users/add-field-settings
  $menu_links['menu-project-manager_additional-field-settings:admin/users/add-field-settings'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/users/add-field-settings',
    'router_path' => 'admin/users/add-field-settings',
    'link_title' => 'Additional field settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_additional-field-settings:admin/users/add-field-settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_teilnehmer:admin/users',
  );
  // Exported menu link: menu-project-manager_bf-proposal-edit-node-menu-position-rule:menu-position/4
  $menu_links['menu-project-manager_bf-proposal-edit-node-menu-position-rule:menu-position/4'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'menu-position/4',
    'router_path' => 'menu-position/%',
    'link_title' => 'BF proposal edit node (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'menu-project-manager_bf-proposal-edit-node-menu-position-rule:menu-position/4',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-project-manager_vorschlge-verwalten:admin/content-view/proposals',
  );
  // Exported menu link: menu-project-manager_bf-task-edit-node-menu-position-rule:menu-position/5
  $menu_links['menu-project-manager_bf-task-edit-node-menu-position-rule:menu-position/5'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'menu-position/5',
    'router_path' => 'menu-position/%',
    'link_title' => 'BF task edit node (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'menu-project-manager_bf-task-edit-node-menu-position-rule:menu-position/5',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-project-manager_aufgaben:admin/content-view/tasks',
  );
  // Exported menu link: menu-project-manager_brgerprogramm:admin/export
  $menu_links['menu-project-manager_brgerprogramm:admin/export'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/export',
    'router_path' => 'admin/export',
    'link_title' => 'Bürgerprogramm',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_brgerprogramm:admin/export',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_export:admin/export',
  );
  // Exported menu link: menu-project-manager_comment-statistics:admin/statistics/comments
  $menu_links['menu-project-manager_comment-statistics:admin/statistics/comments'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/comments',
    'router_path' => 'admin/statistics/comments',
    'link_title' => 'Comment statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_comment-statistics:admin/statistics/comments',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_comments:admin/content/comment
  $menu_links['menu-project-manager_comments:admin/content/comment'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-manager_comments:admin/content/comment',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_committees:admin/content-view/committees
  $menu_links['menu-project-manager_committees:admin/content-view/committees'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/committees',
    'router_path' => 'admin/content-view/committees',
    'link_title' => 'Committees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_committees:admin/content-view/committees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_contact:admin/structure/contact/edit/1
  $menu_links['menu-project-manager_contact:admin/structure/contact/edit/1'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/structure/contact/edit/1',
    'router_path' => 'admin/structure/contact/edit/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_contact:admin/structure/contact/edit/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_edit--delete-committees:admin/content-view/committees
  $menu_links['menu-project-manager_edit--delete-committees:admin/content-view/committees'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/committees',
    'router_path' => 'admin/content-view/committees',
    'link_title' => 'Edit / Delete Committees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_edit--delete-committees:admin/content-view/committees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_ausschsse:admin/content-view/committees',
  );
  // Exported menu link: menu-project-manager_edit--delete-info-articles:admin/content-view/info-articles
  $menu_links['menu-project-manager_edit--delete-info-articles:admin/content-view/info-articles'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/info-articles',
    'router_path' => 'admin/content-view/info-articles',
    'link_title' => 'Edit / Delete Info-articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_edit--delete-info-articles:admin/content-view/info-articles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_infoartikel:admin/content-view/info-articles',
  );
  // Exported menu link: menu-project-manager_edit--delete-polls:admin/content-view/polls
  $menu_links['menu-project-manager_edit--delete-polls:admin/content-view/polls'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/polls',
    'router_path' => 'admin/content-view/polls',
    'link_title' => 'Edit / Delete Polls',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_edit--delete-polls:admin/content-view/polls',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_umfragen:admin/content-view/polls',
  );
  // Exported menu link: menu-project-manager_edit--delete-proposals:admin/content-view/proposals
  $menu_links['menu-project-manager_edit--delete-proposals:admin/content-view/proposals'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/proposals',
    'router_path' => 'admin/content-view/proposals',
    'link_title' => 'Edit / Delete Proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_edit--delete-proposals:admin/content-view/proposals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_vorschlge:admin/content-view/proposals',
  );
  // Exported menu link: menu-project-manager_export:admin/export
  $menu_links['menu-project-manager_export:admin/export'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/export',
    'router_path' => 'admin/export',
    'link_title' => 'Export',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_export:admin/export',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_home:<front>
  $menu_links['menu-project-manager_home:<front>'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_info-articles:admin/content-view/info-articles
  $menu_links['menu-project-manager_info-articles:admin/content-view/info-articles'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/info-articles',
    'router_path' => 'admin/content-view/info-articles',
    'link_title' => 'Info-articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_info-articles:admin/content-view/info-articles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_invitations:admin/config/messaging/bf_invite
  $menu_links['menu-project-manager_invitations:admin/config/messaging/bf_invite'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/messaging/bf_invite',
    'router_path' => 'admin/config/messaging/bf_invite',
    'link_title' => 'Invitations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_invitations:admin/config/messaging/bf_invite',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_teilnehmer:admin/users',
  );
  // Exported menu link: menu-project-manager_invitations:admin/statistics/invitations-sent-statistics
  $menu_links['menu-project-manager_invitations:admin/statistics/invitations-sent-statistics'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/invitations-sent-statistics',
    'router_path' => 'admin/statistics/invitations-sent-statistics',
    'link_title' => 'Invitations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_invitations:admin/statistics/invitations-sent-statistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_main-menu:admin/settings/main-menu-pages
  $menu_links['menu-project-manager_main-menu:admin/settings/main-menu-pages'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/settings/main-menu-pages',
    'router_path' => 'admin/settings/main-menu-pages',
    'link_title' => 'Main menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_main-menu:admin/settings/main-menu-pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_message-statistics:admin/statistics/message-statistics
  $menu_links['menu-project-manager_message-statistics:admin/statistics/message-statistics'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/message-statistics',
    'router_path' => 'admin',
    'link_title' => 'Message statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_message-statistics:admin/statistics/message-statistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_newsletter:admin/content/simplenews
  $menu_links['menu-project-manager_newsletter:admin/content/simplenews'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content/simplenews',
    'router_path' => 'admin/content/simplenews',
    'link_title' => 'Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_newsletter:admin/content/simplenews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_newsletters-settings:admin/config/services/simplenews/categories
  $menu_links['menu-project-manager_newsletters-settings:admin/config/services/simplenews/categories'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/services/simplenews/categories',
    'router_path' => 'admin/config/services/simplenews/categories',
    'link_title' => 'Newsletters settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_newsletters-settings:admin/config/services/simplenews/categories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_newsletter:admin/content/simplenews',
  );
  // Exported menu link: menu-project-manager_newsletters:admin/content/simplenews
  $menu_links['menu-project-manager_newsletters:admin/content/simplenews'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content/simplenews',
    'router_path' => 'admin/content/simplenews',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-manager_newsletters:admin/content/simplenews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_newsletter:admin/content/simplenews',
  );
  // Exported menu link: menu-project-manager_pages:admin/content-view/pages
  $menu_links['menu-project-manager_pages:admin/content-view/pages'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/pages',
    'router_path' => 'admin/content-view/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_pages:admin/content-view/pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_perfomance:admin/config/development/performance
  $menu_links['menu-project-manager_perfomance:admin/config/development/performance'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Perfomance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_perfomance:admin/config/development/performance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_polls-history:admin/polls-history
  $menu_links['menu-project-manager_polls-history:admin/polls-history'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/polls-history',
    'router_path' => 'admin/polls-history',
    'link_title' => 'Polls history',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_polls-history:admin/polls-history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_umfragen:admin/content-view/polls',
  );
  // Exported menu link: menu-project-manager_polls:admin/content-view/polls
  $menu_links['menu-project-manager_polls:admin/content-view/polls'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/polls',
    'router_path' => 'admin/content-view/polls',
    'link_title' => 'Polls',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_polls:admin/content-view/polls',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_proposal-statistics:admin/statistics/proposal-statistics
  $menu_links['menu-project-manager_proposal-statistics:admin/statistics/proposal-statistics'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/proposal-statistics',
    'router_path' => 'admin/statistics/proposal-statistics',
    'link_title' => 'Proposal statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_proposal-statistics:admin/statistics/proposal-statistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_proposals:admin/content-view/proposals
  $menu_links['menu-project-manager_proposals:admin/content-view/proposals'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/proposals',
    'router_path' => 'admin/content-view/proposals',
    'link_title' => 'Proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_proposals:admin/content-view/proposals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_registration-settings:admin/config/system/register-form-settings
  $menu_links['menu-project-manager_registration-settings:admin/config/system/register-form-settings'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/system/register-form-settings',
    'router_path' => 'admin/config/system/register-form-settings',
    'link_title' => 'Registration settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_registration-settings:admin/config/system/register-form-settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_registration-statistics:admin/statistics/registration-statistics
  $menu_links['menu-project-manager_registration-statistics:admin/statistics/registration-statistics'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/registration-statistics',
    'router_path' => 'admin/statistics/registration-statistics',
    'link_title' => 'Registration statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_registration-statistics:admin/statistics/registration-statistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_reply-to:admin/config/system/mimemail
  $menu_links['menu-project-manager_reply-to:admin/config/system/mimemail'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/system/mimemail',
    'router_path' => 'admin/config/system/mimemail',
    'link_title' => 'Reply to',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_reply-to:admin/config/system/mimemail',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_role-names-feminine-:admin/settings/deutch-roles/feminine
  $menu_links['menu-project-manager_role-names-feminine-:admin/settings/deutch-roles/feminine'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/settings/deutch-roles/feminine',
    'router_path' => 'admin/settings/deutch-roles/feminine',
    'link_title' => 'Role names feminine ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_role-names-feminine-:admin/settings/deutch-roles/feminine',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_role-names-feminine:admin/settings/deutch-roles/feminine
  $menu_links['menu-project-manager_role-names-feminine:admin/settings/deutch-roles/feminine'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/settings/deutch-roles/feminine',
    'router_path' => 'admin/settings/deutch-roles/feminine',
    'link_title' => 'Role names feminine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_role-names-feminine:admin/settings/deutch-roles/feminine',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_role-names-neutral:admin/settings/deutch-roles/neutral
  $menu_links['menu-project-manager_role-names-neutral:admin/settings/deutch-roles/neutral'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/settings/deutch-roles/neutral',
    'router_path' => 'admin/settings/deutch-roles/neutral',
    'link_title' => 'Role names neutral',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_role-names-neutral:admin/settings/deutch-roles/neutral',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_self-appointment-of-editors:admin/config/content/bf_proposal
  $menu_links['menu-project-manager_self-appointment-of-editors:admin/config/content/bf_proposal'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/content/bf_proposal',
    'router_path' => 'admin/config/content/bf_proposal',
    'link_title' => 'Self-appointment of editors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_self-appointment-of-editors:admin/config/content/bf_proposal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_settings:admin/config/system/site-information
  $menu_links['menu-project-manager_settings:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_settings:admin/config/system/site-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_site-settings:admin/config/system/site-information
  $menu_links['menu-project-manager_site-settings:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_site-settings:admin/config/system/site-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_slider:admin/structure/taxonomy/bf_owl_carousel_slides
  $menu_links['menu-project-manager_slider:admin/structure/taxonomy/bf_owl_carousel_slides'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/structure/taxonomy/bf_owl_carousel_slides',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Slider',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_slider:admin/structure/taxonomy/bf_owl_carousel_slides',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_einstellungen:admin/config/system/site-information',
  );
  // Exported menu link: menu-project-manager_sort-tasks:admin/structure/nodequeue/3/view/3
  $menu_links['menu-project-manager_sort-tasks:admin/structure/nodequeue/3/view/3'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/structure/nodequeue/3/view/3',
    'router_path' => 'admin/structure/nodequeue/%/view/%',
    'link_title' => 'Sort tasks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_sort-tasks:admin/structure/nodequeue/3/view/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_aufgaben:admin/content-view/tasks',
  );
  // Exported menu link: menu-project-manager_statistics:admin/statistics/users
  $menu_links['menu-project-manager_statistics:admin/statistics/users'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/users',
    'router_path' => 'admin/statistics/users',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_statistics:admin/statistics/users',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_task-statistics:admin/statistics/task-statistics
  $menu_links['menu-project-manager_task-statistics:admin/statistics/task-statistics'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/task-statistics',
    'router_path' => 'admin/statistics/task-statistics',
    'link_title' => 'Task statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_task-statistics:admin/statistics/task-statistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_tasks:admin/content-view/tasks
  $menu_links['menu-project-manager_tasks:admin/content-view/tasks'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/content-view/tasks',
    'router_path' => 'admin/content-view/tasks',
    'link_title' => 'Tasks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_tasks:admin/content-view/tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-project-manager_users-statistics:admin/statistics/users
  $menu_links['menu-project-manager_users-statistics:admin/statistics/users'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/statistics/users',
    'router_path' => 'admin/statistics/users',
    'link_title' => 'Users statistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_users-statistics:admin/statistics/users',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-project-manager_statistiken:admin/statistics/users',
  );
  // Exported menu link: menu-project-manager_users:admin/users
  $menu_links['menu-project-manager_users:admin/users'] = array(
    'menu_name' => 'menu-project-manager',
    'link_path' => 'admin/users',
    'router_path' => 'admin/users',
    'link_title' => 'Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-project-manager_users:admin/users',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AJAX comments');
  t('Account settings ');
  t('Add Committee');
  t('Add Info-article');
  t('Add Newsletter');
  t('Add Poll');
  t('Add Proposal');
  t('Add Task');
  t('Add User');
  t('Additional field settings');
  t('Adminimal menu');
  t('Administration');
  t('BF Members profile (menu position rule)');
  t('BF footer top menu');
  t('BF info pages nodes (menu position rule)');
  t('BF program pages nodes (menu position rule)');
  t('BF proposal edit node (menu position rule)');
  t('BF task edit node (menu position rule)');
  t('Bürgerprogramm');
  t('Clientside Validation');
  t('Comment statistics');
  t('Comments');
  t('Committees');
  t('Complaints and suggestions');
  t('Contact');
  t('Date Popup');
  t('Edit / Delete Committees');
  t('Edit / Delete Info-articles');
  t('Edit / Delete Polls');
  t('Edit / Delete Proposals');
  t('Entity translation');
  t('Export');
  t('FAQ');
  t('Go to info');
  t('Go to program');
  t('Home');
  t('How do you heat your home?');
  t('Imprint');
  t('Info-articles');
  t('Information');
  t('Invitations');
  t('Login');
  t('Main menu');
  t('Management');
  t('Members');
  t('Menu for info-article');
  t('Menu for proposal');
  t('Message statistics');
  t('Modal forms');
  t('Navigation');
  t('Newsletter');
  t('Newsletters');
  t('Newsletters settings');
  t('Pages');
  t('Perfomance');
  t('Polls');
  t('Polls history');
  t('Privacy police');
  t('Program');
  t('Project Manager');
  t('Proposal statistics');
  t('Proposals');
  t('Registration settings');
  t('Registration statistics');
  t('Reply to');
  t('Responsive Menus');
  t('Role names feminine');
  t('Role names feminine ');
  t('Role names neutral');
  t('Rules');
  t('Self-appointment of editors');
  t('Settings');
  t('Site settings');
  t('Slider');
  t('Sort tasks');
  t('Statistics');
  t('Task statistics');
  t('Tasks');
  t('Terms of use');
  t('Translation sets');
  t('User menu');
  t('Users');
  t('Users statistics');
  t('bf_footer');
  t('jQuery update');


  return $menu_links;
}
