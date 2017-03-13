<?php
/**
 * @file
 * argus_verslagen.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function argus_verslagen_default_rules_configuration() {
	$items = array ();
	if (module_exists ( 'argus_sms_api' )) {
		$items ['rules_dienstmededeling_melding_gepubliceerde_dienstmededeling'] = entity_import ( 'rules_config', '{ "rules_dienstmededeling_melding_gepubliceerde_dienstmededeling" : {
      "LABEL" : "Dienstmededeling - Melding gepubliceerde dienstmededeling",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "dienstmededeling", "event" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_update--page" : { "bundle" : "page" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_tags" } },
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } },
        { "data_is" : { "data" : [ "node:field-tags:0:tid" ], "value" : "35" } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg_to_users_of_role" : {
            "key" : [ "node:nid" ],
            "roles" : { "value" : { "216" : "216" } },
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Betreft: nieuwe dienstmededeling \\u0027[node:title]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe dienstmededeling geplaatst op argus.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EKlik hier voor meer informatie: \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }' );
	}
	if (module_exists ( 'argus_sms_api' )) {
		$items ['rules_dienstmededeling_melding_nieuwe_dienstmededeling'] = entity_import ( 'rules_config', '{ "rules_dienstmededeling_melding_nieuwe_dienstmededeling" : {
      "LABEL" : "Dienstmededeling - Melding nieuwe dienstmededeling",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "dienstmededeling", "event" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--page" : { "bundle" : "page" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_tags" } },
        { "node_is_published" : { "node" : [ "node" ] } },
        { "data_is" : { "data" : [ "node:field-tags:0:tid" ], "value" : "35" } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg_to_users_of_role" : {
            "key" : [ "node:nid" ],
            "roles" : { "value" : { "216" : "216" } },
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Betreft: nieuwe dienstmededeling \\u0027[node:title]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe dienstmededeling geplaatst op argus.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EKlik hier voor meer informatie: \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }' );
	}
	if (module_exists ( 'argus_sms_api' )) {
		$items ['rules_vergadering'] = entity_import ( 'rules_config', '{ "rules_vergadering" : {
      "LABEL" : "Vergadering",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [
        "ILB",
        "interne leerlingbegeleiding",
        "managementvergadering",
        "pedagogische raad",
        "pedara",
        "staf",
        "stafvergadering",
        "vergadering"
      ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--verslag" : { "bundle" : "verslag" } },
      "IF" : [ { "node_is_published" : { "node" : [ "node" ] } } ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-ev-begeleiders" ] },
            "ITEM" : { "list_item" : "Huidig item in een lijst" },
            "DO" : [
              { "argus_sms_api_send_msg" : {
                  "key" : "[node:nid]",
                  "to" : "[list-item:uid]",
                  "co" : "0",
                  "from" : "[node:author:uid]",
                  "subject" : "Uitnodiging [node:field_verslag_voor] op [node:field_datum]",
                  "body" : "Beste [list-item:name]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nU bent uitgenodigd voor de [node:field_verslag_voor] op [node:field_datum].\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nDe agendapunten kan u raadplegen op [node:url]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nmvg\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\n[site:current-user:field-user-sms-voornaam] [site:current-user:field-user-sms-naam]"
                }
              }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-verslag-rollen" ] },
            "ITEM" : { "list_item" : "Huidig item in een lijst" },
            "DO" : [
              { "argus_sms_api_send_msg" : {
                  "key" : "[node:nid]",
                  "to" : "[list-item:uid]",
                  "co" : "0",
                  "from" : "[node:author:uid]",
                  "subject" : "Uitnodiging [node:field_verslag_voor] op [node:field_datum]",
                  "body" : "Beste [list-item:name]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nU bent uitgenodigd voor de [node:field_verslag_voor] op [node:field_datum].\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nDe agendapunten kan u raadplegen op [node:url]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nmvg\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\n[site:current-user:field-user-sms-voornaam] [site:current-user:field-user-sms-naam]"
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "[list-item]" ] },
                  "ITEM" : { "list_item2" : "Huidig item in een lijst" },
                  "DO" : []
                }
              },
              { "LOOP" : {
                  "USING" : { "list" : [ "list-item" ] },
                  "ITEM" : { "list_item2" : "Users met die rol" },
                  "DO" : []
                }
              }
            ]
          }
        }
      ]
    }
  }' );
	}
	return $items;
}
