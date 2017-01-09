<?php
/**
 * @file
 * argus_events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event_jaarkalender-field_ev_beschrijving'
  $field_instances['node-event_jaarkalender-field_ev_beschrijving'] = array(
    'bundle' => 'event_jaarkalender',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Reden van het event.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_ev_beschrijving',
    'label' => 'Beschrijving',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-event_jaarkalender-field_ev_datum'
  $field_instances['node-event_jaarkalender-field_ev_datum'] = array(
    'bundle' => 'event_jaarkalender',
    'deleted' => 0,
    'description' => 'Datum van het event.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
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
    'field_name' => 'field_ev_datum',
    'label' => 'Datum',
    'required' => 1,
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-event_jaarkalender-field_ev_locatie'
  $field_instances['node-event_jaarkalender-field_ev_locatie'] = array(
    'bundle' => 'event_jaarkalender',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
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
    'label' => 'Locatie',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_aanvrager'
  $field_instances['node-event_pedagogische_activiteit-field_ev_aanvrager'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Persoon die de aanvraag doet',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_ev_aanvrager',
    'label' => 'Aanvrager',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_begeleiders'
  $field_instances['node-event_pedagogische_activiteit-field_ev_begeleiders'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Selecteer de begeleiders van de activiteit.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_ev_begeleiders',
    'label' => 'Begeleiders',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_bijlage'
  $field_instances['node-event_pedagogische_activiteit-field_ev_bijlage'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Upload je verwerkingsopdracht, uitnodiging, flyer en/of andere bestanden die betrekking hebben op de activiteit.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
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
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_datum'
  $field_instances['node-event_pedagogische_activiteit-field_ev_datum'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Geef hier het moment van vertrek en eventueel van terugkomst aan.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
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
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_deelnemende_klassen'
  $field_instances['node-event_pedagogische_activiteit-field_ev_deelnemende_klassen'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'deleted' => 0,
    'description' => 'Selecteer alle klassen die zullen deelnemen aan de pedagogische activiteit.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_ev_deelnemende_klassen',
    'label' => 'Deelnemende klassen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_doelstellingen'
  $field_instances['node-event_pedagogische_activiteit-field_ev_doelstellingen'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vakgebonden en/of vakoverschrijdende doelstellingen die door deze activiteit nagestreefd worden.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_ev_doelstellingen',
    'label' => 'Doelstellingen',
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
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_locatie'
  $field_instances['node-event_pedagogische_activiteit-field_ev_locatie'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wees zo specifiek mogelijk: plaats, volledig adres',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_prijs'
  $field_instances['node-event_pedagogische_activiteit-field_ev_prijs'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => array(
      0 => array(
        'value' => '€ 0,00',
      ),
    ),
    'deleted' => 0,
    'description' => 'Kostprijs van de activiteit per leerling.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
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
    'field_name' => 'field_ev_prijs',
    'label' => 'Prijs',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-event_pedagogische_activiteit-field_ev_verwerkingsopdrachten'
  $field_instances['node-event_pedagogische_activiteit-field_ev_verwerkingsopdrachten'] = array(
    'bundle' => 'event_pedagogische_activiteit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Opdrachten die als voorbereiding of verwerking worden uitgevoerd door de leerlingen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
      'weight' => 50,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aanvrager');
  t('Begeleiders');
  t('Beschrijving');
  t('Bijlage');
  t('Datum');
  t('Datum van het event.');
  t('Deelnemende klassen');
  t('Doelstellingen');
  t('Geef hier het moment van vertrek en eventueel van terugkomst aan.');
  t('Kostprijs van de activiteit per leerling.');
  t('Locatie');
  t('Opdrachten die als voorbereiding of verwerking worden uitgevoerd door de leerlingen.');
  t('Persoon die de aanvraag doet');
  t('Plaats/adres');
  t('Prijs');
  t('Reden van het event.');
  t('Selecteer alle klassen die zullen deelnemen aan de pedagogische activiteit.');
  t('Selecteer de begeleiders van de activiteit.');
  t('Tijdstip');
  t('Upload je verwerkingsopdracht, uitnodiging, flyer en/of andere bestanden die betrekking hebben op de activiteit.');
  t('Vakgebonden en/of vakoverschrijdende doelstellingen die door deze activiteit nagestreefd worden.');
  t('Verwerkingsopdrachten');
  t('Wees zo specifiek mogelijk: plaats, volledig adres');

  return $field_instances;
}
