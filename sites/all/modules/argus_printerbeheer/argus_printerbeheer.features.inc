<?php
/**
 * @file
 * argus_printerbeheer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_printerbeheer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_printerbeheer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_printerbeheer_node_info() {
  $items = array(
    'printer' => array(
      'name' => t('Printer'),
      'base' => 'node_content',
      'description' => t('Gegevensfiche over <em>printers</em> in deze organisatie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'printer_accessoire' => array(
      'name' => t('Printer - accessoire'),
      'base' => 'node_content',
      'description' => t('Beheer de <em>accessoires</em> die gekoppeld kunnen worden aan de printers via het Printerbeheer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
