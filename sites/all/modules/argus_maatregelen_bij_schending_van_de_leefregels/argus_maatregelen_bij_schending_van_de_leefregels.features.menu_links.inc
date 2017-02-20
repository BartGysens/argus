<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_maatregelen:maatregelen/overzicht.
  $menu_links['menu-modules_maatregelen:maatregelen/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'maatregelen/overzicht',
    'router_path' => 'maatregelen/overzicht',
    'link_title' => 'Maatregelen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_msl',
        'style' => '',
      ),
      'identifier' => 'menu-modules_maatregelen:maatregelen/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_leerlingvolgsysteem:node/18707',
  );
  // Exported menu link: navigation_maatregelen:node/add/maatregelen.
  $menu_links['navigation_maatregelen:node/add/maatregelen'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/maatregelen',
    'router_path' => 'node/add/maatregelen',
    'link_title' => 'Maatregelen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_maatregelen:node/add/maatregelen',
      'attributes' => array(
        'title' => 'Oplijsting van alle maatregelen die volgens het schoolreglement kunnen worden toegepast. Het gaat om allerlei toepassingsgebieden, zoals Maatregelen bij Schending van de Leefregels, Studiebegeleiding, Bekrachtiging van positief gedrag, Afwezigheden, enz.',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Maatregelen');

  return $menu_links;
}
