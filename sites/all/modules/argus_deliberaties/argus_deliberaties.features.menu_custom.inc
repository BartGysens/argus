<?php
/**
 * @file
 * argus_deliberaties.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function argus_deliberaties_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-modules.
  $menus['menu-modules'] = array(
    'menu_name' => 'menu-modules',
    'title' => 'Modules',
    'description' => 'Hier vind je alle beschikbare modules',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hier vind je alle beschikbare modules');
  t('Modules');

  return $menus;
}
