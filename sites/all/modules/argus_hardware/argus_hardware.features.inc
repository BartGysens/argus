<?php
/**
 * @file
 * argus_hardware.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_hardware_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function argus_hardware_node_info() {
  $items = array(
    'ict_hardware' => array(
      'name' => t('ICT - Hardware'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
