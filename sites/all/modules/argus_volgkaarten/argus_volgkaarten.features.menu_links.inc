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

  // Exported menu link: navigation_msl---volgkaart:node/add/msl-volgkaart
  $menu_links['navigation_msl---volgkaart:node/add/msl-volgkaart'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-volgkaart',
    'router_path' => 'node/add/msl-volgkaart',
    'link_title' => 'MSL - Volgkaart',
    'options' => array(
      'attributes' => array(
        'title' => 'De <em>volgkaart</em> is het instrument om het gedrag van een leerling te volgen tijdens een schoolweek. Deze volgkaart is steeds verbonden aan een begeleidingsovereenkomst en heeft een strikte opvolgingsprocedure (zie Interne Kwaliteitszorg).',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_msl---volgkaart:node/add/msl-volgkaart',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('MSL - Volgkaart');


  return $menu_links;
}
