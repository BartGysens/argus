<?php
/**
 * @file
 * argus_preventiekalender.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function argus_preventiekalender_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'events_preventiebeleid';
  $feeds_importer->config = array(
    'name' => 'Events - Preventiebeleid',
    'description' => 'Alle activiteiten en acties die horen bij het preventiebeleid',
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
        'author' => '196',
        'authorize' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'DTSTART',
            'target' => 'field_pb_event_datum:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'DTEND',
            'target' => 'field_pb_event_datum:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => 0,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'LOCATION',
            'target' => 'field_pb_event_locatie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_pb_event_beschrijving',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => '1',
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event_preventiebeleid',
        'update_non_existent' => 'delete',
        'insert_new' => '1',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['events_preventiebeleid'] = $feeds_importer;

  return $export;
}
