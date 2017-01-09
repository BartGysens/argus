<?php
/**
 * @file
 * argus_pedagogische_activiteiten.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function argus_pedagogische_activiteiten_default_rules_configuration() {
  $items = array();
  $items['rules_pedagogische_act_melding_van_nieuwe_aanvraag_ped_act_'] = entity_import('rules_config', '{ "rules_pedagogische_act_melding_van_nieuwe_aanvraag_ped_act_" : {
      "LABEL" : "Pedagogische activiteit - melding nieuwe aanvraag",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "pedagogische activiteit" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--event_pedagogische_activiteit" : { "bundle" : "event_pedagogische_activiteit" } },
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "94",
            "co" : "0",
            "from" : [ "site:current-user:uid" ],
            "subject" : "Betreft: aanvraag pedagogische activiteit \\u0027[node:field-ev-activiteit]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe aanvraag tot pedagogische activiteit ingediend door \\u003Cstrong\\u003E[node:author:field-user-sms-voornaam] [node:author:field-user-sms-naam]\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_pedagogische_activiteit_automatische_goedkeuring'] = entity_import('rules_config', '{ "rules_pedagogische_activiteit_automatische_goedkeuring" : {
      "LABEL" : "Pedagogische activiteit - automatische goedkeuring",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "pedagogische activiteit" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--event_pedagogische_activiteit" : { "bundle" : "event_pedagogische_activiteit" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-ev-timing-activiteit" ], "value" : "tijdens" } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node:field-ev-tot-kostprijs-act" ], "value" : "0" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ev-goedkeuring" ], "value" : "Toegestaan" } },
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "94",
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Betreft: automatische goedkeuring \\u0027[node:field-ev-activiteit]\\u0027",
            "body" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_pedagogische_activiteit_en_nascholing_reactie_a'] = entity_import('rules_config', '{ "rules_pedagogische_activiteit_en_nascholing_reactie_a" : {
      "LABEL" : "Pedagogische activiteit en nascholing - reactie a",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "nascholing", "pedagogische activiteit" ],
      "REQUIRES" : [ "rules", "argus_sms_api", "comment" ],
      "ON" : {
        "comment_insert--comment_node_event_nascholing" : { "bundle" : "comment_node_event_nascholing" },
        "comment_insert--comment_node_event_pedagogische_activiteit" : { "bundle" : "comment_node_event_pedagogische_activiteit" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "comment:author" ], "value" : [ "comment:node:author" ] } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "comment:cid" ],
            "to" : "94",
            "co" : "0",
            "from" : [ "comment:author:uid" ],
            "subject" : "Betreft: nieuwe reactie op aanvraag \\u0027[comment:node:title]\\u0027",
            "body" : "\\u003Cp\\u003EBeste\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe reactie geschreven op aanvraag \\u0027[comment:node]\\u0027\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[comment:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[comment:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_pedagogische_activiteit_en_nascholing_reactie_b'] = entity_import('rules_config', '{ "rules_pedagogische_activiteit_en_nascholing_reactie_b" : {
      "LABEL" : "Pedagogische activiteit en nascholing - reactie b",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "nascholing", "pedagogische activiteit" ],
      "REQUIRES" : [ "rules", "argus_sms_api", "comment" ],
      "ON" : {
        "comment_insert--comment_node_event_nascholing" : { "bundle" : "comment_node_event_nascholing" },
        "comment_insert--comment_node_event_pedagogische_activiteit" : { "bundle" : "comment_node_event_pedagogische_activiteit" }
      },
      "IF" : [
        { "NOT data_is" : { "data" : [ "comment:author" ], "value" : [ "comment:node:author" ] } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "comment:cid" ],
            "to" : [ "comment:node:author:uid" ],
            "co" : "0",
            "from" : [ "comment:author:uid" ],
            "subject" : "Betreft: nieuwe reactie op aanvraag \\u0027[comment:node:title]\\u0027",
            "body" : "\\u003Cp\\u003EBeste\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe reactie geschreven op aanvraag \\u0027[comment:node]\\u0027\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[comment:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[comment:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_pedagogische_activiteit_melding_van_wijziging_ped_act_'] = entity_import('rules_config', '{ "rules_pedagogische_activiteit_melding_van_wijziging_ped_act_" : {
      "LABEL" : "Pedagogische activiteit - melding van wijziging ped. act.",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "pedagogische activiteit" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--event_pedagogische_activiteit" : { "bundle" : "event_pedagogische_activiteit" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node" ], "value" : [ "node-unchanged" ] } }
      ],
      "DO" : []
    }
  }');
  $items['rules_pedagogische_activiteit_verandering_van_status'] = entity_import('rules_config', '{ "rules_pedagogische_activiteit_verandering_van_status" : {
      "LABEL" : "Pedagogische activiteit - verandering van status",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "pedagogische activiteit" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_presave--event_pedagogische_activiteit" : { "bundle" : "event_pedagogische_activiteit" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:field-ev-goedkeuring" ],
            "value" : [ "node-unchanged:field-ev-goedkeuring" ]
          }
        },
        { "NOT AND" : [
            { "NOT data_is" : { "data" : [ "node:field-ev-plaats-activiteit" ], "value" : "op school" } },
            { "AND" : [] },
            { "NOT data_is" : { "data" : [ "node:field-ev-timing-activiteit" ], "value" : "tijdens" } },
            { "AND" : [] },
            { "data_is" : { "data" : [ "node:field-ev-tot-kostprijs-act" ], "value" : "0" } }
          ]
        }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : [ "node:author:uid" ],
            "co" : "0",
            "from" : [ "site:current-user:uid" ],
            "subject" : "Betreft: aanvraag pedagogische activiteit \\u0027[node:field-ev-activiteit]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EUw aanvraag voor een pedagogische activiteit werd nagekeken en de status werd aangepast naar \\u003Cstrong\\u003E[node:field-ev-goedkeuring]\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
