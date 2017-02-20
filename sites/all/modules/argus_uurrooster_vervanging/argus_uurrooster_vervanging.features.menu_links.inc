<?php
/**
 * @file
 * argus_uurrooster_vervanging.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_uurrooster_vervanging_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_vervangingen:uurrooster/vervangingen.
  $menu_links['menu-modules_vervangingen:uurrooster/vervangingen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'uurrooster/vervangingen',
    'router_path' => 'uurrooster/vervangingen',
    'link_title' => 'Vervangingen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_vervangingen:uurrooster/vervangingen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-modules_uurroosters:uurrooster',
  );
  // Exported menu link: navigation_vervanging:node/add/uurrooster-vervanging.
  $menu_links['navigation_vervanging:node/add/uurrooster-vervanging'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/uurrooster-vervanging',
    'router_path' => 'node/add/uurrooster-vervanging',
    'link_title' => 'Vervanging',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer je <em>vervangingen</em> binnen je organisatie of laat een automatisch vervangingsrooster opmaken door het systeem, gekoppeld aan Untis.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_vervanging:node/add/uurrooster-vervanging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -22,
    'customized' => 1,
    'parent_identifier' => 'navigation_uurrooster:uurrooster',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vervanging');
  t('Vervangingen');

  return $menu_links;
}
