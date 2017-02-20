<?php
/**
 * @file
 * argus_lokalen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_lokalen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_lokalen:lokalen/overzicht.
  $menu_links['menu-modules_lokalen:lokalen/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'lokalen/overzicht',
    'router_path' => 'lokalen/overzicht',
    'link_title' => 'Lokalen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_lokalen',
        'style' => '',
      ),
      'identifier' => 'menu-modules_lokalen:lokalen/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_infrastructuur:node/38828',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Lokalen');

  return $menu_links;
}
