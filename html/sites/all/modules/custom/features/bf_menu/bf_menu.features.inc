<?php
/**
 * @file
 * bf_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}
