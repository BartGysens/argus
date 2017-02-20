<?php
/**
 * @file
 * argus_examens.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_examens_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_examens---beheer:evaluatie/examens/beheer.
  $menu_links['menu-modules_examens---beheer:evaluatie/examens/beheer'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'evaluatie/examens/beheer',
    'router_path' => 'evaluatie/examens/beheer',
    'link_title' => 'Examens - beheer',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_examens---beheer:evaluatie/examens/beheer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-modules_examens:evaluatie/examens',
  );
  // Exported menu link: menu-modules_examens:evaluatie/examens.
  $menu_links['menu-modules_examens:evaluatie/examens'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'evaluatie/examens',
    'router_path' => 'evaluatie/examens',
    'link_title' => 'Examens',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_examens:evaluatie/examens',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_evaluaties:<nolink>',
  );
  // Exported menu link: navigation_examen:node/add/examen.
  $menu_links['navigation_examen:node/add/examen'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/examen',
    'router_path' => 'node/add/examen',
    'link_title' => 'Examen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'navigation_examen:node/add/examen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Examen');
  t('Examens');
  t('Examens - beheer');

  return $menu_links;
}
