<?php
/**
 * @file
 * argus_werkgroepen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_werkgroepen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_werkgroepen:werkgroepen.
  $menu_links['menu-modules_werkgroepen:werkgroepen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'werkgroepen',
    'router_path' => 'werkgroepen',
    'link_title' => 'Werkgroepen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_werkgroepen:werkgroepen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_:node/%.
  $menu_links['navigation_:node/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/%',
    'router_path' => 'node/%',
    'link_title' => '',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_:node/%',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Werkgroepen');

  return $menu_links;
}
