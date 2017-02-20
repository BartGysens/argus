<?php
/**
 * @file
 * argus_projecten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_projecten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_projecten:projecten.
  $menu_links['menu-modules_projecten:projecten'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'projecten',
    'router_path' => 'projecten',
    'link_title' => 'Projecten',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_projecten:projecten',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );
  // Exported menu link: navigation_project:node/add/project.
  $menu_links['navigation_project:node/add/project'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/project',
    'router_path' => 'node/add/project',
    'link_title' => 'Project',
    'options' => array(
      'attributes' => array(
        'title' => 'Breng je <em>projecten</em> mooi in kaart, beheer de betrokken personen en de budgetten. Koppel eventueel de module \'Werken voor derden\' aan deze module en beheer de boekhoudkundige afhandeling van het project.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_project:node/add/project',
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
  t('Project');
  t('Projecten');

  return $menu_links;
}
