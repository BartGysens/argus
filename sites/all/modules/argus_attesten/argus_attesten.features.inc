<?php
/**
 * @file
 * argus_attesten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_attesten_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_attesten_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_attesten_node_info() {
  $items = array(
    'attest' => array(
      'name' => t('Attest'),
      'base' => 'node_content',
      'description' => t('Allerhande <em>attesten</em>; zowel persoonlijk als voor de organisatie.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
