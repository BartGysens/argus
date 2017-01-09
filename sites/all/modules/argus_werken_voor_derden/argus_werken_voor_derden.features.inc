<?php
/**
 * @file
 * argus_werken_voor_derden.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_werken_voor_derden_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_werken_voor_derden_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_werken_voor_derden_node_info() {
  $items = array(
    'werk_voor_derden' => array(
      'name' => t('Werk voor derden'),
      'base' => 'node_content',
      'description' => t('Binnen de organisatie kan je de <em>werken voor derden</em> met deze module volledig automatiseren.'),
      'has_title' => '1',
      'title_label' => t('Omschrijving'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
