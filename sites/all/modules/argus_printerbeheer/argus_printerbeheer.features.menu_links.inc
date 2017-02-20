<?php
/**
 * @file
 * argus_printerbeheer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_printerbeheer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_printerbeheer:printerbeheer.
  $menu_links['menu-modules_printerbeheer:printerbeheer'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'printerbeheer',
    'router_path' => 'printerbeheer',
    'link_title' => 'Printerbeheer',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Beheer je printers en hun accessoires.',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_printerbeheer',
        'style' => '',
      ),
      'identifier' => 'menu-modules_printerbeheer:printerbeheer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_infrastructuur:node/38828',
  );
  // Exported menu link: navigation_printer---accessoire:node/add/printer-accessoire.
  $menu_links['navigation_printer---accessoire:node/add/printer-accessoire'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/printer-accessoire',
    'router_path' => 'node/add/printer-accessoire',
    'link_title' => 'Printer - accessoire',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer de <em>accessoires</em> die gekoppeld kunnen worden aan de printers via het Printerbeheer.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_printer---accessoire:node/add/printer-accessoire',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'navigation_printer:node/add/printer',
  );
  // Exported menu link: navigation_printer:node/add/printer.
  $menu_links['navigation_printer:node/add/printer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/printer',
    'router_path' => 'node/add/printer',
    'link_title' => 'Printer',
    'options' => array(
      'attributes' => array(
        'title' => 'Gegevensfiche over <em>printers</em> in deze organisatie',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_printer:node/add/printer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -21,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Printer');
  t('Printer - accessoire');
  t('Printerbeheer');

  return $menu_links;
}
