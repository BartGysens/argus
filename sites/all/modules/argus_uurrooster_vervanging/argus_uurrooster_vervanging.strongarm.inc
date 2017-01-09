<?php
/**
 * @file
 * argus_uurrooster_vervanging.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_uurrooster_vervanging_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__uurrooster_vervanging';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_uurrooster_vervanging';
  $strongarm->value = '0';
  $export['language_content_type_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_uurrooster_vervanging';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_uurrooster_vervanging';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_uurrooster_vervanging';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['node_preview_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['node_submitted_uurrooster_vervanging'] = $strongarm;

  return $export;
}
