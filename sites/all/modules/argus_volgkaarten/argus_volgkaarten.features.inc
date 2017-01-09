<?php
/**
 * @file
 * argus_volgkaarten.features.inc
 */

/**
 * Implements hook_views_api().
 */
function argus_volgkaarten_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_volgkaarten_node_info() {
  $items = array(
    'msl_volgkaart' => array(
      'name' => t('MSL - Volgkaart'),
      'base' => 'node_content',
      'description' => t('De <em>volgkaart</em> is het instrument om het gedrag van een leerling te volgen tijdens een schoolweek. Deze volgkaart is steeds verbonden aan een begeleidingsovereenkomst en heeft een strikte opvolgingsprocedure (zie Interne Kwaliteitszorg).'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
