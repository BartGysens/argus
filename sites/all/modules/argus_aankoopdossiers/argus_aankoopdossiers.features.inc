<?php
/**
 * @file
 * argus_aankoopdossiers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_aankoopdossiers_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_aankoopdossiers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_aankoopdossiers_node_info() {
  $items = array(
    'aankoopdossier' => array(
      'name' => t('Aankoopdossier'),
      'base' => 'node_content',
      'description' => t('Beheer de <em>aankoopdossiers</em> voor investeringen, kapitaalsaankopen en ander diensten en materialen.'),
      'has_title' => '1',
      'title_label' => t('Dossiernaam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
