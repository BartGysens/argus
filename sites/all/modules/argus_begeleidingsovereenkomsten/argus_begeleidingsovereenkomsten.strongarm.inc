<?php
/**
 * @file
 * argus_begeleidingsovereenkomsten.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_begeleidingsovereenkomsten_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_msl_begeleidingsovereenkomst';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_msl_begeleidingsovereenkomst';
  $strongarm->value = '1';
  $export['ant_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_msl_begeleidingsovereenkomst';
  $strongarm->value = '[node:field-msl-bo-leerling] - begeleidingsovereenkomst [node:field-msl-bo-type] ([node:field-msl-bo-startdatum:datum_kort_])';
  $export['ant_pattern_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_msl_begeleidingsovereenkomst';
  $strongarm->value = 0;
  $export['ant_php_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_msl_begeleidingsovereenkomst';
  $strongarm->value = 0;
  $export['clone_reset_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_msl_begeleidingsovereenkomst';
  $strongarm->value = 0;
  $export['comment_anonymous_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_msl_begeleidingsovereenkomst';
  $strongarm->value = 1;
  $export['comment_default_mode_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_msl_begeleidingsovereenkomst';
  $strongarm->value = '50';
  $export['comment_default_per_page_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_msl_begeleidingsovereenkomst';
  $strongarm->value = 1;
  $export['comment_form_location_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_msl_begeleidingsovereenkomst';
  $strongarm->value = '1';
  $export['comment_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_msl_begeleidingsovereenkomst';
  $strongarm->value = '0';
  $export['comment_preview_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_msl_begeleidingsovereenkomst';
  $strongarm->value = 1;
  $export['comment_subject_field_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_msl_begeleidingsovereenkomst';
  $strongarm->value = array(
    'view_own' => array(
      0 => 88,
      1 => 216,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 218,
      6 => 219,
    ),
    'view' => array(
      0 => 88,
      1 => 216,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 218,
      6 => 219,
    ),
  );
  $export['content_access_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_msl_begeleidingsovereenkomst';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__msl_begeleidingsovereenkomst';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_msl_begeleidingsovereenkomst';
  $strongarm->value = '0';
  $export['language_content_type_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_msl_begeleidingsovereenkomst';
  $strongarm->value = array();
  $export['menu_options_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_msl_begeleidingsovereenkomst';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__msl_begeleidingsovereenkomst';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_msl_begeleidingsovereenkomst';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_msl_begeleidingsovereenkomst';
  $strongarm->value = '1';
  $export['node_preview_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_msl_begeleidingsovereenkomst';
  $strongarm->value = 1;
  $export['node_submitted_msl_begeleidingsovereenkomst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_msl_begeleidingsovereenkomst_pattern';
  $strongarm->value = 'lvs/begeleidingsovereenkomst/[node:title]';
  $export['pathauto_node_msl_begeleidingsovereenkomst_pattern'] = $strongarm;

  return $export;
}
