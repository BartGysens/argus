<?php
/**
 * @file
 * argus_jaarkalender.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_jaarkalender_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_jaarkalender:jaarkalender.
  $menu_links['menu-modules_jaarkalender:jaarkalender'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'jaarkalender',
    'router_path' => 'jaarkalender',
    'link_title' => 'Jaarkalender',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_jaarkalender',
        'style' => '',
      ),
      'identifier' => 'menu-modules_jaarkalender:jaarkalender',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_algemeen:<nolink>',
  );
  // Exported menu link: navigation_jaarkalender:node/add/event-jaarkalender.
  $menu_links['navigation_jaarkalender:node/add/event-jaarkalender'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-jaarkalender',
    'router_path' => 'node/add/event-jaarkalender',
    'link_title' => 'Jaarkalender',
    'options' => array(
      'attributes' => array(
        'title' => 'Inhoudstype voor events in de jaarkalender.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_jaarkalender:node/add/event-jaarkalender',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'navigation_evenement:jaarkalender',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Jaarkalender');

  return $menu_links;
}
