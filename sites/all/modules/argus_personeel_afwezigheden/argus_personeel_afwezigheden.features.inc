<?php
/**
 * @file
 * argus_personeel_afwezigheden.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_personeel_afwezigheden_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_personeel_afwezigheden_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_personeel_afwezigheden_node_info() {
  $items = array(
    'personeel_afwezigheid' => array(
      'name' => t('Personeel - afwezigheid'),
      'base' => 'node_content',
      'description' => t('Registreer de <em>afwezige personeelsleden</em> en automatiseer via deze weg allerlei vervangings- en registratiesystemen binnen de pakketten Uurrooster, Personeel en Informatieschermen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
