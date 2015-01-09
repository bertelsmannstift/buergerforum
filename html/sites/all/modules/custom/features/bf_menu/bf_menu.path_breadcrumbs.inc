<?php
/**
 * @file
 * bf_menu.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function bf_menu_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'node_revision_view';
  $path_breadcrumb->name = 'Node revision view';
  $path_breadcrumb->path = 'node/%node/revisions/view/%revision1/%revision2/inlinediff';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Program',
      1 => '%node:field-committee:title',
      2 => '%node:title',
      3 => 'Revisions for %node:title',
    ),
    'paths' => array(
      0 => 'buergerprogramm',
      1 => '%node:field-committee:url',
      2 => '%node:url',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
      'revision1' => array(
        'position' => 4,
      ),
      'revision2' => array(
        'position' => 5,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['node_revision_view'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'revisions_for_proposal';
  $path_breadcrumb->name = 'Revisions for proposal';
  $path_breadcrumb->path = 'node/%node/revisions/%revision/list';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Program',
      1 => '%node:field-committee:title',
      2 => '%node:title',
      3 => 'Revisions for %node:title',
    ),
    'paths' => array(
      0 => 'buergerprogramm',
      1 => '%node:field-committee:url',
      2 => '%node:url',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
      'revision' => array(
        'position' => 3,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['revisions_for_proposal'] = $path_breadcrumb;

  return $export;
}
