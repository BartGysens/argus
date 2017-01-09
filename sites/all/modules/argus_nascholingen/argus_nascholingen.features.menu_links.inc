<?php
/**
 * @file
 * argus_nascholingen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_nascholingen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_attesten-nascholing:nascholingen/attesten.
  $menu_links['menu-modules_attesten-nascholing:nascholingen/attesten'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'nascholingen/attesten',
    'router_path' => 'nascholingen/attesten',
    'link_title' => 'Attesten (nascholing)',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_attesten-nascholing:nascholingen/attesten',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-modules_nascholing:nascholingen',
  );
  // Exported menu link: menu-modules_goedkeuringen-nascholing:nascholingen/goedkeuringen.
  $menu_links['menu-modules_goedkeuringen-nascholing:nascholingen/goedkeuringen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'nascholingen/goedkeuringen',
    'router_path' => 'nascholingen/goedkeuringen',
    'link_title' => 'Goedkeuringen (nascholing)',
    'options' => array(
      'attributes' => array(
        'title' => 'Verlenen van goedkeuring door directie',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_goedkeuringen-nascholing:nascholingen/goedkeuringen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-modules_nascholing:nascholingen',
  );
  // Exported menu link: menu-modules_nascholing:nascholingen.
  $menu_links['menu-modules_nascholing:nascholingen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'nascholingen',
    'router_path' => 'nascholingen',
    'link_title' => 'Nascholing',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_nascholing:nascholingen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_nascholing:node/add/event-nascholing.
  $menu_links['navigation_nascholing:node/add/event-nascholing'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-nascholing',
    'router_path' => 'node/add/event-nascholing',
    'link_title' => 'Nascholing',
    'options' => array(
      'attributes' => array(
        'title' => 'Aanvraagformulier voor nascholing',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_nascholing:node/add/event-nascholing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'navigation_evenement:jaarkalender',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attesten (nascholing)');
  t('Goedkeuringen (nascholing)');
  t('Nascholing');

  return $menu_links;
}
