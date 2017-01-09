<?php
/**
 * @file
 * argus_jaarkalender.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_jaarkalender_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_jaarkalender_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_jaarkalender_node_info() {
  $items = array(
    'event_jaarkalender' => array(
      'name' => t('Event - jaarkalender'),
      'base' => 'node_content',
      'description' => t('Inhoudstype voor events in de jaarkalender.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
