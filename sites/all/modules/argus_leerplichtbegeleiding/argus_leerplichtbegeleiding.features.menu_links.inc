<?php
/**
 * @file
 * argus_leerplichtbegeleiding.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_leerplichtbegeleiding_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_leerplichtbegeleiding:leerplichtbegeleiding.
  $menu_links['menu-modules_leerplichtbegeleiding:leerplichtbegeleiding'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'leerplichtbegeleiding',
    'router_path' => 'leerplichtbegeleiding',
    'link_title' => 'Leerplichtbegeleiding',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_leerplichtbegeleiding:leerplichtbegeleiding',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_afwezigheden:afwezigheden',
  );
  // Exported menu link: navigation_leerplichtbegeleiding:node/add/lvs-leerplichtbegeleiding.
  $menu_links['navigation_leerplichtbegeleiding:node/add/lvs-leerplichtbegeleiding'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/lvs-leerplichtbegeleiding',
    'router_path' => 'node/add/lvs-leerplichtbegeleiding',
    'link_title' => 'Leerplichtbegeleiding',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Beheer problematische afwezigheden bij leerlingen met behulp van de meldingsfiche van het CLB - <em>leerplichtbegeleiding</em>',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_leerplichtbegeleiding:node/add/lvs-leerplichtbegeleiding',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Leerplichtbegeleiding');

  return $menu_links;
}
