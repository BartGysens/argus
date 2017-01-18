<?php
/**
 * @file
 * argus_feedbackgroepen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_feedbackgroepen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_feedbackgroepen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_feedbackgroepen_node_info() {
  $items = array(
    'feedbackgroep' => array(
      'name' => t('Feedbackgroep'),
      'base' => 'node_content',
      'description' => t('De <em>feedbackgroep</em> heeft als doelstelling om op afroep reflexie te geven op allerlei vragen.'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
