<?php
/**
 * @file
 * argus_technische_meldingen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_technische_meldingen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_technische-meldingen:technische-meldingen.
  $menu_links['menu-modules_technische-meldingen:technische-meldingen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'technische-meldingen',
    'router_path' => 'technische-meldingen',
    'link_title' => 'Technische meldingen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_technische_meldingen',
        'style' => '',
      ),
      'identifier' => 'menu-modules_technische-meldingen:technische-meldingen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_financieelmaterieel:<nolink>',
  );
  // Exported menu link: navigation_technische-melding:node/add/technische-melding.
  $menu_links['navigation_technische-melding:node/add/technische-melding'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/technische-melding',
    'router_path' => 'node/add/technische-melding',
    'link_title' => 'Technische melding',
    'options' => array(
      'attributes' => array(
        'title' => 'Organiseer je <em>technische meldingen</em> door de registratie en bijhorende workflow te gebruiken.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_technische-melding:node/add/technische-melding',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Technische melding');
  t('Technische meldingen');

  return $menu_links;
}
