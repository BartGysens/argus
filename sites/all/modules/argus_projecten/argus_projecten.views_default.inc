<?php
/**
 * @file
 * argus_projecten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_projecten_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'projecten';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Projecten';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Projecten';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create project content';
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
					'project' => 'project' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '100';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['style_plugin'] = 'views_aggregator';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'title' => 'title',
			'field_project_contact' => 'field_project_contact',
			'field_leerlingen' => 'field_leerlingen',
			'field_looptijd' => 'field_looptijd',
			'field_personeelsleden' => 'field_personeelsleden',
			'field_leerkracht' => 'field_leerkracht',
			'field_klassen' => 'field_klassen',
			'field_looptijd_1' => 'field_looptijd_1' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => '1',
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first',
							'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_project_contact' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_leerlingen' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_looptijd' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_personeelsleden' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_leerkracht' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_klassen' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_looptijd_1' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			) 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_per_page'] = '1';
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_row_position'] = array (
			1 => 0,
			2 => '2' 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['precision'] = '2';
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/project">Een nieuw project toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/project">Een nieuw project toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_leerkracht_target_id'] ['id'] = 'field_leerkracht_target_id';
	$handler->display->display_options ['relationships'] ['field_leerkracht_target_id'] ['table'] = 'field_data_field_leerkracht';
	$handler->display->display_options ['relationships'] ['field_leerkracht_target_id'] ['field'] = 'field_leerkracht_target_id';
	$handler->display->display_options ['relationships'] ['field_leerkracht_target_id'] ['label'] = 'Verantwoordelijke leerkracht';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_personeelsleden_target_id'] ['id'] = 'field_personeelsleden_target_id';
	$handler->display->display_options ['relationships'] ['field_personeelsleden_target_id'] ['table'] = 'field_data_field_personeelsleden';
	$handler->display->display_options ['relationships'] ['field_personeelsleden_target_id'] ['field'] = 'field_personeelsleden_target_id';
	$handler->display->display_options ['relationships'] ['field_personeelsleden_target_id'] ['label'] = 'Personeelsleden';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_leerlingen_target_id'] ['id'] = 'field_leerlingen_target_id';
	$handler->display->display_options ['relationships'] ['field_leerlingen_target_id'] ['table'] = 'field_data_field_leerlingen';
	$handler->display->display_options ['relationships'] ['field_leerlingen_target_id'] ['field'] = 'field_leerlingen_target_id';
	$handler->display->display_options ['relationships'] ['field_leerlingen_target_id'] ['label'] = 'Leerlingen';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_klassen_target_id'] ['id'] = 'field_klassen_target_id';
	$handler->display->display_options ['relationships'] ['field_klassen_target_id'] ['table'] = 'field_data_field_klassen';
	$handler->display->display_options ['relationships'] ['field_klassen_target_id'] ['field'] = 'field_klassen_target_id';
	$handler->display->display_options ['relationships'] ['field_klassen_target_id'] ['label'] = 'Klassen';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Contact */
	$handler->display->display_options ['fields'] ['field_project_contact'] ['id'] = 'field_project_contact';
	$handler->display->display_options ['fields'] ['field_project_contact'] ['table'] = 'field_data_field_project_contact';
	$handler->display->display_options ['fields'] ['field_project_contact'] ['field'] = 'field_project_contact';
	$handler->display->display_options ['fields'] ['field_project_contact'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Leerlingen */
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['id'] = 'field_leerlingen';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['table'] = 'field_data_field_leerlingen';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['field'] = 'field_leerlingen';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Leden */
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['id'] = 'field_personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['table'] = 'field_data_field_personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['field'] = 'field_personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['label'] = 'Personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Verantwoordelijke leerkracht */
	$handler->display->display_options ['fields'] ['field_leerkracht'] ['id'] = 'field_leerkracht';
	$handler->display->display_options ['fields'] ['field_leerkracht'] ['table'] = 'field_data_field_leerkracht';
	$handler->display->display_options ['fields'] ['field_leerkracht'] ['field'] = 'field_leerkracht';
	$handler->display->display_options ['fields'] ['field_leerkracht'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Veld: Klassen */
	$handler->display->display_options ['fields'] ['field_klassen'] ['id'] = 'field_klassen';
	$handler->display->display_options ['fields'] ['field_klassen'] ['table'] = 'field_data_field_klassen';
	$handler->display->display_options ['fields'] ['field_klassen'] ['field'] = 'field_klassen';
	$handler->display->display_options ['fields'] ['field_klassen'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_klassen'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Looptijd */
	$handler->display->display_options ['fields'] ['field_looptijd_1'] ['id'] = 'field_looptijd_1';
	$handler->display->display_options ['fields'] ['field_looptijd_1'] ['table'] = 'field_data_field_looptijd';
	$handler->display->display_options ['fields'] ['field_looptijd_1'] ['field'] = 'field_looptijd';
	$handler->display->display_options ['fields'] ['field_looptijd_1'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
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
			'project' => 'project' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Titel';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Contact (field_project_contact) */
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['id'] = 'field_project_contact_value';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['table'] = 'field_data_field_project_contact';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['field'] = 'field_project_contact_value';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['operator_id'] = 'field_project_contact_value_op';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['label'] = 'Contact';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['operator'] = 'field_project_contact_value_op';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['identifier'] = 'field_project_contact_value';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['autocomplete_field'] = 'field_project_contact';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_project_contact_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'field_leerkracht_target_id';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Verantwoordelijke leerkracht';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname_1'] ['id'] = 'realname_1';
	$handler->display->display_options ['filters'] ['realname_1'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname_1'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname_1'] ['relationship'] = 'field_personeelsleden_target_id';
	$handler->display->display_options ['filters'] ['realname_1'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['operator_id'] = 'realname_1_op';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['label'] = 'Personeelslid';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['operator'] = 'realname_1_op';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['identifier'] = 'realname_1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname_2'] ['id'] = 'realname_2';
	$handler->display->display_options ['filters'] ['realname_2'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname_2'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname_2'] ['relationship'] = 'field_leerlingen_target_id';
	$handler->display->display_options ['filters'] ['realname_2'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname_2'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname_2'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['operator_id'] = 'realname_2_op';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['label'] = 'Leerling';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['operator'] = 'realname_2_op';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['identifier'] = 'realname_2';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname_2'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['relationship'] = 'field_klassen_target_id';
	$handler->display->display_options ['filters'] ['title_1'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator_id'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['label'] = 'Klas';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['identifier'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_dependent'] = 0;
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'projecten_overview' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'projecten';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Projecten';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['projecten'] = array (
			t ( 'Master' ),
			t ( 'Projecten' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Items per pagina' ),
			t ( '- Alle -' ),
			t ( 'Startpunt' ),
			t ( '« eerste' ),
			t ( '‹ vorige' ),
			t ( 'volgende ›' ),
			t ( 'laatste »' ),
			t ( '<a href="/node/add/project">Een nieuw project toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Verantwoordelijke leerkracht' ),
			t ( 'Personeelsleden' ),
			t ( 'Leerlingen' ),
			t ( 'Klassen' ),
			t ( 'Titel' ),
			t ( 'Contact' ),
			t ( 'Looptijd' ),
			t ( 'Personeelslid' ),
			t ( 'Leerling' ),
			t ( 'Klas' ),
			t ( 'Overzicht' ) 
	);
	$export ['projecten'] = $view;
	
	return $export;
}
