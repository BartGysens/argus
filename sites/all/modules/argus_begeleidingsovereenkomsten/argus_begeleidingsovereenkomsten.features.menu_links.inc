<?php
/**
 * @file
 * argus_begeleidingsovereenkomsten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_begeleidingsovereenkomsten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_begeleidingsovereenkomsten:begeleidingsovereenkomsten/overzicht.
  $menu_links['menu-modules_begeleidingsovereenkomsten:begeleidingsovereenkomsten/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'begeleidingsovereenkomsten/overzicht',
    'router_path' => 'begeleidingsovereenkomsten/overzicht',
    'link_title' => 'Begeleidingsovereenkomsten',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_contracten',
        'style' => '',
      ),
      'identifier' => 'menu-modules_begeleidingsovereenkomsten:begeleidingsovereenkomsten/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_maatregelen:maatregelen/overzicht',
  );
  // Exported menu link: navigation_begeleidingsovereenkomst:node/add/msl-begeleidingsovereenkomst.
  $menu_links['navigation_begeleidingsovereenkomst:node/add/msl-begeleidingsovereenkomst'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-begeleidingsovereenkomst',
    'router_path' => 'node/add/msl-begeleidingsovereenkomst',
    'link_title' => 'Begeleidingsovereenkomst',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Een <em>begeleidingsovereenkomst</em> kan afgesloten worden voor volgende redenen: gedrag, afwezigheden, pesten of een laattijdige inschrijving. De procedure houdt in dat een leerling, tijdens het verloop van de overeenkomst, elke week een evaluatie krijgt van de betrokken leerkracht, klastitularis of begeleider. Deze procedure vind je terug in het Intern KwaliteitsZorgsysteem.',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'navigation_begeleidingsovereenkomst:node/add/msl-begeleidingsovereenkomst',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Begeleidingsovereenkomst');
  t('Begeleidingsovereenkomsten');

  return $menu_links;
}
