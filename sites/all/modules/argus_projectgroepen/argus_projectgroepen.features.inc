<?php
/**
 * @file
 * argus_projectgroepen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_projectgroepen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_projectgroepen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_projectgroepen_node_info() {
  $items = array(
    'projectgroep' => array(
      'name' => t('Projectgroep'),
      'base' => 'node_content',
      'description' => t('Breng mensen samen in een groep; deze structuur steunt op het werken rond een <em>project</em>.'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
