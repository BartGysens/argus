<?php
/**
 * @file
 * argus_pedagogische_activiteiten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_pedagogische_activiteiten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_pedagogischdidactisch:<nolink>.
  $menu_links['menu-modules_pedagogischdidactisch:<nolink>'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Pedagogisch/didactisch',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 6,
    'customized' => 1,
  );
  // Exported menu link: navigation_pedagogische-activiteit:node/add/event-pedagogische-activiteit.
  $menu_links['navigation_pedagogische-activiteit:node/add/event-pedagogische-activiteit'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-pedagogische-activiteit',
    'router_path' => 'node/add/event-pedagogische-activiteit',
    'link_title' => 'Pedagogische activiteit',
    'options' => array(
      'attributes' => array(
        'title' => 'Invulformulier voor het aanvragen van een pedagogische activiteit, van vakoverstijgende activiteit op school tot extra-muros activiteit.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_pedagogische-activiteit:node/add/event-pedagogische-activiteit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'navigation_evenement:jaarkalender',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Pedagogisch/didactisch');
  t('Pedagogische activiteit');

  return $menu_links;
}
