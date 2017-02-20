<?php
/**
 * @file
 * argus_nascholingen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_nascholingen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_nascholing-kwa:events/nascholing/kwa.
  $menu_links['menu-modules_nascholing-kwa:events/nascholing/kwa'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'events/nascholing/kwa',
    'router_path' => 'events/nascholing/kwa',
    'link_title' => 'Nascholing KWA',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_nascholing-kwa:events/nascholing/kwa',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_interne-kwaliteitszorg:ikz',
  );
  // Exported menu link: menu-modules_nascholing:events/nascholing.
  $menu_links['menu-modules_nascholing:events/nascholing'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'events/nascholing',
    'router_path' => 'events/nascholing',
    'link_title' => 'Nascholing',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_nascholing:events/nascholing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_aanvragen:<nolink>',
  );
  // Exported menu link: navigation_nascholing:node/add/event-nascholing.
  $menu_links['navigation_nascholing:node/add/event-nascholing'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-nascholing',
    'router_path' => 'node/add/event-nascholing',
    'link_title' => 'Nascholing',
    'options' => array(
      'attributes' => array(
        'title' => 'Aanvraagformulier voor nascholing',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_nascholing:node/add/event-nascholing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'navigation_evenement:jaarkalender',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Nascholing');
  t('Nascholing KWA');

  return $menu_links;
}
