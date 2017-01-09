<?php
/**
 * @file
 * argus_verslagen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_verslagen_ctools_plugin_api($module = NULL, $api = NULL) {
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
function argus_verslagen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_verslagen_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Gebruik <em>artikelen</em> voor tijdsgebonden inhoud zoals nieuws, persberichten of blog-berichten.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Eenvoudige pagina'),
      'base' => 'node_content',
      'description' => t('Gebruik <em>basispagina\'s</em> voor vaste inhoud, zoals een \'Over ons\'-pagina.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'verslag' => array(
      'name' => t('Verslag'),
      'base' => 'node_content',
      'description' => t('Inhoudstype om verslagen aan te maken.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
