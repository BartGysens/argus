<?php
/**
 * @file
 * argus_hardware.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_hardware_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_hardware:hardware.
  $menu_links['menu-modules_hardware:hardware'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'hardware',
    'router_path' => 'hardware',
    'link_title' => 'Hardware',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_hardware:hardware',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_ict---hardware:node/add/ict-hardware.
  $menu_links['navigation_ict---hardware:node/add/ict-hardware'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ict-hardware',
    'router_path' => 'node/add/ict-hardware',
    'link_title' => 'ICT - Hardware',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'navigation_ict---hardware:node/add/ict-hardware',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hardware');
  t('ICT - Hardware');

  return $menu_links;
}
