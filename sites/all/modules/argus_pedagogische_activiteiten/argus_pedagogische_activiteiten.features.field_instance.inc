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
      'weight' => 11,
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
      'weight' => 7,
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
      'weight' => 6,
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
  // 'node-event_pedagogische_activiteit-field_ev_begeleiders'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_begeleiders'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Stel zelf begeleiders voor (aantal en namen). Dit kan worden aangepast door de directie bij goedkeuring.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_ev_begeleiders',
    'label' => 'Begeleiders',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_bijlage'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_bijlage'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Upload je verwerkingsopdracht, uitnodiging, flyer en/of andere bestanden die betrekking hebben op de activiteit.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
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
    'field_name' => 'field_ev_bijlage',
    'label' => 'Bijlage',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'event/pedagogische_activiteit',
      'file_extensions' => 'txt doc docx xls xlsx pdf ppt pptx jpg jpeg png',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 16,
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
  // 'node-event_pedagogische_activiteit-field_ev_datum'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_datum'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Geef hier het moment van vertrek en eventueel van terugkomst aan.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_datum',
    'label' => 'Tijdstip',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_deelnemende_klassen'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_deelnemende_klassen'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Selecteer alle klassen die zullen deelnemen aan de pedagogische activiteit.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_deelnemende_klassen',
    'label' => 'Deelnemende klassen',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_doelstellingen'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_doelstellingen'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vakgebonden en/of vakoverschrijdende doelstellingen die door deze activiteit nagestreefd worden (leerplannummer, nummer(s) leerplandoel(en) en omschrijving leerplandoel(en)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_ev_doelstellingen',
    'label' => 'Doelstellingen',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
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
      'weight' => 20,
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
      'weight' => 17,
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
  // 'node-event_pedagogische_activiteit-field_ev_locatie'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_locatie'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wees zo specifiek mogelijk: plaats, volledig adres',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_locatie',
    'label' => 'Plaats/adres',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
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
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
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
      'weight' => 4,
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
      'weight' => 5,
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
      'weight' => 18,
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
      'weight' => 19,
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

  // Exported field_instance:
  // 'node-event_pedagogische_activiteit-field_ev_verwerkingsopdrachten'.
  $field_instances['node-event_pedagogische_activiteit-field_ev_verwerkingsopdrachten'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Opdrachten die als voorbereiding of verwerking worden uitgevoerd door de leerlingen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_ev_verwerkingsopdrachten',
    'label' => 'Verwerkingsopdrachten',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
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
  t('Begeleiders');
  t('Betreft het hier een standaardactiviteit of gaat het om werkplekleren of duaal leren?');
  t('Bijlage');
  t('Busje betaald');
  t('Comment');
  t('Deelnemende klassen');
  t('Doelstellingen');
  t('Geef hier het moment van vertrek en eventueel van terugkomst aan.');
  t('Goedkeuring');
  t('Hoeveel kost de activiteit (excl. vervoer) voor alle leerlingen samen?');
  t('Kostprijs activiteit');
  t('Kostprijs schoolbusje');
  t('Kostprijs vervoer');
  t('Opdrachten die als voorbereiding of verwerking worden uitgevoerd door de leerlingen.');
  t('Plaats activiteit');
  t('Plaats van de pedagogische activiteit');
  t('Plaats/adres');
  t('Prijs busje per leerling');
  t('Selecteer alle klassen die zullen deelnemen aan de pedagogische activiteit.');
  t('Stel zelf begeleiders voor (aantal en namen). Dit kan worden aangepast door de directie bij goedkeuring.');
  t('Tijdstip');
  t('Timing activiteit');
  t('Totale kostprijs activiteit');
  t('Totale kostprijs per leerling');
  t('Upload je verwerkingsopdracht, uitnodiging, flyer en/of andere bestanden die betrekking hebben op de activiteit.');
  t('Vakgebonden en/of vakoverschrijdende doelstellingen die door deze activiteit nagestreefd worden (leerplannummer, nummer(s) leerplandoel(en) en omschrijving leerplandoel(en)');
  t('Vervoer');
  t('Verwerkingsopdrachten');
  t('Wanneer vindt de activiteit plaats?');
  t('Wees zo specifiek mogelijk: plaats, volledig adres');
  t('Wordt automatisch berekend door het aantal leerlingen te vermenigvuldigen met het aantal kilometer en de kostprijs van 0,15 EUR/km. Er geldt een maximum van de prijs van een GO-pass H/T.');

  return $field_instances;
}
