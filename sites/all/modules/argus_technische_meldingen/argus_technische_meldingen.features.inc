<?php
/**
 * @file
 * argus_technische_meldingen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_technische_meldingen_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_technische_meldingen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_technische_meldingen_node_info() {
  $items = array(
    'technische_melding' => array(
      'name' => t('Technische melding'),
      'base' => 'node_content',
      'description' => t('Organiseer je <em>technische meldingen</em> door de registratie en bijhorende workflow te gebruiken.'),
      'has_title' => '1',
      'title_label' => t('Onderwerp'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
