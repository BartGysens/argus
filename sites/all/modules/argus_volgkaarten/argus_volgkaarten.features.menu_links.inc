<?php
/**
 * @file
 * argus_volgkaarten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_volgkaarten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_volgkaarten:volgkaarten/overzicht.
  $menu_links['menu-modules_volgkaarten:volgkaarten/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'volgkaarten/overzicht',
    'router_path' => 'volgkaarten/overzicht',
    'link_title' => 'Volgkaarten',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_thumb_up',
        'style' => '',
      ),
      'identifier' => 'menu-modules_volgkaarten:volgkaarten/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_begeleidingsovereenkomsten:begeleidingsovereenkomsten/overzicht',
  );
  // Exported menu link: navigation_volgkaart:node/add/msl-volgkaart.
  $menu_links['navigation_volgkaart:node/add/msl-volgkaart'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-volgkaart',
    'router_path' => 'node/add/msl-volgkaart',
    'link_title' => 'Volgkaart',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'De <em>volgkaart</em> is het instrument om het gedrag van een leerling te volgen tijdens een schoolweek. Deze volgkaart is steeds verbonden aan een begeleidingsovereenkomst en heeft een strikte opvolgingsprocedure (zie Interne Kwaliteitszorg).',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_volgkaart:node/add/msl-volgkaart',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Volgkaart');
  t('Volgkaarten');

  return $menu_links;
}
