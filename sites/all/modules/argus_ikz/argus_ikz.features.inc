<?php
/**
 * @file
 * argus_ikz.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_ikz_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_ikz_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_ikz_node_info() {
  $items = array(
    'ikz_afkortingen' => array(
      'name' => t('IKZ - afkortingen'),
      'base' => 'node_content',
      'description' => t('Overzicht van afkortingen die gebruikt worden in KTA1 Hasselt.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ikz_documenten' => array(
      'name' => t('IKZ - documenten'),
      'base' => 'node_content',
      'description' => t('Documenten die geen officieel formulier zijn en dus niet door de kwaliteitscoördinator worden beheerd.'),
      'has_title' => '1',
      'title_label' => t('Documentnaam'),
      'help' => '',
    ),
    'ikz_formulier' => array(
      'name' => t('IKZ - formulier'),
      'base' => 'node_content',
      'description' => t('Aanmaken van een formulier in het IKZ.'),
      'has_title' => '1',
      'title_label' => t('Naam formulier'),
      'help' => '',
    ),
    'ikz_procedure' => array(
      'name' => t('IKZ - procedure'),
      'base' => 'node_content',
      'description' => t('Aanmaken van een nieuwe procedure binnen het systeem van IKZ.'),
      'has_title' => '1',
      'title_label' => t('Naam procedure'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
