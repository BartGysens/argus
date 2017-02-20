<?php
/**
 * @file
 * argus_examens.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_examens_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'examens';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Examens';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Examens';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_uurrooster_les_id_untis' => 'field_uurrooster_les_id_untis',
    'field_klas_sms_code' => 'field_klas_sms_code',
    'field_vak_beschrijving' => 'field_vak_beschrijving',
    'field_examen_vragen' => 'field_examen_vragen',
    'field_examen_modeloplossingen' => 'field_examen_modeloplossingen',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_uurrooster_les_id_untis' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_klas_sms_code' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vak_beschrijving' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_examen_vragen' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_examen_modeloplossingen' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relatie: Inhoud: Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Veld: Inhoud: Code (Smartschool) */
  $handler->display->display_options['fields']['field_klas_sms_code']['id'] = 'field_klas_sms_code';
  $handler->display->display_options['fields']['field_klas_sms_code']['table'] = 'field_data_field_klas_sms_code';
  $handler->display->display_options['fields']['field_klas_sms_code']['field'] = 'field_klas_sms_code';
  $handler->display->display_options['fields']['field_klas_sms_code']['relationship'] = 'field_uurrooster_les_klassen_target_id';
  $handler->display->display_options['fields']['field_klas_sms_code']['label'] = 'Klas';
  /* Veld: Inhoud: Beschrijving */
  $handler->display->display_options['fields']['field_vak_beschrijving']['id'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['table'] = 'field_data_field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['field'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['relationship'] = 'field_uurrooster_les_vak_target_id';
  /* Veld: Inhoud: Examenvragen */
  $handler->display->display_options['fields']['field_examen_vragen']['id'] = 'field_examen_vragen';
  $handler->display->display_options['fields']['field_examen_vragen']['table'] = 'field_data_field_examen_vragen';
  $handler->display->display_options['fields']['field_examen_vragen']['field'] = 'field_examen_vragen';
  $handler->display->display_options['fields']['field_examen_vragen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_examen_vragen']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'file_default',
  );
  $handler->display->display_options['fields']['field_examen_vragen']['delta_offset'] = '0';
  /* Veld: Inhoud: Modeloplossingen */
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['id'] = 'field_examen_modeloplossingen';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['table'] = 'field_data_field_examen_modeloplossingen';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['field'] = 'field_examen_modeloplossingen';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['click_sort_column'] = 'fid';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'examen' => 'examen',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Beheer */
  $handler = $view->new_display('page', 'Beheer', 'evaluatie_examens_beheer');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    86 => '86',
    225 => '225',
    274 => '274',
    217 => '217',
    218 => '218',
    219 => '219',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_klas_sms_code_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_examen_datum_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_examen_vragen_fid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_examen_modeloplossingen_fid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
    'field_uurrooster_les_vak' => 'field_uurrooster_les_vak',
    'field_examen_datum' => 'field_examen_datum',
    'field_examen_vragen' => 'field_examen_vragen',
    'field_examen_modeloplossingen' => 'field_examen_modeloplossingen',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uurrooster_les_vak' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_examen_datum' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_examen_vragen' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_examen_modeloplossingen' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Voet: Algemeen: Samenvatting van het resultaat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Getoond @start - @end van @total';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relatie: Inhoud: Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['id'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['table'] = 'field_data_field_uurrooster_les_vak';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['field'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['label'] = 'Inhoud entity referenced from field_uurrooster_les_vak';
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_uurrooster_les_klassen_target_id']['id'] = 'field_uurrooster_les_klassen_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_klassen_target_id']['table'] = 'field_data_field_uurrooster_les_klassen';
  $handler->display->display_options['relationships']['field_uurrooster_les_klassen_target_id']['field'] = 'field_uurrooster_les_klassen_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_klassen_target_id']['label'] = 'Inhoud entity referenced from field_uurrooster_les_klassen';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Gebruiker: Naam */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Leerkracht';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_uurrooster_les_klassen_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Klas(sen)';
  /* Veld: Inhoud: Vak */
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['id'] = 'field_uurrooster_les_vak';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['table'] = 'field_data_field_uurrooster_les_vak';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['field'] = 'field_uurrooster_les_vak';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Inhoud: Datum */
  $handler->display->display_options['fields']['field_examen_datum']['id'] = 'field_examen_datum';
  $handler->display->display_options['fields']['field_examen_datum']['table'] = 'field_data_field_examen_datum';
  $handler->display->display_options['fields']['field_examen_datum']['field'] = 'field_examen_datum';
  $handler->display->display_options['fields']['field_examen_datum']['settings'] = array(
    'format_type' => 'datum_lang_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Uitgestelde proef */
  $handler->display->display_options['fields']['field_examen_herexamen']['id'] = 'field_examen_herexamen';
  $handler->display->display_options['fields']['field_examen_herexamen']['table'] = 'field_data_field_examen_herexamen';
  $handler->display->display_options['fields']['field_examen_herexamen']['field'] = 'field_examen_herexamen';
  $handler->display->display_options['fields']['field_examen_herexamen']['label'] = 'Type';
  /* Veld: Inhoud: Examenvragen */
  $handler->display->display_options['fields']['field_examen_vragen']['id'] = 'field_examen_vragen';
  $handler->display->display_options['fields']['field_examen_vragen']['table'] = 'field_data_field_examen_vragen';
  $handler->display->display_options['fields']['field_examen_vragen']['field'] = 'field_examen_vragen';
  $handler->display->display_options['fields']['field_examen_vragen']['empty'] = 'Nog niet ingediend.';
  $handler->display->display_options['fields']['field_examen_vragen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_examen_vragen']['delta_offset'] = '0';
  /* Veld: Inhoud: Modeloplossingen */
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['id'] = 'field_examen_modeloplossingen';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['table'] = 'field_data_field_examen_modeloplossingen';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['field'] = 'field_examen_modeloplossingen';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['empty'] = 'Nog niet ingediend.';
  $handler->display->display_options['fields']['field_examen_modeloplossingen']['click_sort_column'] = 'fid';
  /* Veld: Inhoud: Wijzigingsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteercriterium: Gebruiker: Naam */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Leerkracht';
  /* Sorteercriterium: Inhoud: Code (Smartschool) (field_klas_sms_code) */
  $handler->display->display_options['sorts']['field_klas_sms_code_value']['id'] = 'field_klas_sms_code_value';
  $handler->display->display_options['sorts']['field_klas_sms_code_value']['table'] = 'field_data_field_klas_sms_code';
  $handler->display->display_options['sorts']['field_klas_sms_code_value']['field'] = 'field_klas_sms_code_value';
  $handler->display->display_options['sorts']['field_klas_sms_code_value']['relationship'] = 'field_uurrooster_les_klassen_target_id';
  /* Sorteercriterium: Inhoud: Beschrijving (field_vak_beschrijving) */
  $handler->display->display_options['sorts']['field_vak_beschrijving_value']['id'] = 'field_vak_beschrijving_value';
  $handler->display->display_options['sorts']['field_vak_beschrijving_value']['table'] = 'field_data_field_vak_beschrijving';
  $handler->display->display_options['sorts']['field_vak_beschrijving_value']['field'] = 'field_vak_beschrijving_value';
  $handler->display->display_options['sorts']['field_vak_beschrijving_value']['relationship'] = 'field_uurrooster_les_vak_target_id';
  /* Sorteercriterium: Inhoud: Datum (field_examen_datum) */
  $handler->display->display_options['sorts']['field_examen_datum_value']['id'] = 'field_examen_datum_value';
  $handler->display->display_options['sorts']['field_examen_datum_value']['table'] = 'field_data_field_examen_datum';
  $handler->display->display_options['sorts']['field_examen_datum_value']['field'] = 'field_examen_datum_value';
  $handler->display->display_options['sorts']['field_examen_datum_value']['expose']['label'] = 'Datum';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'examen' => 'examen',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Gebruiker: Naam (onbewerkt) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Leerkracht';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    245 => 0,
    246 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    248 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    269 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    249 => 0,
    250 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    270 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    251 => 0,
    252 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    292 => 0,
    229 => 0,
    8 => 0,
    280 => 0,
    279 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    264 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    265 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    271 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    266 => 0,
    267 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    268 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    272 => 0,
    273 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    286 => 0,
    278 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    276 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
    288 => 0,
    289 => 0,
    82 => 0,
    283 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    274 => 0,
    303 => 0,
    216 => 0,
    284 => 0,
    217 => 0,
    290 => 0,
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    287 => 0,
    242 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    277 => 0,
    239 => 0,
    234 => 0,
    235 => 0,
    236 => 0,
    237 => 0,
    238 => 0,
    291 => 0,
    305 => 0,
    306 => 0,
    307 => 0,
    308 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filtercriterium: Inhoud: Code (Smartschool) (field_klas_sms_code) */
  $handler->display->display_options['filters']['field_klas_sms_code_value']['id'] = 'field_klas_sms_code_value';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['table'] = 'field_data_field_klas_sms_code';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['field'] = 'field_klas_sms_code_value';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['relationship'] = 'field_uurrooster_les_klassen_target_id';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['group'] = 1;
  $handler->display->display_options['filters']['field_klas_sms_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['operator_id'] = 'field_klas_sms_code_value_op';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['label'] = 'Klas';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['operator'] = 'field_klas_sms_code_value_op';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['identifier'] = 'field_klas_sms_code_value';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    245 => 0,
    246 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    248 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    269 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    249 => 0,
    250 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    270 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    251 => 0,
    252 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    292 => 0,
    229 => 0,
    8 => 0,
    280 => 0,
    279 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    264 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    265 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    271 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    266 => 0,
    267 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    268 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    272 => 0,
    273 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    286 => 0,
    278 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    276 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
    288 => 0,
    289 => 0,
    82 => 0,
    283 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    274 => 0,
    303 => 0,
    216 => 0,
    284 => 0,
    217 => 0,
    290 => 0,
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    287 => 0,
    242 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    277 => 0,
    239 => 0,
    234 => 0,
    235 => 0,
    236 => 0,
    237 => 0,
    238 => 0,
    291 => 0,
    305 => 0,
    306 => 0,
    307 => 0,
    308 => 0,
  );
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['autocomplete_field'] = 'field_klas_sms_code';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['field_klas_sms_code_value']['expose']['autocomplete_dependent'] = 0;
  /* Filtercriterium: Inhoud: Datum (field_examen_datum) */
  $handler->display->display_options['filters']['field_examen_datum_value']['id'] = 'field_examen_datum_value';
  $handler->display->display_options['filters']['field_examen_datum_value']['table'] = 'field_data_field_examen_datum';
  $handler->display->display_options['filters']['field_examen_datum_value']['field'] = 'field_examen_datum_value';
  $handler->display->display_options['filters']['field_examen_datum_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_examen_datum_value']['group'] = 1;
  $handler->display->display_options['filters']['field_examen_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_examen_datum_value']['expose']['operator_id'] = 'field_examen_datum_value_op';
  $handler->display->display_options['filters']['field_examen_datum_value']['expose']['label'] = 'Datum examen';
  $handler->display->display_options['filters']['field_examen_datum_value']['expose']['operator'] = 'field_examen_datum_value_op';
  $handler->display->display_options['filters']['field_examen_datum_value']['expose']['identifier'] = 'field_examen_datum_value';
  $handler->display->display_options['filters']['field_examen_datum_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    245 => 0,
    246 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    248 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    269 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    249 => 0,
    250 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    270 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    251 => 0,
    252 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    292 => 0,
    229 => 0,
    8 => 0,
    280 => 0,
    279 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    264 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    265 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    271 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    266 => 0,
    267 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    268 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    272 => 0,
    273 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    286 => 0,
    278 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    276 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
    288 => 0,
    289 => 0,
    82 => 0,
    283 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    274 => 0,
    303 => 0,
    216 => 0,
    284 => 0,
    217 => 0,
    290 => 0,
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    287 => 0,
    242 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    277 => 0,
    239 => 0,
    234 => 0,
    235 => 0,
    236 => 0,
    237 => 0,
    238 => 0,
    291 => 0,
    305 => 0,
    306 => 0,
    307 => 0,
    308 => 0,
  );
  $handler->display->display_options['filters']['field_examen_datum_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_examen_datum_value']['year_range'] = '-10:+1';
  /* Filtercriterium: Inhoud: Uitgestelde proef (field_examen_herexamen) */
  $handler->display->display_options['filters']['field_examen_herexamen_value']['id'] = 'field_examen_herexamen_value';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['table'] = 'field_data_field_examen_herexamen';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['field'] = 'field_examen_herexamen_value';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_examen_herexamen_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_examen_herexamen_value']['expose']['operator_id'] = 'field_examen_herexamen_value_op';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['expose']['label'] = 'Uitgestelde proef';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['expose']['operator'] = 'field_examen_herexamen_value_op';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['expose']['identifier'] = 'field_examen_herexamen_value';
  $handler->display->display_options['filters']['field_examen_herexamen_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    245 => 0,
    246 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    248 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    269 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    249 => 0,
    250 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    270 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    251 => 0,
    252 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    292 => 0,
    229 => 0,
    8 => 0,
    280 => 0,
    279 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    264 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    265 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    271 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    266 => 0,
    267 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    268 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    272 => 0,
    273 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    286 => 0,
    278 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    276 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
    288 => 0,
    289 => 0,
    82 => 0,
    283 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    274 => 0,
    303 => 0,
    216 => 0,
    284 => 0,
    217 => 0,
    290 => 0,
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    287 => 0,
    242 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    277 => 0,
    239 => 0,
    234 => 0,
    235 => 0,
    236 => 0,
    237 => 0,
    238 => 0,
    291 => 0,
    305 => 0,
    306 => 0,
    307 => 0,
    308 => 0,
    309 => 0,
  );
  $handler->display->display_options['filters']['field_examen_herexamen_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'evaluatie/examens/beheer';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Examens - beheer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Examens */
  $handler = $view->new_display('page', 'Examens', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ingediende examens';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    86 => '86',
    225 => '225',
    4 => '4',
    274 => '274',
    217 => '217',
    218 => '218',
    219 => '219',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_klas_sms_code_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_examen_datum_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_examen_vragen_fid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_examen_modeloplossingen_fid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_uurrooster_les_klassen' => 'field_uurrooster_les_klassen',
    'field_uurrooster_les_vak' => 'field_uurrooster_les_vak',
    'field_examen_datum' => 'field_examen_datum',
    'changed' => 'changed',
    'field_vak_beschrijving' => 'field_vak_beschrijving',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_uurrooster_les_klassen' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uurrooster_les_vak' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_examen_datum' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vak_beschrijving' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kop: Algemeen: Tekstveld */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/examen">Een examen toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Voet: Algemeen: Samenvatting van het resultaat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Getoond @start - @end van @total';
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/examen">Een examen toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relatie: Inhoud: Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['id'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['table'] = 'field_data_field_uurrooster_les_vak';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['field'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['label'] = 'Inhoud entity referenced from field_uurrooster_les_vak';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Klas(sen) */
  $handler->display->display_options['fields']['field_uurrooster_les_klassen']['id'] = 'field_uurrooster_les_klassen';
  $handler->display->display_options['fields']['field_uurrooster_les_klassen']['table'] = 'field_data_field_uurrooster_les_klassen';
  $handler->display->display_options['fields']['field_uurrooster_les_klassen']['field'] = 'field_uurrooster_les_klassen';
  $handler->display->display_options['fields']['field_uurrooster_les_klassen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uurrooster_les_klassen']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_uurrooster_les_klassen']['delta_offset'] = '0';
  /* Veld: Inhoud: Vak */
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['id'] = 'field_uurrooster_les_vak';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['table'] = 'field_data_field_uurrooster_les_vak';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['field'] = 'field_uurrooster_les_vak';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['label'] = 'Vakafkorting';
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uurrooster_les_vak']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Inhoud: Beschrijving */
  $handler->display->display_options['fields']['field_vak_beschrijving']['id'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['table'] = 'field_data_field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['field'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['relationship'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['fields']['field_vak_beschrijving']['label'] = 'Vak';
  $handler->display->display_options['fields']['field_vak_beschrijving']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vak_beschrijving']['alter']['text'] = '[field_uurrooster_les_vak] - [field_vak_beschrijving]';
  /* Veld: Inhoud: Datum */
  $handler->display->display_options['fields']['field_examen_datum']['id'] = 'field_examen_datum';
  $handler->display->display_options['fields']['field_examen_datum']['table'] = 'field_data_field_examen_datum';
  $handler->display->display_options['fields']['field_examen_datum']['field'] = 'field_examen_datum';
  $handler->display->display_options['fields']['field_examen_datum']['label'] = 'Datum examen';
  $handler->display->display_options['fields']['field_examen_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_examen_datum']['settings'] = array(
    'format_type' => 'dag_en_datum_lang_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Wijzigingsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['group_type'] = 'max';
  $handler->display->display_options['fields']['changed']['label'] = 'Tijdstip upload';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'examen' => 'examen',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Gebruiker: Huidige */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'evaluatie/examens';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Examens';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Selectielijst: klassen */
  $handler = $view->new_display('entityreference', 'Selectielijst: klassen', 'entityreference_examenklassen_persoonlijk');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_klas_sms_code' => 'field_klas_sms_code',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relatie: Referentie naar een entiteit: Refererende entiteit */
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_klassen_node']['id'] = 'reverse_field_uurrooster_les_klassen_node';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_klassen_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_klassen_node']['field'] = 'reverse_field_uurrooster_les_klassen_node';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_klassen_node']['label'] = 'Inhoud referencing Inhoud from field_uurrooster_les_klassen';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_klassen_node']['required'] = TRUE;
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['id'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['table'] = 'field_data_field_uurrooster_les_vak';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['field'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['relationship'] = 'reverse_field_uurrooster_les_klassen_node';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['label'] = 'Inhoud entity referenced from field_uurrooster_les_vak';
  $handler->display->display_options['relationships']['field_uurrooster_les_vak_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Code (Smartschool) */
  $handler->display->display_options['fields']['field_klas_sms_code']['id'] = 'field_klas_sms_code';
  $handler->display->display_options['fields']['field_klas_sms_code']['table'] = 'field_data_field_klas_sms_code';
  $handler->display->display_options['fields']['field_klas_sms_code']['field'] = 'field_klas_sms_code';
  $handler->display->display_options['fields']['field_klas_sms_code']['label'] = '';
  $handler->display->display_options['fields']['field_klas_sms_code']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Afkorting */
  $handler->display->display_options['fields']['field_vak_afkorting']['id'] = 'field_vak_afkorting';
  $handler->display->display_options['fields']['field_vak_afkorting']['table'] = 'field_data_field_vak_afkorting';
  $handler->display->display_options['fields']['field_vak_afkorting']['field'] = 'field_vak_afkorting';
  $handler->display->display_options['fields']['field_vak_afkorting']['label'] = '';
  $handler->display->display_options['fields']['field_vak_afkorting']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vak_afkorting']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextueel filter: Inhoud: Leerkracht (field_uurrooster_les_leerkracht) */
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['id'] = 'field_uurrooster_les_leerkracht_target_id';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['table'] = 'field_data_field_uurrooster_les_leerkracht';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['field'] = 'field_uurrooster_les_leerkracht_target_id';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['relationship'] = 'reverse_field_uurrooster_les_klassen_node';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'klas' => 'klas',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Inhoud: Evaluatie (field_vak_evaluatie) */
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['id'] = 'field_vak_evaluatie_value';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['table'] = 'field_data_field_vak_evaluatie';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['field'] = 'field_vak_evaluatie_value';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['relationship'] = 'field_uurrooster_les_vak_target_id';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['value'] = array(
    'E2' => 'E2',
  );
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['qtip_instance'] = 'standaard';

  /* Display: Selectielijst: vakken */
  $handler = $view->new_display('entityreference', 'Selectielijst: vakken', 'entityreference_examenvakken_persoonlijk');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'nid' => 'nid',
    'field_vak_afkorting' => 0,
    'field_vak_beschrijving' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relatie: Referentie naar een entiteit: Refererende entiteit */
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_vak_node']['id'] = 'reverse_field_uurrooster_les_vak_node';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_vak_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_vak_node']['field'] = 'reverse_field_uurrooster_les_vak_node';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_vak_node']['label'] = 'Inhoud referencing Inhoud from field_uurrooster_les_vak';
  $handler->display->display_options['relationships']['reverse_field_uurrooster_les_vak_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Afkorting */
  $handler->display->display_options['fields']['field_vak_afkorting']['id'] = 'field_vak_afkorting';
  $handler->display->display_options['fields']['field_vak_afkorting']['table'] = 'field_data_field_vak_afkorting';
  $handler->display->display_options['fields']['field_vak_afkorting']['field'] = 'field_vak_afkorting';
  $handler->display->display_options['fields']['field_vak_afkorting']['label'] = '';
  $handler->display->display_options['fields']['field_vak_afkorting']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Beschrijving */
  $handler->display->display_options['fields']['field_vak_beschrijving']['id'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['table'] = 'field_data_field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['field'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['label'] = '';
  $handler->display->display_options['fields']['field_vak_beschrijving']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteercriterium: Inhoud: Afkorting (field_vak_afkorting) */
  $handler->display->display_options['sorts']['field_vak_afkorting_value']['id'] = 'field_vak_afkorting_value';
  $handler->display->display_options['sorts']['field_vak_afkorting_value']['table'] = 'field_data_field_vak_afkorting';
  $handler->display->display_options['sorts']['field_vak_afkorting_value']['field'] = 'field_vak_afkorting_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextueel filter: Inhoud: Leerkracht (field_uurrooster_les_leerkracht) */
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['id'] = 'field_uurrooster_les_leerkracht_target_id';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['table'] = 'field_data_field_uurrooster_les_leerkracht';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['field'] = 'field_uurrooster_les_leerkracht_target_id';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['relationship'] = 'reverse_field_uurrooster_les_vak_node';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_uurrooster_les_leerkracht_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vak' => 'vak',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Inhoud: Evaluatie (field_vak_evaluatie) */
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['id'] = 'field_vak_evaluatie_value';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['table'] = 'field_data_field_vak_evaluatie';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['field'] = 'field_vak_evaluatie_value';
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['value'] = array(
    'E2' => 'E2',
  );
  $handler->display->display_options['filters']['field_vak_evaluatie_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $translatables['examens'] = array(
    t('Master'),
    t('Examens'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('auteur'),
    t('Klas'),
    t('Beschrijving'),
    t('Examenvragen'),
    t('Modeloplossingen'),
    t('Beheer'),
    t('Uitgebreide opties'),
    t('Sort options'),
    t('Getoond @start - @end van @total'),
    t('Inhoud entity referenced from field_uurrooster_les_vak'),
    t('Inhoud entity referenced from field_uurrooster_les_klassen'),
    t('Leerkracht'),
    t('Klas(sen)'),
    t('Vak'),
    t('Datum'),
    t('Type'),
    t('Nog niet ingediend.'),
    t('Wijzigingsdatum'),
    t('Datum examen'),
    t('Uitgestelde proef'),
    t('Ingediende examens'),
    t('<a href="/node/add/examen">Een examen toevoegen</a>'),
    t('Vakafkorting'),
    t('[field_uurrooster_les_vak] - [field_vak_beschrijving]'),
    t('Tijdstip upload'),
    t('Selectielijst: klassen'),
    t('Inhoud referencing Inhoud from field_uurrooster_les_klassen'),
    t('Alle'),
    t('Selectielijst: vakken'),
    t('Inhoud referencing Inhoud from field_uurrooster_les_vak'),
  );
  $export['examens'] = $view;

  return $export;
}
