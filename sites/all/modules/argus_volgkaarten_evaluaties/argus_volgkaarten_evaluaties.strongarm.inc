<?php
/**
 * @file
 * argus_volgkaarten_evaluaties.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_volgkaarten_evaluaties_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_msl_volgkaart_evaluatie';
  $strongarm->value = 'edit-simplify--2';
  $export['additional_settings__active_tab_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_msl_volgkaart_evaluatie';
  $strongarm->value = '0';
  $export['ant_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_msl_volgkaart_evaluatie';
  $strongarm->value = '';
  $export['ant_pattern_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_msl_volgkaart_evaluatie';
  $strongarm->value = 0;
  $export['ant_php_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_msl_volgkaart_evaluatie';
  $strongarm->value = 0;
  $export['comment_anonymous_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_msl_volgkaart_evaluatie';
  $strongarm->value = 1;
  $export['comment_default_mode_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_msl_volgkaart_evaluatie';
  $strongarm->value = '50';
  $export['comment_default_per_page_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_msl_volgkaart_evaluatie';
  $strongarm->value = 1;
  $export['comment_form_location_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_msl_volgkaart_evaluatie';
  $strongarm->value = '1';
  $export['comment_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_msl_volgkaart_evaluatie';
  $strongarm->value = '0';
  $export['comment_preview_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_msl_volgkaart_evaluatie';
  $strongarm->value = 1;
  $export['comment_subject_field_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_msl_volgkaart_evaluatie';
  $strongarm->value = array(
    'view_own' => array(
      0 => 216,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 218,
      5 => 219,
    ),
    'view' => array(
      0 => 216,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 218,
      5 => 219,
    ),
  );
  $export['content_access_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_msl_volgkaart_evaluatie';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__msl_volgkaart_evaluatie';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_msl_volgkaart_evaluatie';
  $strongarm->value = '0';
  $export['language_content_type_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_msl_volgkaart_evaluatie';
  $strongarm->value = array();
  $export['menu_options_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_msl_volgkaart_evaluatie';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__msl_volgkaart_evaluatie';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_msl_volgkaart_evaluatie';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_msl_volgkaart_evaluatie';
  $strongarm->value = '1';
  $export['node_preview_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_msl_volgkaart_evaluatie';
  $strongarm->value = 1;
  $export['node_submitted_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_msl_volgkaart_evaluatie_pattern';
  $strongarm->value = 'lvs/volgkaart/evaluatie/[node:title]';
  $export['pathauto_node_msl_volgkaart_evaluatie_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_msl_volgkaart_evaluatie';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_msl_volgkaart_evaluatie';
  $strongarm->value = array();
  $export['simplify_comments_msl_volgkaart_evaluatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_msl_volgkaart_evaluatie';
  $strongarm->value = array();
  $export['simplify_nodes_msl_volgkaart_evaluatie'] = $strongarm;

  return $export;
}
