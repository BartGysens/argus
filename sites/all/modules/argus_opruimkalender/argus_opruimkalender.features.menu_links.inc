<?php
/**
 * @file
 * argus_opruimkalender.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_opruimkalender_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_opruim-speelplaats:node/add/event-opruim-speelplaats.
  $menu_links['navigation_opruim-speelplaats:node/add/event-opruim-speelplaats'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-opruim-speelplaats',
    'router_path' => 'node/add/event-opruim-speelplaats',
    'link_title' => 'Opruim speelplaats',
    'options' => array(
      'attributes' => array(
        'title' => 'Inhoudstype voor events in de opruimkalender.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_opruim-speelplaats:node/add/event-opruim-speelplaats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'navigation_evenement:jaarkalender',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Opruim speelplaats');

  return $menu_links;
}
