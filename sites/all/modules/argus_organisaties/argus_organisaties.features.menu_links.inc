<?php
/**
 * @file
 * argus_organisaties.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_organisaties_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_organisaties:organisaties.
  $menu_links['menu-modules_organisaties:organisaties'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'organisaties',
    'router_path' => 'organisaties',
    'link_title' => 'Organisaties',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-modules_organisaties:organisaties',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_algemeen:<nolink>',
  );
  // Exported menu link: navigation_organisatie:node/add/organisatie.
  $menu_links['navigation_organisatie:node/add/organisatie'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/organisatie',
    'router_path' => 'node/add/organisatie',
    'link_title' => 'Organisatie',
    'options' => array(
      'attributes' => array(
        'title' => 'Koppel bedrijven, organisaties, verenigingen aan je toepassingen met behulp van dit type. Enkele toepassingen: stagebedrijven, leveranciers, partners in projecten, ...',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_organisatie:node/add/organisatie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -24,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Organisatie');
  t('Organisaties');

  return $menu_links;
}
