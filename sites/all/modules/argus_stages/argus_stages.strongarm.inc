<?php
/**
 * @file
 * argus_stages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_stages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_stage';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_stageactiviteitenlijst';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_stagebezoek';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_stageperiode';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_stage';
  $strongarm->value = 'Stage van [node:field-leerling] - [node:field-stage-periode]';
  $export['ant_pattern_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_stageactiviteitenlijst';
  $strongarm->value = 'Stageactiviteitenlijst voor [node:field-klas]';
  $export['ant_pattern_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_stagebezoek';
  $strongarm->value = 'Stagebezoek op [node:field_tijdstip] bij [node:field-stage:field_leerling]';
  $export['ant_pattern_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_stageperiode';
  $strongarm->value = 'Stageperiode: van [node:field-tijdstip:value:custom:d/m/Y] tot [node:field-tijdstip:value2:custom:d/m/Y]';
  $export['ant_pattern_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_stage';
  $strongarm->value = 0;
  $export['ant_php_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_stageactiviteitenlijst';
  $strongarm->value = 0;
  $export['ant_php_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_stagebezoek';
  $strongarm->value = 0;
  $export['ant_php_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_stageperiode';
  $strongarm->value = 0;
  $export['ant_php_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_stage';
  $strongarm->value = '1';
  $export['ant_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['ant_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_stagebezoek';
  $strongarm->value = '1';
  $export['ant_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_stageperiode';
  $strongarm->value = '1';
  $export['ant_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bugsnag_release_stage';
  $strongarm->value = 'production';
  $export['bugsnag_release_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stage';
  $strongarm->value = 0;
  $export['comment_anonymous_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stageactiviteitenlijst';
  $strongarm->value = 0;
  $export['comment_anonymous_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stagebezoek';
  $strongarm->value = 0;
  $export['comment_anonymous_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stageperiode';
  $strongarm->value = 0;
  $export['comment_anonymous_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stage';
  $strongarm->value = 0;
  $export['comment_default_mode_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stageactiviteitenlijst';
  $strongarm->value = 0;
  $export['comment_default_mode_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stagebezoek';
  $strongarm->value = 0;
  $export['comment_default_mode_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stageperiode';
  $strongarm->value = 0;
  $export['comment_default_mode_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stage';
  $strongarm->value = '50';
  $export['comment_default_per_page_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stageactiviteitenlijst';
  $strongarm->value = '50';
  $export['comment_default_per_page_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stagebezoek';
  $strongarm->value = '50';
  $export['comment_default_per_page_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stageperiode';
  $strongarm->value = '50';
  $export['comment_default_per_page_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stage';
  $strongarm->value = '1';
  $export['comment_form_location_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['comment_form_location_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stagebezoek';
  $strongarm->value = 0;
  $export['comment_form_location_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stageperiode';
  $strongarm->value = '1';
  $export['comment_form_location_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stage';
  $strongarm->value = '1';
  $export['comment_preview_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['comment_preview_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stagebezoek';
  $strongarm->value = '0';
  $export['comment_preview_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stageperiode';
  $strongarm->value = '1';
  $export['comment_preview_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stage';
  $strongarm->value = '1';
  $export['comment_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['comment_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stagebezoek';
  $strongarm->value = '1';
  $export['comment_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stageperiode';
  $strongarm->value = '1';
  $export['comment_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stage';
  $strongarm->value = '1';
  $export['comment_subject_field_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['comment_subject_field_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stagebezoek';
  $strongarm->value = 0;
  $export['comment_subject_field_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stageperiode';
  $strongarm->value = '1';
  $export['comment_subject_field_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_stage';
  $strongarm->value = array(
    'view_own' => array(
      0 => 227,
      1 => 295,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 274,
      6 => 218,
      7 => 219,
    ),
    'view' => array(
      0 => 5,
      1 => 216,
      2 => 227,
      3 => 295,
      4 => 3,
      5 => 86,
      6 => 225,
      7 => 274,
      8 => 218,
      9 => 219,
    ),
  );
  $export['content_access_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_stageactiviteitenlijst';
  $strongarm->value = array(
    'view_own' => array(
      0 => 227,
      1 => 295,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 274,
      6 => 218,
      7 => 219,
    ),
    'view' => array(
      0 => 5,
      1 => 216,
      2 => 295,
      3 => 3,
      4 => 86,
      5 => 225,
      6 => 274,
      7 => 218,
      8 => 219,
    ),
  );
  $export['content_access_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_stagebezoek';
  $strongarm->value = array(
    'view_own' => array(
      0 => 227,
      1 => 295,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 274,
      6 => 218,
      7 => 219,
    ),
    'view' => array(
      0 => 216,
      1 => 227,
      2 => 295,
      3 => 3,
      4 => 86,
      5 => 225,
      6 => 274,
      7 => 218,
      8 => 219,
    ),
  );
  $export['content_access_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_stageperiode';
  $strongarm->value = array(
    'view_own' => array(
      0 => 295,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 227,
      3 => 295,
      4 => 3,
      5 => 86,
      6 => 225,
      7 => 274,
      8 => 218,
      9 => 219,
    ),
  );
  $export['content_access_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_stage';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_stageactiviteitenlijst';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_stagebezoek';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_stageperiode';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stage';
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
        'domain' => array(
          'weight' => '8',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stageactiviteitenlijst';
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
        'domain' => array(
          'weight' => '4',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stagebezoek';
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
        'domain' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stageperiode';
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
        'domain' => array(
          'weight' => '8',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stage';
  $strongarm->value = '0';
  $export['language_content_type_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stageactiviteitenlijst';
  $strongarm->value = '0';
  $export['language_content_type_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stagebezoek';
  $strongarm->value = '0';
  $export['language_content_type_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stageperiode';
  $strongarm->value = '0';
  $export['language_content_type_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stage';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stageactiviteitenlijst';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stagebezoek';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stageperiode';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stage';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stageactiviteitenlijst';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stagebezoek';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stageperiode';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__stage';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__stageactiviteitenlijst';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__stagebezoek';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__stageperiode';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_stage';
  $strongarm->value = '0';
  $export['new_revisions_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_stagebezoek';
  $strongarm->value = '0';
  $export['new_revisions_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stage';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stageactiviteitenlijst';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stagebezoek';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stageperiode';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stage';
  $strongarm->value = '1';
  $export['node_preview_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['node_preview_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stagebezoek';
  $strongarm->value = '1';
  $export['node_preview_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stageperiode';
  $strongarm->value = '1';
  $export['node_preview_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stage';
  $strongarm->value = '1';
  $export['node_submitted_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stageactiviteitenlijst';
  $strongarm->value = '1';
  $export['node_submitted_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stagebezoek';
  $strongarm->value = '1';
  $export['node_submitted_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stageperiode';
  $strongarm->value = '1';
  $export['node_submitted_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_stage';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_stagebezoek';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_stage';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_stageactiviteitenlijst';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_stagebezoek';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_stageperiode';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_stage';
  $strongarm->value = array();
  $export['simplify_comments_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_stageactiviteitenlijst';
  $strongarm->value = array();
  $export['simplify_comments_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_stagebezoek';
  $strongarm->value = array();
  $export['simplify_comments_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_stageperiode';
  $strongarm->value = array();
  $export['simplify_comments_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_stage';
  $strongarm->value = array();
  $export['simplify_nodes_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_stageactiviteitenlijst';
  $strongarm->value = array();
  $export['simplify_nodes_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_stagebezoek';
  $strongarm->value = array();
  $export['simplify_nodes_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_stageperiode';
  $strongarm->value = array();
  $export['simplify_nodes_stageperiode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_stage';
  $strongarm->value = 0;
  $export['webform_node_stage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_stageactiviteitenlijst';
  $strongarm->value = 0;
  $export['webform_node_stageactiviteitenlijst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_stagebezoek';
  $strongarm->value = 0;
  $export['webform_node_stagebezoek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_stageperiode';
  $strongarm->value = 0;
  $export['webform_node_stageperiode'] = $strongarm;

  return $export;
}
