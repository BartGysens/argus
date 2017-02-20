<?php
/**
 * @file
 * argus_verslagen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_verslagen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_dienstmededelingen:verslagen/dienstmededeling.
  $menu_links['menu-modules_dienstmededelingen:verslagen/dienstmededeling'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'verslagen/dienstmededeling',
    'router_path' => 'verslagen/%',
    'link_title' => 'Dienstmededelingen',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_dienstmededelingen:verslagen/dienstmededeling',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_algemeen:<nolink>',
  );
  // Exported menu link: menu-modules_vergaderingen:node/18498.
  $menu_links['menu-modules_vergaderingen:node/18498'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'node/18498',
    'router_path' => 'node/%',
    'link_title' => 'Vergaderingen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_underdevelopment',
        'style' => '',
      ),
      'identifier' => 'menu-modules_vergaderingen:node/18498',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_personeel:<nolink>',
  );
  // Exported menu link: navigation_verslag:node/add/verslag.
  $menu_links['navigation_verslag:node/add/verslag'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/verslag',
    'router_path' => 'node/add/verslag',
    'link_title' => 'Verslag',
    'options' => array(
      'attributes' => array(
        'title' => 'Inhoudstype om verslagen aan te maken.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_verslag:node/add/verslag',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dienstmededelingen');
  t('Vergaderingen');
  t('Verslag');

  return $menu_links;
}
