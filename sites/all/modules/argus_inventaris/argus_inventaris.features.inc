<?php
/**
 * @file
 * argus_inventaris.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_inventaris_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_inventaris_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_inventaris_node_info() {
  $items = array(
    'inventaris' => array(
      'name' => t('Inventaris'),
      'base' => 'node_content',
      'description' => t('Beheer je <em>inventaris</em> op een interactieve manier door een decentrale aanpak en goed beheer door verantwoordelijken en beheerders.'),
      'has_title' => '1',
      'title_label' => t('Omschrijving'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
