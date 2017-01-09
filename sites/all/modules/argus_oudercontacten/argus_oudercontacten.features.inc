<?php
/**
 * @file
 * argus_oudercontacten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_oudercontacten_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_oudercontacten_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_oudercontacten_node_info() {
  $items = array(
    'oudercontact' => array(
      'name' => t('Oudercontact'),
      'base' => 'node_content',
      'description' => t('Beheer de <em>oudercontacten</em> om aanwezigheden, afspraken en andere modules te activeren.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
