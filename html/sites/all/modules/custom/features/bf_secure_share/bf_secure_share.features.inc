<?php
/**
 * @file
 * bf_secure_share.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bf_secure_share_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "secureshare" && $api == "default_secureshare_profiles") {
    return array("version" => "2");
  }
}
