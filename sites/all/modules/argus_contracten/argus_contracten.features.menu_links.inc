<?php
/**
 * @file
 * argus_contracten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_contracten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_contracten:contracten.
  $menu_links['menu-modules_contracten:contracten'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'contracten',
    'router_path' => 'contracten',
    'link_title' => 'Contracten',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_contracten:contracten',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_financieelmaterieel:<nolink>',
  );
  // Exported menu link: navigation_contract:node/add/contract.
  $menu_links['navigation_contract:node/add/contract'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/contract',
    'router_path' => 'node/add/contract',
    'link_title' => 'Contract',
    'options' => array(
      'attributes' => array(
        'title' => 'Je kan de <em>contracten</em> in je organisatie netjes inventariseren en beheren via deze module.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_contract:node/add/contract',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contract');
  t('Contracten');

  return $menu_links;
}
