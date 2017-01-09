<?php
/**
 * @file
 * argus_opruimkalender.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function argus_opruimkalender_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'event_opruim_speelplaats';
  $feeds_importer->config = array(
    'name' => 'Events - Opruim speelplaats',
    'description' => 'Koppeling naar de Smartschool-opruimkalender',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'indefinite_message_display' => TRUE,
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'DTSTART',
            'target' => 'field_ev_datum:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DTEND',
            'target' => 'field_ev_datum:end',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_ev_locatie',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_ev_beschrijving',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => '1',
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event_opruim_speelplaats',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => '1',
    'process_in_background' => 0,
  );
  $export['event_opruim_speelplaats'] = $feeds_importer;

  return $export;
}
