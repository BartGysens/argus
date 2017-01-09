<?php
/**
 * @file
 * argus_nascholingen.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function argus_nascholingen_default_rules_configuration() {
  $items = array();
  $items['rules_nascholing_attest_binnengebracht'] = entity_import('rules_config', '{ "rules_nascholing_attest_binnengebracht" : {
      "LABEL" : "Nascholing - attest binnengebracht",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "attest", "nascholing" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--event_nascholing" : { "bundle" : "event_nascholing" } },
      "IF" : [
        { "data_is_empty" : { "data" : [ "node:field-ev-attest" ] } },
        { "AND" : [] },
        { "entity_has_field" : { "entity" : [ "node:author" ], "field" : "field_ev_datum" } },
        { "AND" : [] }
      ],
      "DO" : []
    }
  }');
  $items['rules_nascholing_attest_datum'] = entity_import('rules_config', '{ "rules_nascholing_attest_datum" : {
      "LABEL" : "Nascholing attest datum",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "attest", "datum", "nascholing" ],
      "USES VARIABLES" : {
        "datum_nascholing" : { "label" : "Datum van event", "type" : "date" },
        "huidige_datum" : { "label" : "Huidige datum", "type" : "date" },
        "attest" : { "label" : "Attest aan", "type" : "node" }
      },
      "DO" : []
    }
  }');
  $items['rules_nascholing_melding_van_nieuwe_aanvraag_nascholing'] = entity_import('rules_config', '{ "rules_nascholing_melding_van_nieuwe_aanvraag_nascholing" : {
      "LABEL" : "Nascholing - melding nieuwe aanvraag",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "nascholing" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--event_nascholing" : { "bundle" : "event_nascholing" } },
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "94",
            "co" : "0",
            "from" : [ "site:current-user:uid" ],
            "subject" : "Betreft: aanvraag nascholing \\u0027[node:field-ev-onderwerp]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe aanvraag tot nascholing ingediend door \\u003Cstrong\\u003E[node:author:field-user-sms-voornaam] [node:author:field-user-sms-naam]\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_nascholing_verandering_van_status'] = entity_import('rules_config', '{ "rules_nascholing_verandering_van_status" : {
      "LABEL" : "Nascholing - verandering van status",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "nascholing" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_presave--event_nascholing" : { "bundle" : "event_nascholing" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:field-ev-goedkeuring" ],
            "value" : [ "node-unchanged:field-ev-goedkeuring" ]
          }
        }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : [ "node:author:uid" ],
            "co" : "0",
            "from" : [ "site:current-user:uid" ],
            "subject" : "Betreft: aanvraag nascholing \\u0027[node:field-ev-onderwerp]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EUw aanvraag tot nascholing werd nagekeken en de status werd aangepast naar \\u003Cstrong\\u003E[node:field-ev-goedkeuring]\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
