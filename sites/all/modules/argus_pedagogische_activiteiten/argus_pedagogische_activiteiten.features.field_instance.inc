<?php
/**
 * @file
 * argus_pedagogische_activiteiten.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_pedagogische_activiteiten_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_event_pedagogische_activiteit-comment_body'.
  $field_instances['comment-comment_node_event_pedagogische_activiteit-comment_body'] = array(
    'bundle' => 'comment_node_event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_aantal_lln'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_aantal_lln'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Aantal leerlingen dat deelneemt aan de activiteit',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_aantal_lln',
    'label' => 'Aantal deelnemende lln',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_aantal_lln_busje'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_aantal_lln_busje'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Aantal leerlingen die met het schoolbusje meegaan, exclusief de leerkracht.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_aantal_lln_busje',
    'label' => 'Aantal leerlingen met schoolbusje',
    'required' => 0,
    'settings' => array(
      'max' => 8,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 55,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_aard'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_aard'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Betreft het hier een standaardactiviteit of gaat het om werkplekleren of duaal leren?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_aard',
    'label' => 'Aard',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_activiteit'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_activiteit'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => FALSE,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_link' => FALSE,
          'trim_options' => array(),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_activiteit',
    'label' => 'Activiteit',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_afstand'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_afstand'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Afstand (heen en terug) tot de plaats van activiteit
Enkel in te vullen indien gebruik gemaakt wordt van een <b>schoolbusje</b>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_afstand',
    'label' => 'Afstand (enkel schoolbusje)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' km',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_busje_betaald'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_busje_betaald'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'hide_if_string',
              'configuration' => array(
                'string' => 'schoolbusje',
                'target' => 'field_ev_vervoer',
              ),
            ),
          ),
        ),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_busje_betaald',
    'label' => 'Busje betaald',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 58,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_goedkeuring'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_goedkeuring'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => array(
      0 => array(
        'value' => 'Nieuw',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_goedkeuring',
    'label' => 'Goedkeuring',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_kostprijs_activiteit'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_kostprijs_activiteit'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => 'Hoeveel kost de activiteit (excl. vervoer) voor alle leerlingen samen?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_kostprijs_activiteit',
    'label' => 'Kostprijs activiteit',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_kostprijs_schoolbusje'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_kostprijs_schoolbusje'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Wordt automatisch berekend door het aantal leerlingen te vermenigvuldigen met het aantal kilometer en de kostprijs van 0,15 EUR/km. Er geldt een maximum van de prijs van een GO-pass H/T.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'computed_field_plain',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_kostprijs_schoolbusje',
    'label' => 'Kostprijs schoolbusje',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 56,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_kostprijs_vervoer'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_kostprijs_vervoer'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_kostprijs_vervoer',
    'label' => 'Kostprijs vervoer',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_plaats_activiteit'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_plaats_activiteit'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Plaats van de pedagogische activiteit',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_plaats_activiteit',
    'label' => 'Plaats activiteit',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_prijs_busje_lln'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_prijs_busje_lln'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Bedrag dat aan elke leerling moet gevraagd worden ter dekking van de kosten van het schoolbusje.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'computed_field_plain',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_prijs_busje_lln',
    'label' => 'Prijs busje per leerling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_timing_activiteit'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_timing_activiteit'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wanneer vindt de activiteit plaats?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_timing_activiteit',
    'label' => 'Timing activiteit',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_tot_kostprijs_act'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_tot_kostprijs_act'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'computed_field_plain',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_tot_kostprijs_act',
    'label' => 'Totale kostprijs activiteit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_totale_kostprijs_ll'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_totale_kostprijs_ll'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Bedrag dat aan elke leerling moet worden gevraagd (kostprijs vervoer + kostprijs activiteit)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'computed_field_plain',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_totale_kostprijs_ll',
    'label' => 'Totale kostprijs per leerling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_vervoer'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_vervoer'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_vervoer',
    'label' => 'Vervoer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 52,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aantal deelnemende lln');
  t('Aantal leerlingen dat deelneemt aan de activiteit');
  t('Aantal leerlingen die met het schoolbusje meegaan, exclusief de leerkracht.');
  t('Aantal leerlingen met schoolbusje');
  t('Aard');
  t('Activiteit');
  t('Afstand (enkel schoolbusje)');
  t('Afstand (heen en terug) tot de plaats van activiteit
Enkel in te vullen indien gebruik gemaakt wordt van een <b>schoolbusje</b>');
  t('Bedrag dat aan elke leerling moet gevraagd worden ter dekking van de kosten van het schoolbusje.');
  t('Bedrag dat aan elke leerling moet worden gevraagd (kostprijs vervoer + kostprijs activiteit)');
  t('Betreft het hier een standaardactiviteit of gaat het om werkplekleren of duaal leren?');
  t('Busje betaald');
  t('Comment');
  t('Goedkeuring');
  t('Hoeveel kost de activiteit (excl. vervoer) voor alle leerlingen samen?');
  t('Kostprijs activiteit');
  t('Kostprijs schoolbusje');
  t('Kostprijs vervoer');
  t('Plaats activiteit');
  t('Plaats van de pedagogische activiteit');
  t('Prijs busje per leerling');
  t('Timing activiteit');
  t('Totale kostprijs activiteit');
  t('Totale kostprijs per leerling');
  t('Vervoer');
  t('Wanneer vindt de activiteit plaats?');
  t('Wordt automatisch berekend door het aantal leerlingen te vermenigvuldigen met het aantal kilometer en de kostprijs van 0,15 EUR/km. Er geldt een maximum van de prijs van een GO-pass H/T.');

  return $field_instances;
}
