<?php
/**
 * @file
 * argus_preventiekalender.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_preventiekalender_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function argus_preventiekalender_node_info() {
  $items = array(
    'event_preventiebeleid' => array(
      'name' => t('Event - preventiebeleid'),
      'base' => 'node_content',
      'description' => t('Overzicht van de acties, keuringen en andere maatregelen die genomen worden in het kader van de veiligheid en het <em>Preventiebeleid</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
