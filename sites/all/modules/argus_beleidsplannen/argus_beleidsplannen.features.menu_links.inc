<?php
/**
 * @file
 * argus_beleidsplannen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_beleidsplannen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_beleidsplannen:beleidsplannen.
  $menu_links['menu-modules_beleidsplannen:beleidsplannen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'beleidsplannen',
    'router_path' => 'beleidsplannen',
    'link_title' => 'Beleidsplannen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_beleidsplannen:beleidsplannen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_algemeen:<nolink>',
  );
  // Exported menu link: navigation_beleidsplan:node/add/argus-beleidsplan.
  $menu_links['navigation_beleidsplan:node/add/argus-beleidsplan'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/argus-beleidsplan',
    'router_path' => 'node/add',
    'link_title' => 'Beleidsplan',
    'options' => array(
      'attributes' => array(
        'title' => 'Maak een <em>beleidsplan</em> op basis van een vaste structuur en bouw een boomstructuur op om je beleid in kaart te brengen.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_beleidsplan:node/add/argus-beleidsplan',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beleidsplan');
  t('Beleidsplannen');

  return $menu_links;
}
