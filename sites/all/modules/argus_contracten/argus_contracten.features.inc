<?php
/**
 * @file
 * argus_contracten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_contracten_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_contracten_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_contracten_node_info() {
  $items = array(
    'contract' => array(
      'name' => t('Contract'),
      'base' => 'node_content',
      'description' => t('Je kan de <em>contracten</em> in je organisatie netjes inventariseren en beheren via deze module.'),
      'has_title' => '1',
      'title_label' => t('Product / dienst'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
