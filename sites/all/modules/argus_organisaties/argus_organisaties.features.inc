<?php
/**
 * @file
 * argus_organisaties.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_organisaties_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_organisaties_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_organisaties_node_info() {
  $items = array(
    'organisatie' => array(
      'name' => t('Organisatie'),
      'base' => 'node_content',
      'description' => t('Koppel bedrijven, organisaties, verenigingen aan je toepassingen met behulp van dit type. Enkele toepassingen: stagebedrijven, leveranciers, partners in projecten, ...'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
