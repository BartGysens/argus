<?php
/**
 * @file
 * argus_oudercontacten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_oudercontacten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_oudercontacten:oudercontacten.
  $menu_links['menu-modules_oudercontacten:oudercontacten'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'oudercontacten',
    'router_path' => 'oudercontacten',
    'link_title' => 'Oudercontacten',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_oudercontacten:oudercontacten',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_leerlingvolgsysteem:node/18707',
  );
  // Exported menu link: navigation_oudercontact:node/add/oudercontact.
  $menu_links['navigation_oudercontact:node/add/oudercontact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/oudercontact',
    'router_path' => 'node/add/oudercontact',
    'link_title' => 'Oudercontact',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer de <em>oudercontacten</em> om aanwezigheden, afspraken en andere modules te activeren.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_oudercontact:node/add/oudercontact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -23,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Oudercontact');
  t('Oudercontacten');

  return $menu_links;
}
