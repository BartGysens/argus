<?php
/**
 * @file
 * argus_projecten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_projecten_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_projecten_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_projecten_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('<em>Projecten</em> kan je definiëren om een goed beeld te houden op alle lopende zaken in je afdeling tot vak- en afdelingsoverschrijdend.'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
