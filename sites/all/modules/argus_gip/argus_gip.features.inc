<?php
/**
 * @file
 * argus_gip.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_gip_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
