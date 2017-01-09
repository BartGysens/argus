<?php
/**
 * @file
 * argus_uurrooster.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_uurrooster_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function argus_uurrooster_node_info() {
  $items = array(
    'uurrooster_les' => array(
      'name' => t('Uurrooster - les'),
      'base' => 'node_content',
      'description' => t('Hiermee wordt een koppeling gemaakt tussen vakken, lokalen, leerkrachten en het weekschema.<br />
Op basis van deze gegevens kunnen de <em>uurroosters</em> worden samengesteld.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'uurrooster_periode' => array(
      'name' => t('Uurrooster - periode'),
      'base' => 'node_content',
      'description' => t('Voor het opstellen van de uurroosters zijn de vooraf gedefinieerde <em>periodes</em> nodig.<br />
Deze periodes kan je best niet via argus beheren, maar in je GP Untis-pakket of ander lessenroosterprogramma.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
