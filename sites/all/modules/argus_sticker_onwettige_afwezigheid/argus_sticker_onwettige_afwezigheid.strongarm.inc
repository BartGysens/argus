<?php
/**
 * @file
 * argus_sticker_onwettige_afwezigheid.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_sticker_onwettige_afwezigheid_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_msl_oa_sticker';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_msl_oa_sticker';
  $strongarm->value = '1';
  $export['ant_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_msl_oa_sticker';
  $strongarm->value = '[node:field-msl-oa-sticker-leerling:name] - rode sticker ([node:field-msl-oa-sticker-f1-datum:datum_kort_])';
  $export['ant_pattern_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_msl_oa_sticker';
  $strongarm->value = 0;
  $export['ant_php_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_msl_oa_sticker';
  $strongarm->value = 0;
  $export['clone_reset_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_msl_oa_sticker';
  $strongarm->value = 0;
  $export['comment_anonymous_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_msl_oa_sticker';
  $strongarm->value = 1;
  $export['comment_default_mode_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_msl_oa_sticker';
  $strongarm->value = '50';
  $export['comment_default_per_page_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_msl_oa_sticker';
  $strongarm->value = 1;
  $export['comment_form_location_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_msl_oa_sticker';
  $strongarm->value = '1';
  $export['comment_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_msl_oa_sticker';
  $strongarm->value = '0';
  $export['comment_preview_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_msl_oa_sticker';
  $strongarm->value = 1;
  $export['comment_subject_field_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_msl_oa_sticker';
  $strongarm->value = array(
    'view_own' => array(
      0 => 88,
      1 => 163,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 218,
      6 => 219,
    ),
    'view' => array(
      0 => 88,
      1 => 163,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 218,
      6 => 219,
    ),
  );
  $export['content_access_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_msl_oa_sticker';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__msl_oa_sticker';
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
  $export['field_bundle_settings_node__msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_msl_oa_sticker';
  $strongarm->value = '0';
  $export['language_content_type_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_msl_oa_sticker';
  $strongarm->value = array();
  $export['menu_options_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_msl_oa_sticker';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__msl_oa_sticker';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_msl_oa_sticker';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_msl_oa_sticker';
  $strongarm->value = '1';
  $export['node_preview_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_msl_oa_sticker';
  $strongarm->value = 1;
  $export['node_submitted_msl_oa_sticker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_msl_oa_sticker_pattern';
  $strongarm->value = 'lvs/sticker-onwettige-afwezigheid/[node:title]';
  $export['pathauto_node_msl_oa_sticker_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_msl_oa_sticker';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_msl_oa_sticker'] = $strongarm;

  return $export;
}
