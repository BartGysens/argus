<?php
/**
 * @file
 * argus_acties.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_acties_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_acties---beheren:acties_beheren.
  $menu_links['menu-modules_acties---beheren:acties_beheren'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'acties_beheren',
    'router_path' => 'acties_beheren',
    'link_title' => 'Acties - beheren',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_acties---beheren:acties_beheren',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_leerlingvolgsysteem:node/18707',
  );
  // Exported menu link: navigation_actie:node/add/actie.
  $menu_links['navigation_actie:node/add/actie'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/actie',
    'router_path' => 'node/add/actie',
    'link_title' => 'Actie',
    'options' => array(
      'attributes' => array(
        'title' => 'Maak lijstjes op met <em>taken</em> die je moet uitvoeren en gebruik ze nadien als handige todo-lijstjes.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_actie:node/add/actie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actie');
  t('Acties - beheren');

  return $menu_links;
}
