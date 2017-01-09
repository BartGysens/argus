<?php
/**
 * @file
 * argus_ikz.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_ikz_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_ikz_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_ikz_node_info() {
  $items = array(
    'ikz_afkortingen' => array(
      'name' => t('IKZ - afkortingen'),
      'base' => 'node_content',
      'description' => t('Overzicht van afkortingen die gebruikt worden in KTA1 Hasselt.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ikz_documenten' => array(
      'name' => t('IKZ - documenten'),
      'base' => 'node_content',
      'description' => t('Documenten die geen officieel formulier zijn en dus niet door de kwaliteitscoördinator worden beheerd.'),
      'has_title' => '1',
      'title_label' => t('Documentnaam'),
      'help' => '',
    ),
    'ikz_formulier' => array(
      'name' => t('IKZ - formulier'),
      'base' => 'node_content',
      'description' => t('Aanmaken van een formulier in het IKZ.'),
      'has_title' => '1',
      'title_label' => t('Naam formulier'),
      'help' => '',
    ),
    'ikz_procedure' => array(
      'name' => t('IKZ - procedure'),
      'base' => 'node_content',
      'description' => t('Aanmaken van een nieuwe procedure binnen het systeem van IKZ.'),
      'has_title' => '1',
      'title_label' => t('Naam procedure'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function argus_ikz_default_search_api_index() {
  $items = array();
  $items['ikz'] = entity_import('search_api_index', '{
    "name" : "ikz",
    "machine_name" : "ikz",
    "description" : "Indexeert alle documenten van het intern kwaliteitszorgsysteem.",
    "server" : null,
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "ikz_afkortingen", "ikz_documenten", "ikz_formulier", "ikz_procedure" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_ikz_afkorting" : { "type" : "text" },
        "field_ikz_documentnaam" : { "type" : "text" },
        "field_ikz_nummer" : { "type" : "text" },
        "field_ikz_verantwoordelijkheden" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : "1",
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_domain_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : "1",
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_ikz_nummer" : true,
              "field_ikz_documentnaam" : true,
              "field_ikz_afkorting" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_ikz_nummer" : true,
              "field_ikz_documentnaam" : true,
              "field_ikz_afkorting" : true
            },
            "title" : 0,
            "alt" : "1",
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : "1",
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_ikz_nummer" : true,
              "field_ikz_documentnaam" : true,
              "field_ikz_afkorting" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_ikz_nummer" : true,
              "field_ikz_documentnaam" : true,
              "field_ikz_afkorting" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_ikz_nummer" : true,
              "field_ikz_documentnaam" : true,
              "field_ikz_afkorting" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : "1",
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "0",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
