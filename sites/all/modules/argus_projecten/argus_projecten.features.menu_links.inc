<?php
/**
 * @file
 * argus_projecten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_projecten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_projecten:projecten.
  $menu_links['menu-modules_projecten:projecten'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'projecten',
    'router_path' => 'projecten',
    'link_title' => 'Projecten',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_projecten:projecten',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Projecten');

  return $menu_links;
}
