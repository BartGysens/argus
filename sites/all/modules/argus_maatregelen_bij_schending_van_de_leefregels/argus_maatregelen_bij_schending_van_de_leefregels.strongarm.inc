<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_maatregelen';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_maatregelen';
  $strongarm->value = '0';
  $export['ant_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_maatregelen';
  $strongarm->value = '';
  $export['ant_pattern_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_maatregelen';
  $strongarm->value = 0;
  $export['ant_php_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_maatregelen';
  $strongarm->value = 0;
  $export['clone_reset_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_maatregelen';
  $strongarm->value = 0;
  $export['comment_anonymous_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_maatregelen';
  $strongarm->value = 0;
  $export['comment_default_mode_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_maatregelen';
  $strongarm->value = '50';
  $export['comment_default_per_page_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_maatregelen';
  $strongarm->value = 1;
  $export['comment_form_location_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_maatregelen';
  $strongarm->value = '1';
  $export['comment_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_maatregelen';
  $strongarm->value = '1';
  $export['comment_preview_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_maatregelen';
  $strongarm->value = 1;
  $export['comment_subject_field_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_maatregelen';
  $strongarm->value = array(
    'view_own' => array(
      0 => 88,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 218,
      5 => 219,
    ),
    'view' => array(
      0 => 88,
      1 => 163,
      2 => 216,
      3 => 3,
      4 => 86,
      5 => 225,
      6 => 218,
      7 => 219,
    ),
    'update' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 218,
      5 => 219,
    ),
    'update_own' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 218,
      5 => 219,
    ),
    'delete' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 218,
      5 => 219,
    ),
    'delete_own' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 218,
      5 => 219,
    ),
  );
  $export['content_access_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_maatregelen';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_maatregelen';
  $strongarm->value = array();
  $export['field_bundle_settings_comment__comment_node_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__maatregelen';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_maatregelen';
  $strongarm->value = '0';
  $export['language_content_type_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_maatregelen';
  $strongarm->value = array();
  $export['menu_options_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_maatregelen';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__maatregelen';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_maatregelen';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_maatregelen';
  $strongarm->value = '1';
  $export['node_preview_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_maatregelen';
  $strongarm->value = 1;
  $export['node_submitted_maatregelen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_maatregelen_pattern';
  $strongarm->value = 'maatregel/[node:title]';
  $export['pathauto_node_maatregelen_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_msl_maatregelen';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_msl_maatregelen'] = $strongarm;

  return $export;
}
