<?php
/**
 * @file
 * argus_technische_meldingen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_technische_meldingen_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'technische_meldingen';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Technische meldingen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Technische meldingen';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['cache'] ['type'] = 'views_content_cache';
	$handler->display->display_options ['cache'] ['results_min_lifespan'] = '-1';
	$handler->display->display_options ['cache'] ['results_max_lifespan'] = '518400';
	$handler->display->display_options ['cache'] ['output_min_lifespan'] = '-1';
	$handler->display->display_options ['cache'] ['output_max_lifespan'] = '518400';
	$handler->display->display_options ['cache'] ['keys'] = array (
			'comment' => array (
					'changed' => 0 
			),
			'node' => array (
					'technische_melding' => 'technische_melding' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
	$handler->display->display_options ['exposed_form'] ['type'] = 'better_exposed_filters';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['options'] ['bef'] = array (
			'general' => array (
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties' 
			),
			'body_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_tm_status_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'realname' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'name' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'title' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_tm_opgevolgd_door_target_id_entityreference_filter' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			) 
	);
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'counter' => 'counter',
			'title' => 'title',
			'title_1' => 'title_1',
			'field_tm_andere_locatie' => 'field_tm_andere_locatie',
			'nothing' => 'nothing',
			'body' => 'body',
			'field_tm_opgevolgd_door' => 'field_tm_opgevolgd_door',
			'created' => 'created',
			'created_1' => 'created_1',
			'field_tm_deadline' => 'field_tm_deadline',
			'field_tm_status' => 'field_tm_status',
			'realname' => 'realname' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'counter' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'title' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'title_1' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_andere_locatie' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'body' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_opgevolgd_door' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'created' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'created_1' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_deadline' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_status' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'realname' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/technische-melding">Een nieuwe technische melding toevoegen</a>';
	$handler->display->display_options ['header'] ['area'] ['format'] = 'filtered_html';
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Getoond @start - @end van @total';
	/* Voet: Algemeen: Tekstveld */
	$handler->display->display_options ['footer'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/technische-melding">Een nieuwe technische melding toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_tm_locatie_target_id'] ['id'] = 'field_tm_locatie_target_id';
	$handler->display->display_options ['relationships'] ['field_tm_locatie_target_id'] ['table'] = 'field_data_field_tm_locatie';
	$handler->display->display_options ['relationships'] ['field_tm_locatie_target_id'] ['field'] = 'field_tm_locatie_target_id';
	/* Veld: Algemeen: Resultatenteller weergeven */
	$handler->display->display_options ['fields'] ['counter'] ['id'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['counter'] ['field'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['label'] = '';
	$handler->display->display_options ['fields'] ['counter'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['counter'] ['counter_start'] = '1';
	$handler->display->display_options ['fields'] ['counter'] ['reverse'] = 0;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Onderwerp';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['fields'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title_1'] ['relationship'] = 'field_tm_locatie_target_id';
	$handler->display->display_options ['fields'] ['title_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['title_1'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Andere locatie */
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['id'] = 'field_tm_andere_locatie';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['table'] = 'field_data_field_tm_andere_locatie';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['field'] = 'field_tm_andere_locatie';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Locatie';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[title_1] [field_tm_andere_locatie]';
	/* Veld: Inhoud: Opmerkingen */
	$handler->display->display_options ['fields'] ['body'] ['id'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['table'] = 'field_data_body';
	$handler->display->display_options ['fields'] ['body'] ['field'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['label'] = 'Inhoud';
	/* Veld: Inhoud: Opgevolgd door */
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['id'] = 'field_tm_opgevolgd_door';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['table'] = 'field_data_field_tm_opgevolgd_door';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['field'] = 'field_tm_opgevolgd_door';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Datum van inzending */
	$handler->display->display_options ['fields'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['label'] = 'Datum';
	$handler->display->display_options ['fields'] ['created'] ['date_format'] = 'datum_kort_';
	$handler->display->display_options ['fields'] ['created'] ['second_date_format'] = 'long';
	/* Veld: Inhoud: Datum van inzending */
	$handler->display->display_options ['fields'] ['created_1'] ['id'] = 'created_1';
	$handler->display->display_options ['fields'] ['created_1'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['created_1'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created_1'] ['label'] = 'Tijd open';
	$handler->display->display_options ['fields'] ['created_1'] ['date_format'] = 'raw time ago';
	$handler->display->display_options ['fields'] ['created_1'] ['second_date_format'] = 'long';
	/* Veld: Inhoud: Deadline */
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['id'] = 'field_tm_deadline';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['table'] = 'field_data_field_tm_deadline';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['field'] = 'field_tm_deadline';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Status */
	$handler->display->display_options ['fields'] ['field_tm_status'] ['id'] = 'field_tm_status';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['table'] = 'field_data_field_tm_status';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['field'] = 'field_tm_status';
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Gemeld door';
	/* Sorteercriterium: Inhoud: Datum van inzending */
	$handler->display->display_options ['sorts'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['order'] = 'DESC';
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'technische_melding' => 'technische_melding' 
	);
	/* Filtercriterium: Inhoud: Opmerkingen (body) */
	$handler->display->display_options ['filters'] ['body_value'] ['id'] = 'body_value';
	$handler->display->display_options ['filters'] ['body_value'] ['table'] = 'field_data_body';
	$handler->display->display_options ['filters'] ['body_value'] ['field'] = 'body_value';
	$handler->display->display_options ['filters'] ['body_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['body_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['body_value'] ['expose'] ['operator_id'] = 'body_value_op';
	$handler->display->display_options ['filters'] ['body_value'] ['expose'] ['label'] = 'Onderwerp / melding';
	$handler->display->display_options ['filters'] ['body_value'] ['expose'] ['operator'] = 'body_value_op';
	$handler->display->display_options ['filters'] ['body_value'] ['expose'] ['identifier'] = 'body_value';
	$handler->display->display_options ['filters'] ['body_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Status (field_tm_status) */
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['id'] = 'field_tm_status_value';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['table'] = 'field_data_field_tm_status';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['field'] = 'field_tm_status_value';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['operator_id'] = 'field_tm_status_value_op';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['label'] = 'Status';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['operator'] = 'field_tm_status_value_op';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['identifier'] = 'field_tm_status_value';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'field_tm_opgevolgd_door_target_id';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Opgevolgd door';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Gebruiker: Naam (onbewerkt) */
	$handler->display->display_options ['filters'] ['name'] ['id'] = 'name';
	$handler->display->display_options ['filters'] ['name'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['name'] ['field'] = 'name';
	$handler->display->display_options ['filters'] ['name'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['name'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['name'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['operator_id'] = 'name_op';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['label'] = 'Gemeld door';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['operator'] = 'name_op';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['identifier'] = 'name';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['relationship'] = 'field_tm_locatie_target_id';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Locatie';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	
	/* Display: Technische meldingen */
	$handler = $view->new_display ( 'page', 'Technische meldingen', 'technische_meldingen_overview' );
	$handler->display->display_options ['display_description'] = 'Overzicht van de meldingen die handelen over ICT en infrastructuur.';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'better_exposed_filters';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['options'] ['bef'] = array (
			'general' => array (
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties' 
			),
			'field_tm_categorie_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '- Alle -',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_tm_subcategorie_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'bef_select_all_none' => '1',
							'bef_collapsible' => 0,
							'is_secondary' => '1',
							'any_label' => '- Alle -',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'title_1' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_tm_status_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_tm_opgevolgd_door_target_id_entityreference_filter' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'realname' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'counter' => 'counter',
			'title' => 'title',
			'field_tm_locatie' => 'field_tm_locatie',
			'field_tm_andere_locatie' => 'field_tm_andere_locatie',
			'nothing_1' => 'nothing_1',
			'body' => 'body',
			'field_tm_opgevolgd_door' => 'field_tm_opgevolgd_door',
			'created' => 'created',
			'created_1' => 'created_1',
			'field_tm_deadline' => 'field_tm_deadline',
			'nothing' => 'nothing',
			'field_tm_status' => 'field_tm_status',
			'realname' => 'realname' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'counter' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_locatie' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_andere_locatie' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing_1' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'body' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_opgevolgd_door' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'created' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'created_1' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_deadline' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tm_status' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'realname' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Algemeen: Resultatenteller weergeven */
	$handler->display->display_options ['fields'] ['counter'] ['id'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['counter'] ['field'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['label'] = '';
	$handler->display->display_options ['fields'] ['counter'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['counter'] ['counter_start'] = '1';
	$handler->display->display_options ['fields'] ['counter'] ['reverse'] = 0;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Onderwerp';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Locatie */
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['id'] = 'field_tm_locatie';
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['table'] = 'field_data_field_tm_locatie';
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['field'] = 'field_tm_locatie';
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['alter'] ['text'] = '[field_tm_locatie]<br>';
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_tm_locatie'] ['settings'] = array (
			'link' => '1' 
	);
	/* Veld: Inhoud: Andere locatie */
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['id'] = 'field_tm_andere_locatie';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['table'] = 'field_data_field_tm_andere_locatie';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['field'] = 'field_tm_andere_locatie';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['alter'] ['text'] = '[field_tm_locatie]
[field_tm_andere_locatie]';
	$handler->display->display_options ['fields'] ['field_tm_andere_locatie'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_1'] ['id'] = 'nothing_1';
	$handler->display->display_options ['fields'] ['nothing_1'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_1'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_1'] ['label'] = 'Locatie';
	$handler->display->display_options ['fields'] ['nothing_1'] ['alter'] ['text'] = '[field_tm_locatie][field_tm_andere_locatie]';
	/* Veld: Inhoud: Opmerkingen */
	$handler->display->display_options ['fields'] ['body'] ['id'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['table'] = 'field_data_body';
	$handler->display->display_options ['fields'] ['body'] ['field'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['label'] = 'Inhoud';
	/* Veld: Inhoud: Opgevolgd door */
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['id'] = 'field_tm_opgevolgd_door';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['table'] = 'field_data_field_tm_opgevolgd_door';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['field'] = 'field_tm_opgevolgd_door';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['type'] = 'editable';
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['settings'] = array (
			'click_to_edit' => '1',
			'click_to_edit_style' => 'button',
			'empty_text' => '',
			'fallback_format' => 'entityreference_label',
			'fallback_settings' => array (
					'link' => '1' 
			) 
	);
	$handler->display->display_options ['fields'] ['field_tm_opgevolgd_door'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Datum van inzending */
	$handler->display->display_options ['fields'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['label'] = '';
	$handler->display->display_options ['fields'] ['created'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['created'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['created'] ['date_format'] = 'datum_kort_';
	$handler->display->display_options ['fields'] ['created'] ['second_date_format'] = 'long';
	/* Veld: Inhoud: Datum van inzending */
	$handler->display->display_options ['fields'] ['created_1'] ['id'] = 'created_1';
	$handler->display->display_options ['fields'] ['created_1'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['created_1'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['created_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['created_1'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['created_1'] ['date_format'] = 'raw time ago';
	$handler->display->display_options ['fields'] ['created_1'] ['second_date_format'] = 'long';
	/* Veld: Inhoud: Deadline */
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['id'] = 'field_tm_deadline';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['table'] = 'field_data_field_tm_deadline';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['field'] = 'field_tm_deadline';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_tm_deadline'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Timing';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[created] ([created_1]
<div class="colorRed">[field_tm_deadline]</div>';
	/* Veld: Inhoud: Status */
	$handler->display->display_options ['fields'] ['field_tm_status'] ['id'] = 'field_tm_status';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['table'] = 'field_data_field_tm_status';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['field'] = 'field_tm_status';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['element_class'] = 'field-editable-inline';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['type'] = 'editable';
	$handler->display->display_options ['fields'] ['field_tm_status'] ['settings'] = array (
			'click_to_edit' => 0,
			'click_to_edit_style' => 'button',
			'empty_text' => '',
			'fallback_format' => 'list_default' 
	);
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Gemeld door';
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'technische_melding' => 'technische_melding' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Categorie (field_tm_categorie) */
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['id'] = 'field_tm_categorie_value';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['table'] = 'field_data_field_tm_categorie';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['field'] = 'field_tm_categorie_value';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['operator_id'] = 'field_tm_categorie_value_op';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['label'] = 'Categorie';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['operator'] = 'field_tm_categorie_value_op';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['identifier'] = 'field_tm_categorie_value';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['group_info'] ['label'] = 'Categorie';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['group_info'] ['identifier'] = 'field_tm_categorie_value';
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['group_info'] ['group_items'] = array (
			1 => array (
					'title' => '- Geen -',
					'operator' => 'not',
					'value' => array (
							'ICT' => 'ICT',
							'Niet-ICT' => 'Niet-ICT' 
					) 
			),
			2 => array (
					'title' => 'ICT',
					'operator' => 'or',
					'value' => array (
							'ICT' => 'ICT' 
					) 
			),
			3 => array (
					'title' => 'Niet-ICT',
					'operator' => 'or',
					'value' => array (
							'Niet-ICT' => 'Niet-ICT' 
					) 
			) 
	);
	$handler->display->display_options ['filters'] ['field_tm_categorie_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator_id'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['label'] = 'Onderwerp / melding';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['identifier'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Status (field_tm_status) */
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['id'] = 'field_tm_status_value';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['table'] = 'field_data_field_tm_status';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['field'] = 'field_tm_status_value';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['operator_id'] = 'field_tm_status_value_op';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['label'] = 'Status';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['operator'] = 'field_tm_status_value_op';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['identifier'] = 'field_tm_status_value';
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_tm_status_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Opgevolgd door (field_tm_opgevolgd_door) (reference filter) */
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['id'] = 'field_tm_opgevolgd_door_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['table'] = 'field_data_field_tm_opgevolgd_door';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['field'] = 'field_tm_opgevolgd_door_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['operator_id'] = 'field_tm_opgevolgd_door_target_id_entityreference_filter_op';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['label'] = 'Opgevolgd door';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['operator'] = 'field_tm_opgevolgd_door_target_id_entityreference_filter_op';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['identifier'] = 'field_tm_opgevolgd_door_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['reference_display'] = 'gebruikers:users';
	$handler->display->display_options ['filters'] ['field_tm_opgevolgd_door_target_id_entityreference_filter'] ['reference_arguments'] = '8+82';
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Gemeld door';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'technische-meldingen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Technische meldingen';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['technische_meldingen'] = array (
			t ( 'Master' ),
			t ( 'Technische meldingen' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Uitgebreide opties' ),
			t ( '<a href="/node/add/technische-melding">Een nieuwe technische melding toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'auteur' ),
			t ( 'Inhoud entity referenced from field_tm_locatie' ),
			t ( 'Onderwerp' ),
			t ( 'Locatie' ),
			t ( '[title_1] [field_tm_andere_locatie]' ),
			t ( 'Inhoud' ),
			t ( 'Opgevolgd door' ),
			t ( 'Datum' ),
			t ( 'Tijd open' ),
			t ( 'Deadline' ),
			t ( 'Status' ),
			t ( 'Gemeld door' ),
			t ( 'Onderwerp / melding' ),
			t ( 'Overzicht van de meldingen die handelen over ICT en infrastructuur.' ),
			t ( '- Alle -' ),
			t ( '[field_tm_locatie]<br>' ),
			t ( '[field_tm_locatie]
[field_tm_andere_locatie]' ),
			t ( '[field_tm_locatie][field_tm_andere_locatie]' ),
			t ( 'Timing' ),
			t ( '[created] ([created_1]
<div class="colorRed">[field_tm_deadline]</div>' ),
			t ( 'Categorie' ) 
	);
	$export ['technische_meldingen'] = $view;
	
	return $export;
}
