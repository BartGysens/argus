<?php
/**
 * @file
 * argus_personeel_afwezigheden.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_personeel_afwezigheden_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'absenteisme';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Absenteïsme';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Absenteïsme';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array ();
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
					'personeel_afwezigheid' => 'personeel_afwezigheid' 
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
					'secondary_label' => 'Uitgebreide opties',
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'realname' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_pers_afwezigheid_reden_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_tijdstip_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'secondary_label' => NULL,
			'collapsible_label' => NULL,
			'combine_rewrite' => NULL,
			'reset_label' => NULL,
			'bef_filter_description' => NULL,
			'any_label' => NULL,
			'filter_rewrite_values' => NULL 
	);
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '100';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'realname' => 'realname',
			'field_tijdstip' => 'field_tijdstip',
			'field_pers_afwezigheid_redenand' => 'field_pers_afwezigheid_redenand',
			'field_pers_afwezigheid_reden' => 'field_pers_afwezigheid_reden',
			'edit_node' => 'edit_node',
			'delete_node' => 'delete_node',
			'nothing' => 'nothing' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'field_tijdstip';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'realname' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tijdstip' => array (
					'sortable' => '1',
					'default_sort_order' => 'desc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_pers_afwezigheid_redenand' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_pers_afwezigheid_reden' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'edit_node' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'delete_node' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-right',
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
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/personeel-afwezigheid">Een nieuwe afwezigheid toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/personeel-afwezigheid">Een nieuwe afwezigheid toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['id'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['table'] = 'field_data_field_gebruiker';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['field'] = 'field_gebruiker_target_id';
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Personeelslid';
	/* Veld: Inhoud: Tijdstip */
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['id'] = 'field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['field'] = 'field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['settings'] = array (
			'format_type' => 'long',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Reden (andere) */
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['id'] = 'field_pers_afwezigheid_redenand';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['table'] = 'field_data_field_pers_afwezigheid_redenand';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['field'] = 'field_pers_afwezigheid_redenand';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Reden */
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['id'] = 'field_pers_afwezigheid_reden';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['table'] = 'field_data_field_pers_afwezigheid_reden';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['field'] = 'field_pers_afwezigheid_reden';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['alter'] ['text'] = '[field_pers_afwezigheid_reden]<br /><small>[field_pers_afwezigheid_redenand]</small>';
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['edit_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['edit_node'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Verwijderlink */
	$handler->display->display_options ['fields'] ['delete_node'] ['id'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['field'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['delete_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['delete_node'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[edit_node] - [delete_node]';
	$handler->display->display_options ['fields'] ['nothing'] ['element_label_colon'] = FALSE;
	/* Sorteercriterium: Inhoud: Tijdstip - startdatum (field_tijdstip) */
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['id'] = 'field_tijdstip_value';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['field'] = 'field_tijdstip_value';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['order'] = 'DESC';
	/* Sorteercriterium: Echte naam: Werkelijke naam */
	$handler->display->display_options ['sorts'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['relationship'] = 'field_gebruiker_target_id';
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
			'personeel_afwezigheid' => 'personeel_afwezigheid' 
	);
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Personeelslid';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Reden (field_pers_afwezigheid_reden) */
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['id'] = 'field_pers_afwezigheid_reden_value';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['table'] = 'field_data_field_pers_afwezigheid_reden';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['field'] = 'field_pers_afwezigheid_reden_value';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['expose'] ['operator_id'] = 'field_pers_afwezigheid_reden_value_op';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['expose'] ['label'] = 'Reden';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['expose'] ['operator'] = 'field_pers_afwezigheid_reden_value_op';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['expose'] ['identifier'] = 'field_pers_afwezigheid_reden_value';
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_pers_afwezigheid_reden_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Tijdstip - startdatum (field_tijdstip) */
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['id'] = 'field_tijdstip_value';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['field'] = 'field_tijdstip_value';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['operator'] = 'between';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['operator_id'] = 'field_tijdstip_value_op';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['label'] = 'Tijdstip';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['operator'] = 'field_tijdstip_value_op';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['identifier'] = 'field_tijdstip_value';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['form_type'] = 'date_popup';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'overview_personeel_afwezigheden' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Personeelslid';
	/* Veld: Inhoud: Tijdstip */
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['id'] = 'field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['field'] = 'field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['settings'] = array (
			'format_type' => 'long',
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
	/* Veld: Inhoud: Reden */
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['id'] = 'field_pers_afwezigheid_reden';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['table'] = 'field_data_field_pers_afwezigheid_reden';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['field'] = 'field_pers_afwezigheid_reden';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_reden'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Reden (andere) */
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['id'] = 'field_pers_afwezigheid_redenand';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['table'] = 'field_data_field_pers_afwezigheid_redenand';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['field'] = 'field_pers_afwezigheid_redenand';
	$handler->display->display_options ['fields'] ['field_pers_afwezigheid_redenand'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['edit_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['edit_node'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Verwijderlink */
	$handler->display->display_options ['fields'] ['delete_node'] ['id'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['field'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['delete_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['delete_node'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[edit_node] - [delete_node]';
	$handler->display->display_options ['fields'] ['nothing'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'absenteisme';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Absenteïsme';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['absenteisme'] = array (
			t ( 'Master' ),
			t ( 'Absenteïsme' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Uitgebreide opties' ),
			t ( 'Items per pagina' ),
			t ( '- Alle -' ),
			t ( 'Startpunt' ),
			t ( '« eerste' ),
			t ( '‹ vorige' ),
			t ( 'volgende ›' ),
			t ( 'laatste »' ),
			t ( '<a href="/node/add/personeel-afwezigheid">Een nieuwe afwezigheid toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Gebruiker entity referenced from field_gebruiker' ),
			t ( 'Personeelslid' ),
			t ( 'Tijdstip' ),
			t ( 'Reden' ),
			t ( '[field_pers_afwezigheid_reden]<br /><small>[field_pers_afwezigheid_redenand]</small>' ),
			t ( '[edit_node] - [delete_node]' ),
			t ( 'Overzicht' ),
			t ( 'Reden (andere)' ) 
	);
	$export ['absenteisme'] = $view;
	
	return $export;
}
