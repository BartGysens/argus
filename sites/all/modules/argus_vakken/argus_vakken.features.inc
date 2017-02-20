<?php
/**
 * @file
 * argus_vakken.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_vakken_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_vakken_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_vakken_node_info() {
  $items = array(
    'vak' => array(
      'name' => t('Vak'),
      'base' => 'node_content',
      'description' => t('Beheer de <em>vakken</em> die onderricht worden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
