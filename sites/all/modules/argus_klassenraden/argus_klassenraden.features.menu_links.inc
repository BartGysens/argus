<?php
/**
 * @file
 * argus_klassenraden.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_klassenraden_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_klassenraden:klassenraden.
  $menu_links['menu-modules_klassenraden:klassenraden'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'klassenraden',
    'router_path' => 'klassenraden',
    'link_title' => 'Klassenraden',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_klassenraden',
        'style' => '',
      ),
      'identifier' => 'menu-modules_klassenraden:klassenraden',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_leerlingvolgsysteem:node/18707',
  );
  // Exported menu link: navigation_lvs---klassenraad---notitie:node/add/lvs-klassenraad-notitie.
  $menu_links['navigation_lvs---klassenraad---notitie:node/add/lvs-klassenraad-notitie'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/lvs-klassenraad-notitie',
    'router_path' => 'node/add/lvs-klassenraad-notitie',
    'link_title' => 'LVS - Klassenraad - notitie',
    'options' => array(
      'attributes' => array(
        'title' => 'Maak je administratie rond tijdens de <em>klassenraad</em> en noteer wat er over een bepaalde leerling werd gezegd en welke acties er aan vastgekoppeld worden.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_lvs---klassenraad---notitie:node/add/lvs-klassenraad-notitie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'navigation_lvs---klassenraad:node/add/lvs-klassenraad',
  );
  // Exported menu link: navigation_lvs---klassenraad:node/add/lvs-klassenraad.
  $menu_links['navigation_lvs---klassenraad:node/add/lvs-klassenraad'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/lvs-klassenraad',
    'router_path' => 'node/add/lvs-klassenraad',
    'link_title' => 'LVS - Klassenraad',
    'options' => array(
      'attributes' => array(
        'title' => 'Plan en organiseer je <em>klassenraad</em> om er nadien notulen en acties aan te koppelen.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_lvs---klassenraad:node/add/lvs-klassenraad',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Klassenraden');
  t('LVS - Klassenraad');
  t('LVS - Klassenraad - notitie');

  return $menu_links;
}
