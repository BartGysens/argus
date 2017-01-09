<?php
/**
 * @file
 * argus_hrm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_hrm_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_hrm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_hrm_node_info() {
  $items = array(
    'hrm_evaluatiegesprek' => array(
      'name' => t('HRM - Evaluatiegesprek'),
      'base' => 'node_content',
      'description' => t('Stel een gedetailleerde beoordeling op van je personeelslid aan de hand van het <em>evaluatiegesprek</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_functioneringsgesprek' => array(
      'name' => t('HRM - Functioneringsgesprek'),
      'base' => 'node_content',
      'description' => t('Om je personeelslid goed te kunnen begeleiden, worden afspraken geformaliseerd tijdens een <em>functioneringsgesprek</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_planningsgesprek' => array(
      'name' => t('HRM - Planningsgesprek'),
      'base' => 'node_content',
      'description' => t('Als onderdeel van het evaluatietraject van personeelsleden, is het <em>planningsgesprek</em> de eerste stap in de start van deze procedure.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
