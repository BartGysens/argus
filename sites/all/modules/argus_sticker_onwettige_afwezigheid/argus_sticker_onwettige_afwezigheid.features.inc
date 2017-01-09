<?php
/**
 * @file
 * argus_sticker_onwettige_afwezigheid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_sticker_onwettige_afwezigheid_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_sticker_onwettige_afwezigheid_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_sticker_onwettige_afwezigheid_node_info() {
  $items = array(
    'msl_oa_sticker' => array(
      'name' => t('MSL - Sticker onwettige afwezigheid'),
      'base' => 'node_content',
      'description' => t('Bij de procedure omtrent Onwettige Afwezigheden hoort het opvolgen van de afwezigheden door middel van het plakken van een <em>rode sticker</em>. Dit past binnen de Maatregelen bij Schending van de Leefregels - MSL.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
