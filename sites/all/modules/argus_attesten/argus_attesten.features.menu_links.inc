<?php
/**
 * @file
 * argus_attesten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_attesten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_attesten:attesten/leerlingvolgsysteem.
  $menu_links['menu-modules_attesten:attesten/leerlingvolgsysteem'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'attesten/leerlingvolgsysteem',
    'router_path' => 'attesten/leerlingvolgsysteem',
    'link_title' => 'Attesten',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_attesten',
        'style' => '',
      ),
      'identifier' => 'menu-modules_attesten:attesten/leerlingvolgsysteem',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_leerlingvolgsysteem:node/18707',
  );
  // Exported menu link: navigation_attest:node/add/attest.
  $menu_links['navigation_attest:node/add/attest'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/attest',
    'router_path' => 'node/add/attest',
    'link_title' => 'Attest',
    'options' => array(
      'attributes' => array(
        'title' => 'Allerhande <em>attesten</em>; zowel persoonlijk als voor de organisatie.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_attest:node/add/attest',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attest');
  t('Attesten');

  return $menu_links;
}
