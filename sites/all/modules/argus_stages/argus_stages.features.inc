<?php
/**
 * @file
 * argus_stages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_stages_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_stages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_stages_node_info() {
  $items = array(
    'stage' => array(
      'name' => t('Stage'),
      'base' => 'node_content',
      'description' => t('Je kan je <em>stages</em> via deze module volledig in kaart brengen door leerlinge, stageperiodes en stagegevers aan elkaar te koppelen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'stageactiviteitenlijst' => array(
      'name' => t('Stageactiviteitenlijst'),
      'base' => 'node_content',
      'description' => t('Voor elke stage moet een lijst opgemaakt worden met mogelijke activiteiten. Deze <em>stageactiviteitenlijst</em> wordt opgenomen in het stagedossier.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stagebezoek' => array(
      'name' => t('Stagebezoek'),
      'base' => 'node_content',
      'description' => t('Met deze module kan je je <em>stagebezoek</em> inplannen en opvolgen qua evaluatie en administratie.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stageperiode' => array(
      'name' => t('Stageperiode'),
      'base' => 'node_content',
      'description' => t('Met dit type wordt een <em>periode</em> vastgelegd met haar specifieke datums dat een <em>stage</em> zal plaats vinden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
