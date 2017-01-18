<?php
/**
 * @file
 * argus_feedbackgroepen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_feedbackgroepen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'feedbackgroepen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feedbackgroepen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feedbackgroepen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'feedbackgroep' => 'feedbackgroep',
      'aankoopdossier' => 0,
      'actie' => 0,
      'afdeling' => 0,
      'article' => 0,
      'attest' => 0,
      'banner_www' => 0,
      'contract' => 0,
      'page' => 0,
      'event_jaarkalender' => 0,
      'event_nascholing' => 0,
      'event_opruim_speelplaats' => 0,
      'event_pedagogische_activiteit' => 0,
      'event_preventiebeleid' => 0,
      'examen' => 0,
      'hrm_evaluatiegesprek' => 0,
      'hrm_functioneringsgesprek' => 0,
      'hrm_planningsgesprek' => 0,
      'ict_account' => 0,
      'ict_hardware' => 0,
      'ikz_afkortingen' => 0,
      'ikz_documenten' => 0,
      'ikz_formulier' => 0,
      'ikz_procedure' => 0,
      'inventaris' => 0,
      'klas' => 0,
      'lvs_deliberatie' => 0,
      'lvs_klassenraad' => 0,
      'lvs_klassenraad_notitie' => 0,
      'lvs_leerplichtbegeleiding' => 0,
      'lvs_melding' => 0,
      'lokaal' => 0,
      'msl_begeleidingsovereenkomst' => 0,
      'msl_oa_sticker' => 0,
      'msl_volgkaart' => 0,
      'msl_volgkaart_evaluatie' => 0,
      'maatregelen' => 0,
      'machine' => 0,
      'merk' => 0,
      'middaggaming_aanwezigheden' => 0,
      'middaggaming_betalingen' => 0,
      'ontlening' => 0,
      'organisatie' => 0,
      'oudercontact' => 0,
      'pagina_www' => 0,
      'personeel_afwezigheid' => 0,
      'printer' => 0,
      'printer_accessoire' => 0,
      'project' => 0,
      'projectgroep' => 0,
      'project_release' => 0,
      'schoolgeld_betalingen' => 0,
      'schoolgeld_kosten' => 0,
      'sleutel' => 0,
      'stage' => 0,
      'stageactiviteitenlijst' => 0,
      'stagebezoek' => 0,
      'stageperiode' => 0,
      'technische_melding' => 0,
      'uurrooster_les' => 0,
      'uurrooster_periode' => 0,
      'uurrooster_permanentie' => 0,
      'uurrooster_toezicht' => 0,
      'uurrooster_toezicht_locatie' => 0,
      'uurrooster_vervanging' => 0,
      'vak' => 0,
      'vakgroep' => 0,
      'verslag' => 0,
      'webform' => 0,
      'werk_voor_derden' => 0,
      'werkgroep' => 0,
    ),
    'node_only' => array(
      'node_changed' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Algemeen: Ongefilterde tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Feedbackgroepen worden ad-hoc aangesproken om advies te geven inzake wijzigingen of nieuwe input om op verder te werken. De groep zal aangestuurd worden door directie, TA of een coördinator.';
  /* Kop: Algemeen: Tekstveld */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/feedbackgroep">Een nieuwe feedbackgroep toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Voet: Algemeen: Samenvatting van het resultaat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Getoond @start - @end van @total';
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/feedbackgroep">Een nieuwe feedbackgroep toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Veld: Voorzitter */
  $handler->display->display_options['fields']['field_voorzitter_1']['id'] = 'field_voorzitter_1';
  $handler->display->display_options['fields']['field_voorzitter_1']['table'] = 'field_data_field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter_1']['field'] = 'field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_voorzitter_1']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Leden */
  $handler->display->display_options['fields']['field_personeelsleden']['id'] = 'field_personeelsleden';
  $handler->display->display_options['fields']['field_personeelsleden']['table'] = 'field_data_field_personeelsleden';
  $handler->display->display_options['fields']['field_personeelsleden']['field'] = 'field_personeelsleden';
  $handler->display->display_options['fields']['field_personeelsleden']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_personeelsleden']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_personeelsleden']['delta_offset'] = '0';
  /* Sorteercriterium: Inhoud: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'feedbackgroep' => 'feedbackgroep',
  );

  /* Display: Overzicht */
  $handler = $view->new_display('page', 'Overzicht', 'overzicht_feedbackgroepen');
  $handler->display->display_options['path'] = 'feedbackgroepen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Feedbackgroepen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['feedbackgroepen'] = array(
    t('Master'),
    t('Feedbackgroepen'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Feedbackgroepen worden ad-hoc aangesproken om advies te geven inzake wijzigingen of nieuwe input om op verder te werken. De groep zal aangestuurd worden door directie, TA of een coördinator.'),
    t('<a href="/node/add/feedbackgroep">Een nieuwe feedbackgroep toevoegen</a>'),
    t('Getoond @start - @end van @total'),
    t('Voorzitter'),
    t('Leden'),
    t('Overzicht'),
  );
  $export['feedbackgroepen'] = $view;

  return $export;
}
