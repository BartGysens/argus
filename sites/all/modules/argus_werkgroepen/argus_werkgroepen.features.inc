<?php
/**
 * @file
 * argus_werkgroepen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_werkgroepen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_werkgroepen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_werkgroepen_node_info() {
  $items = array(
    'werkgroep' => array(
      'name' => t('Werkgroep'),
      'base' => 'node_content',
      'description' => t('Breng mensen samen in een <em>werkgroep</em>.'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
