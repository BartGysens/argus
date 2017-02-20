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
  $strongarm->name = 'additional_settings__active_tab_personeel_afwezigheid';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_personeel_afwezigheid';
  $strongarm->value = '[node:field-gebruiker] - [node:field-tijdstip:value:custom:d-m-Y]';
  $export['ant_pattern_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['ant_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_personeel_afwezigheid';
  $strongarm->value = 0;
  $export['ant_php_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_personeel_afwezigheid';
  $strongarm->value = 0;
  $export['comment_anonymous_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['comment_default_mode_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_personeel_afwezigheid';
  $strongarm->value = '50';
  $export['comment_default_per_page_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['comment_form_location_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_personeel_afwezigheid';
  $strongarm->value = '2';
  $export['comment_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['comment_preview_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_personeel_afwezigheid';
  $strongarm->value = '1';
  $export['comment_subject_field_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_personeel_afwezigheid';
  $strongarm->value = array(
    'view_own' => array(
      0 => 163,
      1 => 217,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 274,
      6 => 218,
      7 => 219,
    ),
    'view' => array(
      0 => 163,
      1 => 216,
      2 => 217,
      3 => 3,
      4 => 86,
      5 => 225,
      6 => 274,
      7 => 218,
      8 => 219,
    ),
  );
  $export['content_access_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_personeel_afwezigheid';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_personeel_afwezigheid'] = $strongarm;

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
  $strongarm->name = 'metatag_enable_node__personeel_afwezigheid';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__personeel_afwezigheid'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_personeel_afwezigheid_pattern';
  $strongarm->value = '';
  $export['pathauto_node_personeel_afwezigheid_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_personeel_afwezigheid';
  $strongarm->value = array();
  $export['simplify_comments_personeel_afwezigheid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_personeel_afwezigheid';
  $strongarm->value = array();
  $export['simplify_nodes_personeel_afwezigheid'] = $strongarm;

  return $export;
}
