<?php
/**
 * @file
 * argus_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_event---jaarkalender:node/add/event-jaarkalender
  $menu_links['navigation_event---jaarkalender:node/add/event-jaarkalender'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-jaarkalender',
    'router_path' => 'node/add/event-jaarkalender',
    'link_title' => 'Event - jaarkalender',
    'options' => array(
      'attributes' => array(
        'title' => 'Inhoudstype voor events in de jaarkalender.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_event---jaarkalender:node/add/event-jaarkalender',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );
  // Exported menu link: navigation_event---pedagogische-activiteit:node/add/event-pedagogische-activiteit
  $menu_links['navigation_event---pedagogische-activiteit:node/add/event-pedagogische-activiteit'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-pedagogische-activiteit',
    'router_path' => 'node/add/event-pedagogische-activiteit',
    'link_title' => 'Event - pedagogische activiteit',
    'options' => array(
      'attributes' => array(
        'title' => 'Invulformulier voor het aanvragen van een pedagogische activiteit, van vakoverstijgende activiteit op school tot extra-muros activiteit.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_event---pedagogische-activiteit:node/add/event-pedagogische-activiteit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Event - jaarkalender');
  t('Event - pedagogische activiteit');


  return $menu_links;
}
