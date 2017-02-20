<?php
/**
 * @file
 * argus_vakken.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_vakken_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_vakken:vakken/overzicht.
  $menu_links['menu-modules_vakken:vakken/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'vakken/overzicht',
    'router_path' => 'vakken/overzicht',
    'link_title' => 'Vakken',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_vakken',
        'style' => '',
      ),
      'identifier' => 'menu-modules_vakken:vakken/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );
  // Exported menu link: navigation_vak:node/add/vak.
  $menu_links['navigation_vak:node/add/vak'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/vak',
    'router_path' => 'node/add/vak',
    'link_title' => 'Vak',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer de <em>vakken</em> die onderricht worden.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_vak:node/add/vak',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -11,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vak');
  t('Vakken');

  return $menu_links;
}
