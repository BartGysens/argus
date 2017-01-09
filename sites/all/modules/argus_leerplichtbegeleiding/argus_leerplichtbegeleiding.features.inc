<?php
/**
 * @file
 * argus_leerplichtbegeleiding.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_leerplichtbegeleiding_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_leerplichtbegeleiding_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_leerplichtbegeleiding_node_info() {
  $items = array(
    'lvs_leerplichtbegeleiding' => array(
      'name' => t('LVS - Leerplichtbegeleiding'),
      'base' => 'node_content',
      'description' => t('Beheer problematische afwezigheden bij leerlingen met behulp van de meldingsfiche van het CLB - <em>leerplichtbegeleiding</em>'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
