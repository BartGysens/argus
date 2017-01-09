<?php
/**
 * @file
 * argus_deliberaties.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_deliberaties_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_deliberaties:deliberaties
  $menu_links['menu-modules_deliberaties:deliberaties'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'deliberaties',
    'router_path' => 'deliberaties',
    'link_title' => 'Deliberaties',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_deliberaties:deliberaties',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_leerlingvolgsysteem:node/18707',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Deliberaties');


  return $menu_links;
}
