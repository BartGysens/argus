<?php
/**
 * @file
 * argus_preventieregister.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_preventieregister_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
