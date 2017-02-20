<?php
/**
 * @file
 * argus_deliberaties.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_deliberaties_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_deliberaties:deliberaties/overzicht.
  $menu_links['menu-modules_deliberaties:deliberaties/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'deliberaties/overzicht',
    'router_path' => 'deliberaties/overzicht',
    'link_title' => 'Deliberaties',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_deliberaties:deliberaties/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-modules_:deliberaties',
  );
  // Exported menu link: navigation_deliberatie:node/add/lvs-deliberatie.
  $menu_links['navigation_deliberatie:node/add/lvs-deliberatie'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/lvs-deliberatie',
    'router_path' => 'node/add/lvs-deliberatie',
    'link_title' => 'Deliberatie',
    'options' => array(
      'attributes' => array(
        'title' => 'De <em>deliberatie</em>-gegevens kunnen vanuit Smartschool worden geïmporteerd via de Smartschool Synchronisatie.
Deze gegevens worden gebruikt om het totaalbeeld van de leerling te maken bij het gebruikersprofiel.
Je kan eventueel de gegevens ook manueel bijwerken of ingeven.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_deliberatie:node/add/lvs-deliberatie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Deliberatie');
  t('Deliberaties');

  return $menu_links;
}
