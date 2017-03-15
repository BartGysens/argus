<?php
/**
 * @file
 * argus_sleutelbeheer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_sleutelbeheer_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'sleutelbeheer';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Sleutelbeheer';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Sleutelbeheer';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['group_by'] = TRUE;
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
					'sleutel' => 'sleutel' 
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
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['id'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['quantity'] = '9';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['style_plugin'] = 'views_aggregator';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'nid' => 'nid',
			'field_sleutel_nummer' => 'field_sleutel_nummer',
			'field_sleutel_omschrijving' => 'field_sleutel_omschrijving',
			'field_sleutel_uitlening_1' => 'field_sleutel_uitlening_1',
			'field_sleutel_locatie' => 'field_sleutel_locatie',
			'field_sleutel_type' => 'field_sleutel_type',
			'field_sleutel_vrijgave' => 'field_sleutel_vrijgave',
			'field_sleutel_totaal_aantal' => 'field_sleutel_totaal_aantal',
			'field_sleutel_uitlening' => 'field_sleutel_uitlening',
			'expression' => 'expression',
			'field_sleutel_kleurcode' => 'field_sleutel_kleurcode' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'field_sleutel_nummer';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'nid' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
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
			'field_sleutel_nummer' => array (
					'sortable' => 1,
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
			'field_sleutel_omschrijving' => array (
					'sortable' => 1,
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
			'field_sleutel_uitlening_1' => array (
					'align' => '',
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
			'field_sleutel_locatie' => array (
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
			'field_sleutel_type' => array (
					'sortable' => 1,
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
			'field_sleutel_vrijgave' => array (
					'sortable' => 1,
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
			'field_sleutel_totaal_aantal' => array (
					'sortable' => 1,
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
			'field_sleutel_uitlening' => array (
					'sortable' => 1,
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
			'expression' => array (
					'sortable' => 1,
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
			'field_sleutel_kleurcode' => array (
					'sortable' => 1,
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
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/sleutel">Een nieuwe sleutel toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/sleutel">Een nieuwe sleutel toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Inhoud: Uitlening (field_sleutel_uitlening) */
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_value'] ['id'] = 'field_sleutel_uitlening_value';
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_value'] ['table'] = 'field_data_field_sleutel_uitlening';
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_value'] ['field'] = 'field_sleutel_uitlening_value';
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_value'] ['delta'] = '-1';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_uitlener_target_id'] ['id'] = 'field_sleutel_uitlening_uitlener_target_id';
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_uitlener_target_id'] ['table'] = 'field_data_field_sleutel_uitlening_uitlener';
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_uitlener_target_id'] ['field'] = 'field_sleutel_uitlening_uitlener_target_id';
	$handler->display->display_options ['relationships'] ['field_sleutel_uitlening_uitlener_target_id'] ['relationship'] = 'field_sleutel_uitlening_value';
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['alter'] ['text'] = '[field_sleutel_nummer]';
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Nummer in sleutelkast */
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['id'] = 'field_sleutel_nummer';
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['table'] = 'field_data_field_sleutel_nummer';
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['field'] = 'field_sleutel_nummer';
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['label'] = 'Nr.';
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['alter'] ['path'] = 'node/[nid]';
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_sleutel_nummer'] ['settings'] = array (
			'thousand_separator' => ' ',
			'prefix_suffix' => 1 
	);
	/* Veld: Inhoud: Omschrijving */
	$handler->display->display_options ['fields'] ['field_sleutel_omschrijving'] ['id'] = 'field_sleutel_omschrijving';
	$handler->display->display_options ['fields'] ['field_sleutel_omschrijving'] ['table'] = 'field_data_field_sleutel_omschrijving';
	$handler->display->display_options ['fields'] ['field_sleutel_omschrijving'] ['field'] = 'field_sleutel_omschrijving';
	$handler->display->display_options ['fields'] ['field_sleutel_omschrijving'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Uitlening */
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['id'] = 'field_sleutel_uitlening_1';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['table'] = 'field_data_field_sleutel_uitlening';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['field'] = 'field_sleutel_uitlening';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['empty'] = 'Niet uitgeleend';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['type'] = 'field_collection_fields';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['settings'] = array (
			'view_mode' => 'token' 
	);
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening_1'] ['separator'] = '-------------------------';
	/* Veld: Inhoud: Locatie */
	$handler->display->display_options ['fields'] ['field_sleutel_locatie'] ['id'] = 'field_sleutel_locatie';
	$handler->display->display_options ['fields'] ['field_sleutel_locatie'] ['table'] = 'field_data_field_sleutel_locatie';
	$handler->display->display_options ['fields'] ['field_sleutel_locatie'] ['field'] = 'field_sleutel_locatie';
	$handler->display->display_options ['fields'] ['field_sleutel_locatie'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_sleutel_locatie'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_sleutel_locatie'] ['separator'] = '<br />';
	/* Veld: Inhoud: Type */
	$handler->display->display_options ['fields'] ['field_sleutel_type'] ['id'] = 'field_sleutel_type';
	$handler->display->display_options ['fields'] ['field_sleutel_type'] ['table'] = 'field_data_field_sleutel_type';
	$handler->display->display_options ['fields'] ['field_sleutel_type'] ['field'] = 'field_sleutel_type';
	/* Veld: Inhoud: Vrijgave */
	$handler->display->display_options ['fields'] ['field_sleutel_vrijgave'] ['id'] = 'field_sleutel_vrijgave';
	$handler->display->display_options ['fields'] ['field_sleutel_vrijgave'] ['table'] = 'field_data_field_sleutel_vrijgave';
	$handler->display->display_options ['fields'] ['field_sleutel_vrijgave'] ['field'] = 'field_sleutel_vrijgave';
	/* Veld: Inhoud: Totaal aantal beschikbaar */
	$handler->display->display_options ['fields'] ['field_sleutel_totaal_aantal'] ['id'] = 'field_sleutel_totaal_aantal';
	$handler->display->display_options ['fields'] ['field_sleutel_totaal_aantal'] ['table'] = 'field_data_field_sleutel_totaal_aantal';
	$handler->display->display_options ['fields'] ['field_sleutel_totaal_aantal'] ['field'] = 'field_sleutel_totaal_aantal';
	$handler->display->display_options ['fields'] ['field_sleutel_totaal_aantal'] ['label'] = 'Beschikbaar';
	$handler->display->display_options ['fields'] ['field_sleutel_totaal_aantal'] ['settings'] = array (
			'thousand_separator' => ' ',
			'prefix_suffix' => 1 
	);
	/* Veld: COUNT(DISTINCT Inhoud: Uitlening) */
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['id'] = 'field_sleutel_uitlening';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['table'] = 'field_data_field_sleutel_uitlening';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['field'] = 'field_sleutel_uitlening';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['group_type'] = 'count_distinct';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['label'] = 'Uitgeleend';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['element_class'] = 'markup-red';
	$handler->display->display_options ['fields'] ['field_sleutel_uitlening'] ['separator'] = '-------------------------';
	/* Veld: Algemeen: Wiskundige expressie */
	$handler->display->display_options ['fields'] ['expression'] ['id'] = 'expression';
	$handler->display->display_options ['fields'] ['expression'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['expression'] ['field'] = 'expression';
	$handler->display->display_options ['fields'] ['expression'] ['label'] = 'In sleutelkast';
	$handler->display->display_options ['fields'] ['expression'] ['element_type'] = 'strong';
	$handler->display->display_options ['fields'] ['expression'] ['element_class'] = 'markup-red';
	$handler->display->display_options ['fields'] ['expression'] ['element_label_type'] = 'strong';
	$handler->display->display_options ['fields'] ['expression'] ['precision'] = '0';
	$handler->display->display_options ['fields'] ['expression'] ['expression'] = '[field_sleutel_totaal_aantal]-[field_sleutel_uitlening]';
	/* Veld: Inhoud: Kleurcode */
	$handler->display->display_options ['fields'] ['field_sleutel_kleurcode'] ['id'] = 'field_sleutel_kleurcode';
	$handler->display->display_options ['fields'] ['field_sleutel_kleurcode'] ['table'] = 'field_data_field_sleutel_kleurcode';
	$handler->display->display_options ['fields'] ['field_sleutel_kleurcode'] ['field'] = 'field_sleutel_kleurcode';
	$handler->display->display_options ['fields'] ['field_sleutel_kleurcode'] ['label'] = 'Kleur';
	$handler->display->display_options ['fields'] ['field_sleutel_kleurcode'] ['type'] = 'color_field_swatch';
	$handler->display->display_options ['fields'] ['field_sleutel_kleurcode'] ['settings'] = array (
			'width' => '50',
			'height' => '20' 
	);
	/* Sorteercriterium: Inhoud: Locatie (!naam:delta) */
	$handler->display->display_options ['sorts'] ['delta'] ['id'] = 'delta';
	$handler->display->display_options ['sorts'] ['delta'] ['table'] = 'field_data_field_sleutel_locatie';
	$handler->display->display_options ['sorts'] ['delta'] ['field'] = 'delta';
	/* Contextueel filter: Gebruiker: Naam */
	$handler->display->display_options ['arguments'] ['name'] ['id'] = 'name';
	$handler->display->display_options ['arguments'] ['name'] ['table'] = 'users';
	$handler->display->display_options ['arguments'] ['name'] ['field'] = 'name';
	$handler->display->display_options ['arguments'] ['name'] ['relationship'] = 'field_sleutel_uitlening_uitlener_target_id';
	$handler->display->display_options ['arguments'] ['name'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['name'] ['default_argument_type'] = 'fixed';
	$handler->display->display_options ['arguments'] ['name'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['name'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['name'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['name'] ['limit'] = '0';
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
			'sleutel' => 'sleutel' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Nummer in sleutelkast (field_sleutel_nummer) */
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['id'] = 'field_sleutel_nummer_value';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['table'] = 'field_data_field_sleutel_nummer';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['field'] = 'field_sleutel_nummer_value';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['expose'] ['operator_id'] = 'field_sleutel_nummer_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['expose'] ['label'] = 'Nummer in sleutelkast';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['expose'] ['operator'] = 'field_sleutel_nummer_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['expose'] ['identifier'] = 'field_sleutel_nummer_value';
	$handler->display->display_options ['filters'] ['field_sleutel_nummer_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Omschrijving (field_sleutel_omschrijving) */
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['id'] = 'field_sleutel_omschrijving_value';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['table'] = 'field_data_field_sleutel_omschrijving';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['field'] = 'field_sleutel_omschrijving_value';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['expose'] ['operator_id'] = 'field_sleutel_omschrijving_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['expose'] ['label'] = 'Omschrijving';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['expose'] ['operator'] = 'field_sleutel_omschrijving_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['expose'] ['identifier'] = 'field_sleutel_omschrijving_value';
	$handler->display->display_options ['filters'] ['field_sleutel_omschrijving_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Locatie (field_sleutel_locatie) */
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['id'] = 'field_sleutel_locatie_value';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['table'] = 'field_data_field_sleutel_locatie';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['field'] = 'field_sleutel_locatie_value';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['operator_id'] = 'field_sleutel_locatie_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['label'] = 'Locatie';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['operator'] = 'field_sleutel_locatie_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['identifier'] = 'field_sleutel_locatie_value';
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_locatie_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Type (field_sleutel_type) */
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['id'] = 'field_sleutel_type_value';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['table'] = 'field_data_field_sleutel_type';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['field'] = 'field_sleutel_type_value';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['operator_id'] = 'field_sleutel_type_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['operator'] = 'field_sleutel_type_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['identifier'] = 'field_sleutel_type_value';
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_type_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Vrijgave (field_sleutel_vrijgave) */
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['id'] = 'field_sleutel_vrijgave_value';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['table'] = 'field_data_field_sleutel_vrijgave';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['field'] = 'field_sleutel_vrijgave_value';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['expose'] ['operator_id'] = 'field_sleutel_vrijgave_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['expose'] ['label'] = 'Vrijgave';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['expose'] ['operator'] = 'field_sleutel_vrijgave_value_op';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['expose'] ['identifier'] = 'field_sleutel_vrijgave_value';
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_sleutel_vrijgave_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Gebruiker: Naam (onbewerkt) */
	$handler->display->display_options ['filters'] ['name'] ['id'] = 'name';
	$handler->display->display_options ['filters'] ['name'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['name'] ['field'] = 'name';
	$handler->display->display_options ['filters'] ['name'] ['relationship'] = 'field_sleutel_uitlening_uitlener_target_id';
	$handler->display->display_options ['filters'] ['name'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['name'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['operator_id'] = 'name_op';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['label'] = 'Uitlener';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['operator'] = 'name_op';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['identifier'] = 'name';
	$handler->display->display_options ['filters'] ['name'] ['expose'] ['remember_roles'] = array ();
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'sleutel_overzicht' );
	$handler->display->display_options ['display_description'] = 'Overzicht van de sleutels.';
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['path'] = 'sleutelbeheer/overzicht';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Sleutelbeheer';
	$handler->display->display_options ['menu'] ['description'] = 'Beheer de sleutels in je sleutelkast.';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['sleutelbeheer'] = array (
			t ( 'Master' ),
			t ( 'Sleutelbeheer' ),
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
			t ( '<a href="/node/add/sleutel">Een nieuwe sleutel toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'field collection item from field_sleutel_uitlening' ),
			t ( 'Gebruiker entity referenced from field_sleutel_uitlening_uitlener' ),
			t ( '[field_sleutel_nummer]' ),
			t ( 'Nr.' ),
			t ( 'Omschrijving' ),
			t ( 'Niet uitgeleend' ),
			t ( 'Locatie' ),
			t ( 'Type' ),
			t ( 'Vrijgave' ),
			t ( 'Beschikbaar' ),
			t ( 'Uitgeleend' ),
			t ( 'In sleutelkast' ),
			t ( '.' ),
			t ( ',' ),
			t ( 'Kleur' ),
			t ( 'Alle' ),
			t ( 'Nummer in sleutelkast' ),
			t ( 'Uitlener' ),
			t ( 'Overzicht' ),
			t ( 'Overzicht van de sleutels.' ) 
	);
	$export ['sleutelbeheer'] = $view;
	
	return $export;
}
