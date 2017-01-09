<?php
/**
 * @file
 * argus_technische_meldingen.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function argus_technische_meldingen_default_rules_configuration() {
  $items = array();
  $items['rules_technische_melding_reactie'] = entity_import('rules_config', '{ "rules_technische_melding_reactie" : {
      "LABEL" : "Technische melding - reactie - naar auteur",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "reactie", "technische melding" ],
      "REQUIRES" : [ "rules", "argus_sms_api", "comment" ],
      "ON" : { "comment_insert--comment_node_technische_melding" : { "bundle" : "comment_node_technische_melding" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "comment:author:uid" ],
            "value" : [ "comment:node:author:uid" ]
          }
        }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "comment:node:nid" ],
            "to" : [ "comment:node:author:uid" ],
            "co" : "0",
            "from" : [ "comment:author:uid" ],
            "subject" : "Betreft: nieuwe reactie op je technische melding \\u0027[comment:node:title]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe reactie geschreven op je technische melding\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003Eklik hier voor meer informatie: \\u003Ca href=\\u0022[comment:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[comment:url]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_technische_melding_reactie_naar_opvolger'] = entity_import('rules_config', '{ "rules_technische_melding_reactie_naar_opvolger" : {
      "LABEL" : "Technische melding - reactie - naar opvolger",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "reactie", "technische melding" ],
      "REQUIRES" : [ "rules", "argus_sms_api", "comment" ],
      "ON" : { "comment_insert--comment_node_technische_melding" : { "bundle" : "comment_node_technische_melding" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "comment:node" ], "field" : "field_tm_opgevolgd_door" } },
        { "NOT data_is" : {
            "data" : [ "comment:author:uid" ],
            "value" : [ "comment:node:field-tm-opgevolgd-door:uid" ]
          }
        }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "comment:node:nid" ],
            "to" : [ "comment:node:field-tm-opgevolgd-door:uid" ],
            "co" : "0",
            "from" : [ "comment:author:uid" ],
            "subject" : "Betreft: nieuwe reactie op de technische melding \\u0027[comment:node:title]\\u0027",
            "body" : "\\u003Cp\\u003EBeste,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEr werd een nieuwe reactie geschreven op een technische melding.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EKlik hier voor meer informatie: \\u003Ca href=\\u0022[comment:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[comment:url]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_technische_meldingen_kennisgeving_nieuwe_melding_argus'] = entity_import('rules_config', '{ "rules_technische_meldingen_kennisgeving_nieuwe_melding_argus" : {
      "LABEL" : "Technische meldingen - Kennisgeving nieuwe melding argus",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "technische melding" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--technische_melding" : { "bundle" : "technische_melding" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-tm-categorie" ], "value" : "argus" } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "87",
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Nieuwe technische melding over \\u0022argus\\u0022",
            "body" : "De nieuwe technische melding kan je vinden op \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E.",
            "attachments" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_technische_meldingen_kennisgeving_nieuwe_melding_ict'] = entity_import('rules_config', '{ "rules_technische_meldingen_kennisgeving_nieuwe_melding_ict" : {
      "LABEL" : "Technische meldingen - Kennisgeving nieuwe melding ICT",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "technische melding" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--technische_melding" : { "bundle" : "technische_melding" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-tm-categorie" ], "value" : "ICT" } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "85",
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Nieuwe technische melding over \\u0022ICT\\u0022",
            "body" : "De nieuwe technische melding kan je vinden op \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E.",
            "attachments" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_technische_meldingen_kennisgeving_nieuwe_melding_infrastru'] = entity_import('rules_config', '{ "rules_technische_meldingen_kennisgeving_nieuwe_melding_infrastru" : {
      "LABEL" : "Technische meldingen - Kennisgeving nieuwe melding Infrastructuur",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "technische melding" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--technische_melding" : { "bundle" : "technische_melding" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-tm-categorie" ], "value" : "Infrastructuur" } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "87",
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Nieuwe technische melding over \\u0022Infrastructuur\\u0022",
            "body" : "De nieuwe technische melding kan je vinden op \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E.",
            "attachments" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_technische_meldingen_kennisgeving_nieuwe_melding_smartscho'] = entity_import('rules_config', '{ "rules_technische_meldingen_kennisgeving_nieuwe_melding_smartscho" : {
      "LABEL" : "Technische meldingen - Kennisgeving nieuwe melding Smartschool",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "technische melding" ],
      "REQUIRES" : [ "rules", "argus_sms_api" ],
      "ON" : { "node_insert--technische_melding" : { "bundle" : "technische_melding" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-tm-categorie" ], "value" : "Smartschool" } }
      ],
      "DO" : [
        { "argus_sms_api_send_msg" : {
            "key" : [ "node:nid" ],
            "to" : "87",
            "co" : "0",
            "from" : [ "node:author:uid" ],
            "subject" : "Nieuwe technische melding over \\u0022Smartschool\\u0022",
            "body" : "De nieuwe technische melding kan je vinden op \\u003Ca href=\\u0022[node:url]\\u0022 target=\\u0022_blank\\u0022\\u003E[node:url]\\u003C\\/a\\u003E.",
            "attachments" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
