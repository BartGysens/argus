<?php
/**
 * @file
 * argus_deliberaties.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_deliberaties_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_deliberaties_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_deliberaties_node_info() {
  $items = array(
    'lvs_deliberatie' => array(
      'name' => t('LVS - Deliberatie'),
      'base' => 'node_content',
      'description' => t('De <em>deliberatie</em>-gegevens kunnen vanuit Smartschool worden geïmporteerd via de Smartschool Synchronisatie.
Deze gegevens worden gebruikt om het totaalbeeld van de leerling te maken bij het gebruikersprofiel.
Je kan eventueel de gegevens ook manueel bijwerken of ingeven.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
