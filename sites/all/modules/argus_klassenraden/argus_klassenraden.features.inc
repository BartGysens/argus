<?php
/**
 * @file
 * argus_klassenraden.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_klassenraden_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_klassenraden_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_klassenraden_node_info() {
  $items = array(
    'lvs_klassenraad' => array(
      'name' => t('LVS - Klassenraad'),
      'base' => 'node_content',
      'description' => t('Plan en organiseer je <em>klassenraad</em> om er nadien notulen en acties aan te koppelen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'lvs_klassenraad_notitie' => array(
      'name' => t('LVS - Klassenraad - notitie'),
      'base' => 'node_content',
      'description' => t('Maak je administratie rond tijdens de <em>klassenraad</em> en noteer wat er over een bepaalde leerling werd gezegd en welke acties er aan vastgekoppeld worden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
