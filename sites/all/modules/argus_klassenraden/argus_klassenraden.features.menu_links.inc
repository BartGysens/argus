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
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Klassenraad');
  t('LVS - Klassenraad');
  t('LVS - Klassenraad - notitie');

  return $menu_links;
}
