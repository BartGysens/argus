<?php
/**
 * @file
 * argus_soda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_soda_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'lvs_soda';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'LVS - SODA';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'SODA: Evaluaties';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array ();
	$roleNames = array (
			'administrator',
			'personeelslid' 
	);
	foreach ( $roleNames as $role ) {
		$rid = user_role_load_by_name ( $role );
		if (! $rid) {
			$newRole = new stdClass ();
			$newRole->name = $role;
			user_role_save ( $newRole );
			
			$rid = user_role_load_by_name ( $role );
		}
		
		$roles [] = $rid->rid;
	}
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
					'lvs_soda' => 'lvs_soda' 
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
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = TRUE;
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '50';
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
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['grouping'] = array (
			0 => array (
					'field' => 'title',
					'rendered' => '1',
					'rendered_strip' => 0 
			),
			1 => array (
					'field' => 'field_leerling',
					'rendered' => '1',
					'rendered_strip' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'title' => 'title',
			'field_leerling' => 'field_leerling',
			'field_soda_periode' => 'field_soda_periode',
			'field_soda_stiptheid' => 'field_soda_stiptheid',
			'field_soda_orde' => 'field_soda_orde',
			'field_soda_discipline' => 'field_soda_discipline',
			'field_soda_attitude' => 'field_soda_attitude',
			'changed' => 'changed',
			'edit_node' => 'edit_node' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_leerling' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_soda_periode' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_soda_stiptheid' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_soda_orde' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_soda_discipline' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_soda_attitude' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'changed' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'edit_node' => array (
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_leerling_target_id'] ['id'] = 'field_leerling_target_id';
	$handler->display->display_options ['relationships'] ['field_leerling_target_id'] ['table'] = 'field_data_field_leerling';
	$handler->display->display_options ['relationships'] ['field_leerling_target_id'] ['field'] = 'field_leerling_target_id';
	$handler->display->display_options ['relationships'] ['field_leerling_target_id'] ['label'] = 'leerling';
	/* Relatie: Referentie naar een entiteit: Refererende entiteit */
	$handler->display->display_options ['relationships'] ['reverse_field_klas_leerlingen_node'] ['id'] = 'reverse_field_klas_leerlingen_node';
	$handler->display->display_options ['relationships'] ['reverse_field_klas_leerlingen_node'] ['table'] = 'users';
	$handler->display->display_options ['relationships'] ['reverse_field_klas_leerlingen_node'] ['field'] = 'reverse_field_klas_leerlingen_node';
	$handler->display->display_options ['relationships'] ['reverse_field_klas_leerlingen_node'] ['relationship'] = 'field_leerling_target_id';
	$handler->display->display_options ['relationships'] ['reverse_field_klas_leerlingen_node'] ['label'] = 'klas';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['relationship'] = 'reverse_field_klas_leerlingen_node';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '<h2>[title]</h2>';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Leerling */
	$handler->display->display_options ['fields'] ['field_leerling'] ['id'] = 'field_leerling';
	$handler->display->display_options ['fields'] ['field_leerling'] ['table'] = 'field_data_field_leerling';
	$handler->display->display_options ['fields'] ['field_leerling'] ['field'] = 'field_leerling';
	$handler->display->display_options ['fields'] ['field_leerling'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_leerling'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_leerling'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_leerling'] ['settings'] = array (
			'bypass_access' => 0,
			'link' => 0,
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Periode */
	$handler->display->display_options ['fields'] ['field_soda_periode'] ['id'] = 'field_soda_periode';
	$handler->display->display_options ['fields'] ['field_soda_periode'] ['table'] = 'field_data_field_soda_periode';
	$handler->display->display_options ['fields'] ['field_soda_periode'] ['field'] = 'field_soda_periode';
	$handler->display->display_options ['fields'] ['field_soda_periode'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Stiptheid */
	$handler->display->display_options ['fields'] ['field_soda_stiptheid'] ['id'] = 'field_soda_stiptheid';
	$handler->display->display_options ['fields'] ['field_soda_stiptheid'] ['table'] = 'field_data_field_soda_stiptheid';
	$handler->display->display_options ['fields'] ['field_soda_stiptheid'] ['field'] = 'field_soda_stiptheid';
	/* Veld: Inhoud: Orde */
	$handler->display->display_options ['fields'] ['field_soda_orde'] ['id'] = 'field_soda_orde';
	$handler->display->display_options ['fields'] ['field_soda_orde'] ['table'] = 'field_data_field_soda_orde';
	$handler->display->display_options ['fields'] ['field_soda_orde'] ['field'] = 'field_soda_orde';
	/* Veld: Inhoud: Discipline */
	$handler->display->display_options ['fields'] ['field_soda_discipline'] ['id'] = 'field_soda_discipline';
	$handler->display->display_options ['fields'] ['field_soda_discipline'] ['table'] = 'field_data_field_soda_discipline';
	$handler->display->display_options ['fields'] ['field_soda_discipline'] ['field'] = 'field_soda_discipline';
	/* Veld: Inhoud: Attitude */
	$handler->display->display_options ['fields'] ['field_soda_attitude'] ['id'] = 'field_soda_attitude';
	$handler->display->display_options ['fields'] ['field_soda_attitude'] ['table'] = 'field_data_field_soda_attitude';
	$handler->display->display_options ['fields'] ['field_soda_attitude'] ['field'] = 'field_soda_attitude';
	$handler->display->display_options ['fields'] ['field_soda_attitude'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Wijzigingsdatum */
	$handler->display->display_options ['fields'] ['changed'] ['id'] = 'changed';
	$handler->display->display_options ['fields'] ['changed'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['changed'] ['field'] = 'changed';
	$handler->display->display_options ['fields'] ['changed'] ['label'] = '';
	$handler->display->display_options ['fields'] ['changed'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['changed'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['changed'] ['alter'] ['text'] = '<small><em>[changed]</em></small>';
	$handler->display->display_options ['fields'] ['changed'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['changed'] ['date_format'] = 'datum_lang_';
	$handler->display->display_options ['fields'] ['changed'] ['second_date_format'] = 'search_api_facetapi_YEAR';
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['edit_node'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['edit_node'] ['alter'] ['text'] = '[edit_node] - [changed]';
	$handler->display->display_options ['fields'] ['edit_node'] ['element_label_colon'] = FALSE;
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
			'lvs_soda' => 'lvs_soda' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['relationship'] = 'reverse_field_klas_leerlingen_node';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Klas';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'field_leerling_target_id';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Leerling';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Stiptheid (field_soda_stiptheid) */
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['id'] = 'field_soda_stiptheid_value';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['table'] = 'field_data_field_soda_stiptheid';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['field'] = 'field_soda_stiptheid_value';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['expose'] ['operator_id'] = 'field_soda_stiptheid_value_op';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['expose'] ['label'] = 'Stiptheid';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['expose'] ['operator'] = 'field_soda_stiptheid_value_op';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['expose'] ['identifier'] = 'field_soda_stiptheid_value';
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_soda_stiptheid_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Orde (field_soda_orde) */
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['id'] = 'field_soda_orde_value';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['table'] = 'field_data_field_soda_orde';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['field'] = 'field_soda_orde_value';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['expose'] ['operator_id'] = 'field_soda_orde_value_op';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['expose'] ['label'] = 'Orde';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['expose'] ['operator'] = 'field_soda_orde_value_op';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['expose'] ['identifier'] = 'field_soda_orde_value';
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_soda_orde_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Discipline (field_soda_discipline) */
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['id'] = 'field_soda_discipline_value';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['table'] = 'field_data_field_soda_discipline';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['field'] = 'field_soda_discipline_value';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['expose'] ['operator_id'] = 'field_soda_discipline_value_op';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['expose'] ['label'] = 'Discipline';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['expose'] ['operator'] = 'field_soda_discipline_value_op';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['expose'] ['identifier'] = 'field_soda_discipline_value';
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_soda_discipline_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Attitude (field_soda_attitude) */
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['id'] = 'field_soda_attitude_value';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['table'] = 'field_data_field_soda_attitude';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['field'] = 'field_soda_attitude_value';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['expose'] ['operator_id'] = 'field_soda_attitude_value_op';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['expose'] ['label'] = 'Attitude';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['expose'] ['operator'] = 'field_soda_attitude_value_op';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['expose'] ['identifier'] = 'field_soda_attitude_value';
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_soda_attitude_value'] ['reduce_duplicates'] = TRUE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	
	/* Display: Evaluaties */
	$handler = $view->new_display ( 'page', 'Evaluaties', 'lvs_soda_eval_period_overview' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['relationship'] = 'reverse_field_klas_leerlingen_node';
	/* Sorteercriterium: Echte naam: Werkelijke naam */
	$handler->display->display_options ['sorts'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['relationship'] = 'field_leerling_target_id';
	/* Sorteercriterium: Inhoud: Datum van inzending */
	$handler->display->display_options ['sorts'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['order'] = 'DESC';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'soda/evaluaties';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'SODA - Evaluaties';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['lvs_soda'] = array (
			t ( 'Master' ),
			t ( 'SODA: Evaluaties' ),
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
			t ( 'leerling' ),
			t ( 'klas' ),
			t ( '<h2>[title]</h2>' ),
			t ( 'Periode' ),
			t ( 'Stiptheid' ),
			t ( 'Orde' ),
			t ( 'Discipline' ),
			t ( 'Attitude' ),
			t ( '<small><em>[changed]</em></small>' ),
			t ( '[edit_node] - [changed]' ),
			t ( 'Klas' ),
			t ( 'Leerling' ),
			t ( 'Evaluaties' ) 
	);
	$export ['lvs_soda'] = $view;
	
	return $export;
}
