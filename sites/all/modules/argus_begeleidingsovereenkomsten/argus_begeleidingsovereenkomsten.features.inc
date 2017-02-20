<?php
/**
 * @file
 * argus_begeleidingsovereenkomsten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_begeleidingsovereenkomsten_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_begeleidingsovereenkomsten_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_begeleidingsovereenkomsten_node_info() {
  $items = array(
    'msl_begeleidingsovereenkomst' => array(
      'name' => t('MSL - Begeleidingsovereenkomst'),
      'base' => 'node_content',
      'description' => t('Een <em>begeleidingsovereenkomst</em> kan afgesloten worden voor volgende redenen: gedrag, afwezigheden, pesten of een laattijdige inschrijving. De procedure houdt in dat een leerling, tijdens het verloop van de overeenkomst, elke week een evaluatie krijgt van de betrokken leerkracht, klastitularis of begeleider. Deze procedure vind je terug in het Intern KwaliteitsZorgsysteem.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
