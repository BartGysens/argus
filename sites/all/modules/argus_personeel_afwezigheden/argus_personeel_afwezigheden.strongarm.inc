<?php
/**
 * @file
 * argus_personeel_afwezigheden.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_personeel_afwezigheden_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__personeel_afwezigheid';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_personeel_afwezigheid';
  $strongarm->value = '0';
  $export['language_content_type_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_personeel_afwezigheid';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_personeel_afwezigheid';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_personeel_afwezigheid';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['node_preview_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['node_submitted_personeel_afwezigheid'] = $strongarm;

  return $export;
}
