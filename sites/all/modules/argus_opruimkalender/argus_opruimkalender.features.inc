<?php
/**
 * @file
 * argus_opruimkalender.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_opruimkalender_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function argus_opruimkalender_node_info() {
  $items = array(
    'event_opruim_speelplaats' => array(
      'name' => t('Event - opruim speelplaats'),
      'base' => 'node_content',
      'description' => t('Inhoudstype voor events in de opruimkalender.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
