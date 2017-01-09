<?php
/**
 * @file
 * argus_events.features.inc
 */

/**
 * Implements hook_node_info().
 */
function argus_events_node_info() {
  $items = array(
    'event_jaarkalender' => array(
      'name' => t('Event - jaarkalender'),
      'base' => 'node_content',
      'description' => t('Inhoudstype voor events in de jaarkalender.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_pedagogische_activiteit' => array(
      'name' => t('Event - pedagogische activiteit'),
      'base' => 'node_content',
      'description' => t('Invulformulier voor het aanvragen van een pedagogische activiteit, van vakoverstijgende activiteit op school tot extra-muros activiteit.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
