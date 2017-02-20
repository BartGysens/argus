<?php
/**
 * @file
 * argus_klassenraden.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_klassenraden_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'klassenraden';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Klassenraden';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Klassenraden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    216 => '216',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => '1',
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_voorzitter' => 'field_voorzitter',
    'field_secretaris' => 'field_secretaris',
    'field_interne_leerlingbegeleider' => 'field_interne_leerlingbegeleider',
    'field_andere_deelnemers' => 'field_andere_deelnemers',
    'field_lokaal' => 'field_lokaal',
    'field_klassen' => 'field_klassen',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relatie: Inhoud: Spoor (field_spoor) */
  $handler->display->display_options['relationships']['field_spoor_value']['id'] = 'field_spoor_value';
  $handler->display->display_options['relationships']['field_spoor_value']['table'] = 'field_data_field_spoor';
  $handler->display->display_options['relationships']['field_spoor_value']['field'] = 'field_spoor_value';
  $handler->display->display_options['relationships']['field_spoor_value']['delta'] = '-1';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['label'] = '';
  $handler->display->display_options['fields']['field_tijdstip']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['text'] = '[field_tijdstip-value]';
  $handler->display->display_options['fields']['field_tijdstip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Field collection item: Field collection item-ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* Veld: Veld: Voorzitter */
  $handler->display->display_options['fields']['field_voorzitter']['id'] = 'field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter']['table'] = 'field_data_field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter']['field'] = 'field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['field_voorzitter']['settings'] = array(
    'link' => '1',
  );
  /* Veld: Field collection item: Secretaris */
  $handler->display->display_options['fields']['field_secretaris']['id'] = 'field_secretaris';
  $handler->display->display_options['fields']['field_secretaris']['table'] = 'field_data_field_secretaris';
  $handler->display->display_options['fields']['field_secretaris']['field'] = 'field_secretaris';
  $handler->display->display_options['fields']['field_secretaris']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['field_secretaris']['settings'] = array(
    'link' => '1',
  );
  /* Veld: Field collection item: ILB */
  $handler->display->display_options['fields']['field_interne_leerlingbegeleider']['id'] = 'field_interne_leerlingbegeleider';
  $handler->display->display_options['fields']['field_interne_leerlingbegeleider']['table'] = 'field_data_field_interne_leerlingbegeleider';
  $handler->display->display_options['fields']['field_interne_leerlingbegeleider']['field'] = 'field_interne_leerlingbegeleider';
  $handler->display->display_options['fields']['field_interne_leerlingbegeleider']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['field_interne_leerlingbegeleider']['settings'] = array(
    'link' => '1',
  );
  /* Veld: Field collection item: Andere deelnemers */
  $handler->display->display_options['fields']['field_andere_deelnemers']['id'] = 'field_andere_deelnemers';
  $handler->display->display_options['fields']['field_andere_deelnemers']['table'] = 'field_data_field_andere_deelnemers';
  $handler->display->display_options['fields']['field_andere_deelnemers']['field'] = 'field_andere_deelnemers';
  $handler->display->display_options['fields']['field_andere_deelnemers']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['field_andere_deelnemers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_andere_deelnemers']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_andere_deelnemers']['delta_offset'] = '0';
  /* Veld: Veld: Lokaal */
  $handler->display->display_options['fields']['field_lokaal']['id'] = 'field_lokaal';
  $handler->display->display_options['fields']['field_lokaal']['table'] = 'field_data_field_lokaal';
  $handler->display->display_options['fields']['field_lokaal']['field'] = 'field_lokaal';
  $handler->display->display_options['fields']['field_lokaal']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['field_lokaal']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['field_lokaal']['settings'] = array(
    'link' => '1',
  );
  /* Veld: Veld: Klassen */
  $handler->display->display_options['fields']['field_klassen']['id'] = 'field_klassen';
  $handler->display->display_options['fields']['field_klassen']['table'] = 'field_data_field_klassen';
  $handler->display->display_options['fields']['field_klassen']['field'] = 'field_klassen';
  $handler->display->display_options['fields']['field_klassen']['relationship'] = 'field_spoor_value';
  $handler->display->display_options['fields']['field_klassen']['label'] = 'Klassen (in volgorde van behandeling)';
  $handler->display->display_options['fields']['field_klassen']['alter']['text'] = '<a href="/klassenraden-notities/*/[nid]/[item_id]/[field_klassen-target_id]" target="_blank">x</a>';
  $handler->display->display_options['fields']['field_klassen']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_klassen']['alter']['path'] = 'klassenraden-notities/0/[nid]/[item_id]/[field_klassen-target_id]';
  $handler->display->display_options['fields']['field_klassen']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_klassen']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_klassen']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_klassen']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_klassen']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_klassen']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_klassen']['delta_offset'] = '0';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'lvs_klassenraad' => 'lvs_klassenraad',
  );
  $handler->display->display_options['qtip_instance'] = 'standaard';

  /* Display: Overzicht */
  $handler = $view->new_display('page', 'Overzicht', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'klassenraden';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Klassenraden';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $translatables['klassenraden'] = array(
    t('Master'),
    t('Klassenraden'),
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
    t('field collection item from field_spoor'),
    t('[field_tijdstip-value]'),
    t('.'),
    t(','),
    t('Voorzitter'),
    t('Secretaris'),
    t('ILB'),
    t('Andere deelnemers'),
    t('Lokaal'),
    t('Klassen (in volgorde van behandeling)'),
    t('<a href="/klassenraden-notities/*/[nid]/[item_id]/[field_klassen-target_id]" target="_blank">x</a>'),
    t('Overzicht'),
  );
  $export['klassenraden'] = $view;

  return $export;
}
