<?php
/**
 * @file
 * argus_beleidsplannen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_beleidsplannen_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_beleidsplannen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_beleidsplannen_node_info() {
  $items = array(
    'beleidsplan' => array(
      'name' => t('Beleidsplan'),
      'base' => 'node_content',
      'description' => t('Maak een <em>beleidsplan</em> op basis van een vaste structuur en bouw een boomstructuur op om je beleid in kaart te brengen.'),
      'has_title' => '1',
      'title_label' => t('Onderwerp'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
