<?php
/**
 * @file
 * argus_lokalen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_lokalen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_lokalen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_lokalen_node_info() {
  $items = array(
    'lokaal' => array(
      'name' => t('Lokaal'),
      'base' => 'node_content',
      'description' => t('Beheer je infrastructuur en je <em>lokalen</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
