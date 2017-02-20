<?php
/**
 * @file
 * argus_volgkaarten_evaluaties.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_volgkaarten_evaluaties_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_evaluaties:<nolink>.
  $menu_links['menu-modules_evaluaties:<nolink>'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Evaluaties',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_evaluaties:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );
  // Exported menu link: navigation_volgkaart---evaluatie:node/add/msl-volgkaart-evaluatie.
  $menu_links['navigation_volgkaart---evaluatie:node/add/msl-volgkaart-evaluatie'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-volgkaart-evaluatie',
    'router_path' => 'node/add/msl-volgkaart-evaluatie',
    'link_title' => 'Volgkaart - Evaluatie',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'navigation_volgkaart---evaluatie:node/add/msl-volgkaart-evaluatie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -27,
    'customized' => 1,
    'parent_identifier' => 'navigation_volgkaart:node/add/msl-volgkaart',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Evaluaties');
  t('Volgkaart - Evaluatie');

  return $menu_links;
}
