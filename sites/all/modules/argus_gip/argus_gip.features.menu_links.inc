<?php
/**
 * @file
 * argus_gip.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_gip_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_gentegreerde-proef---gip:GIP.
  $menu_links['menu-modules_gentegreerde-proef---gip:GIP'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'GIP',
    'router_path' => 'GIP',
    'link_title' => 'Geïntegreerde proef - GIP',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_gentegreerde-proef---gip:GIP',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Geïntegreerde proef - GIP');

  return $menu_links;
}
