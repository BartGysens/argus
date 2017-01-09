<?php
/**
 * @file
 * argus_hrm.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_hrm_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_hrm:node/89093.
  $menu_links['menu-modules_hrm:node/89093'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'node/89093',
    'router_path' => 'node/%',
    'link_title' => 'HRM',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_hrm:node/89093',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_personeel:<nolink>',
  );
  // Exported menu link: navigation_hrm---evaluatiegesprek:node/add/hrm-evaluatiegesprek.
  $menu_links['navigation_hrm---evaluatiegesprek:node/add/hrm-evaluatiegesprek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-evaluatiegesprek',
    'router_path' => 'node/add/hrm-evaluatiegesprek',
    'link_title' => 'HRM - Evaluatiegesprek',
    'options' => array(
      'attributes' => array(
        'title' => 'Stel een gedetailleerde beoordeling op van je personeelslid aan de hand van het <em>evaluatiegesprek</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---evaluatiegesprek:node/add/hrm-evaluatiegesprek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );
  // Exported menu link: navigation_hrm---functioneringsgesprek:node/add/hrm-functioneringsgesprek.
  $menu_links['navigation_hrm---functioneringsgesprek:node/add/hrm-functioneringsgesprek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-functioneringsgesprek',
    'router_path' => 'node/add/hrm-functioneringsgesprek',
    'link_title' => 'HRM - Functioneringsgesprek',
    'options' => array(
      'attributes' => array(
        'title' => 'Om je personeelslid goed te kunnen begeleiden, worden afspraken geformaliseerd tijdens een <em>functioneringsgesprek</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---functioneringsgesprek:node/add/hrm-functioneringsgesprek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );
  // Exported menu link: navigation_hrm---planningsgesprek:node/add/hrm-planningsgesprek.
  $menu_links['navigation_hrm---planningsgesprek:node/add/hrm-planningsgesprek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-planningsgesprek',
    'router_path' => 'node/add/hrm-planningsgesprek',
    'link_title' => 'HRM - Planningsgesprek',
    'options' => array(
      'attributes' => array(
        'title' => 'Als onderdeel van het evaluatietraject van personeelsleden, is het <em>planningsgesprek</em> de eerste stap in de start van deze procedure.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---planningsgesprek:node/add/hrm-planningsgesprek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('HRM');
  t('HRM - Evaluatiegesprek');
  t('HRM - Functioneringsgesprek');
  t('HRM - Planningsgesprek');

  return $menu_links;
}
