<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.features.inc
 */

/**
 * Implements hook_views_api().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_node_info() {
  $items = array(
    'maatregelen' => array(
      'name' => t('Maatregelen'),
      'base' => 'node_content',
      'description' => t('Oplijsting van alle maatregelen die volgens het schoolreglement kunnen worden toegepast. Het gaat om allerlei toepassingsgebieden, zoals Maatregelen bij Schending van de Leefregels, Studiebegeleiding, Bekrachtiging van positief gedrag, Afwezigheden, enz.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
