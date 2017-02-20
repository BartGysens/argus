<?php
/**
 * @file
 * argus_sleutelbeheer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_sleutelbeheer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function argus_sleutelbeheer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_sleutelbeheer_node_info() {
  $items = array(
    'sleutel' => array(
      'name' => t('Sleutel'),
      'base' => 'node_content',
      'description' => t('Beheer de <em>sleutels</em> van lokalen, kasten, poorten, ...'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
