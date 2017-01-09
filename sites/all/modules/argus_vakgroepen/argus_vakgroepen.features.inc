<?php
/**
 * @file
 * argus_vakgroepen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_vakgroepen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_vakgroepen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_vakgroepen_node_info() {
  $items = array(
    'vakgroep' => array(
      'name' => t('Vakgroep'),
      'base' => 'node_content',
      'description' => t('Lijst met vakgroepen en de daaraan gekoppelde vakken.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
