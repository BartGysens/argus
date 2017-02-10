<?php
/**
 * @file
 * argus_inventaris.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_inventaris_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_inventaris:inventaris.
  $menu_links['menu-modules_inventaris:inventaris'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'inventaris',
    'router_path' => 'inventaris',
    'link_title' => 'Inventaris',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_inventaris:inventaris',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_financieelmaterieel:<nolink>',
  );
  // Exported menu link: navigation_inventaris:node/add/inventaris.
  $menu_links['navigation_inventaris:node/add/inventaris'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/inventaris',
    'router_path' => 'node/add/inventaris',
    'link_title' => 'Inventaris',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer je <em>inventaris</em> op een interactieve manier door een decentrale aanpak en goed beheer door verantwoordelijken en beheerders.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_inventaris:node/add/inventaris',
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
  t('Inventaris');

  return $menu_links;
}
