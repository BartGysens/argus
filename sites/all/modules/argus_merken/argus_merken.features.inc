<?php
/**
 * @file
 * argus_merken.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_merken_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_merken_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_merken_node_info() {
  $items = array(
    'merk' => array(
      'name' => t('Merk'),
      'base' => 'node_content',
      'description' => t('Allerlei <em>merknamen</em> voor verschillende toepassingsgebieden.'),
      'has_title' => '1',
      'title_label' => t('Merknaam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
