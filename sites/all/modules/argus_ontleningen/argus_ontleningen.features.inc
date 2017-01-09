<?php
/**
 * @file
 * argus_ontleningen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_ontleningen_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_ontleningen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_ontleningen_node_info() {
  $items = array(
    'ontlening' => array(
      'name' => t('Ontlening'),
      'base' => 'node_content',
      'description' => t('Gebruik <em>ontlening</em> om als gebruiker, eigendommen van de school te ontlenen'),
      'has_title' => '1',
      'title_label' => t('Ontlening'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
