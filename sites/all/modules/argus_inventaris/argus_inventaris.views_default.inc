<?php
/**
 * @file
 * argus_inventaris.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_inventaris_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'inventaris';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Inventaris';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Inventaris';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array (
			216 => '216' 
	);
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
					'inventaris' => 'inventaris' 
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
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'field_inventaris_categorie' => 'field_inventaris_categorie',
			'field_klas_structuuronderdeel' => 'field_klas_structuuronderdeel',
			'field_jaar' => 'field_jaar',
			'body' => 'body',
			'title' => 'title',
			'field_lokaal' => 'field_lokaal',
			'realname' => 'realname',
			'field_inventaris_fir' => 'field_inventaris_fir',
			'field_factuurnummer' => 'field_factuurnummer',
			'field_inventaris_bir' => 'field_inventaris_bir',
			'field_inventaris_status' => 'field_inventaris_status',
			'edit_node' => 'edit_node' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_inventaris_categorie' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_klas_structuuronderdeel' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_jaar' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'body' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
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
			'field_lokaal' => array (
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
			),
			'field_inventaris_fir' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_factuurnummer' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_inventaris_bir' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_inventaris_status' => array (
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
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/inventaris">Een nieuw inventaris-item toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/inventaris">Een nieuw inventaris-item toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_lokaal_target_id'] ['id'] = 'field_lokaal_target_id';
	$handler->display->display_options ['relationships'] ['field_lokaal_target_id'] ['table'] = 'field_data_field_lokaal';
	$handler->display->display_options ['relationships'] ['field_lokaal_target_id'] ['field'] = 'field_lokaal_target_id';
	$handler->display->display_options ['relationships'] ['field_lokaal_target_id'] ['label'] = 'Lokaal';
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	/* Veld: Inhoud: Jaar */
	$handler->display->display_options ['fields'] ['field_jaar'] ['id'] = 'field_jaar';
	$handler->display->display_options ['fields'] ['field_jaar'] ['table'] = 'field_data_field_jaar';
	$handler->display->display_options ['fields'] ['field_jaar'] ['field'] = 'field_jaar';
	$handler->display->display_options ['fields'] ['field_jaar'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_jaar'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_jaar'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_jaar'] ['settings'] = array (
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
	/* Veld: Inhoud: Body */
	$handler->display->display_options ['fields'] ['body'] ['id'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['table'] = 'field_data_body';
	$handler->display->display_options ['fields'] ['body'] ['field'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['label'] = '';
	$handler->display->display_options ['fields'] ['body'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['body'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['body'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Omshrijving';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[title] ([field_jaar])<br />
[body]';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Categorie */
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['id'] = 'field_inventaris_categorie';
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['table'] = 'field_data_field_inventaris_categorie';
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['field'] = 'field_inventaris_categorie';
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_inventaris_categorie'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Structuuronderdeel */
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['id'] = 'field_klas_structuuronderdeel';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['table'] = 'field_data_field_klas_structuuronderdeel';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['field'] = 'field_klas_structuuronderdeel';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['label'] = 'Afdeling / categorie';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['alter'] ['text'] = '[field_inventaris_categorie]<br />
<small>[field_klas_structuuronderdeel]</small>';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['delta_offset'] = '0';
	/* Veld: Veld: Lokaal */
	$handler->display->display_options ['fields'] ['field_lokaal'] ['id'] = 'field_lokaal';
	$handler->display->display_options ['fields'] ['field_lokaal'] ['table'] = 'field_data_field_lokaal';
	$handler->display->display_options ['fields'] ['field_lokaal'] ['field'] = 'field_lokaal';
	$handler->display->display_options ['fields'] ['field_lokaal'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_lokaal'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_lokaal'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_lokaal'] ['settings'] = array (
			'link' => 0,
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Verantwoordelijke';
	$handler->display->display_options ['fields'] ['realname'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['realname'] ['alter'] ['text'] = '[realname]<br />
<small>[field_lokaal]</small>';
	/* Veld: Inhoud: Fysisch inventarisregister */
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['id'] = 'field_inventaris_fir';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['table'] = 'field_data_field_inventaris_fir';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['field'] = 'field_inventaris_fir';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['alter'] ['text'] = 'FIR = <strong>[field_inventaris_fir]</strong><br />';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Factuurnummer */
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['id'] = 'field_factuurnummer';
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['table'] = 'field_data_field_factuurnummer';
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['field'] = 'field_factuurnummer';
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['alter'] ['text'] = 'Factuurnr. = <strong>[field_factuurnummer]</strong>';
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_factuurnummer'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Boekhoudkundig inventarisregister */
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['id'] = 'field_inventaris_bir';
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['table'] = 'field_data_field_inventaris_bir';
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['field'] = 'field_inventaris_bir';
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['alter'] ['text'] = 'BIR = <strong>[field_inventaris_bir]</strong><br />';
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_inventaris_bir'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Nummers';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '<small>[field_inventaris_fir][field_inventaris_bir][field_factuurnummer]</small>';
	/* Veld: Inhoud: Status */
	$handler->display->display_options ['fields'] ['field_inventaris_status'] ['id'] = 'field_inventaris_status';
	$handler->display->display_options ['fields'] ['field_inventaris_status'] ['table'] = 'field_data_field_inventaris_status';
	$handler->display->display_options ['fields'] ['field_inventaris_status'] ['field'] = 'field_inventaris_status';
	$handler->display->display_options ['fields'] ['field_inventaris_status'] ['settings'] = array (
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
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = 'bewerken';
	/* Sorteercriterium: Inhoud: Categorie (field_inventaris_categorie) */
	$handler->display->display_options ['sorts'] ['field_inventaris_categorie_value'] ['id'] = 'field_inventaris_categorie_value';
	$handler->display->display_options ['sorts'] ['field_inventaris_categorie_value'] ['table'] = 'field_data_field_inventaris_categorie';
	$handler->display->display_options ['sorts'] ['field_inventaris_categorie_value'] ['field'] = 'field_inventaris_categorie_value';
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
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
			'inventaris' => 'inventaris' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Status (field_inventaris_status) */
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['id'] = 'field_inventaris_status_value';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['table'] = 'field_data_field_inventaris_status';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['field'] = 'field_inventaris_status_value';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['expose'] ['operator_id'] = 'field_inventaris_status_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['expose'] ['label'] = 'Status';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['expose'] ['operator'] = 'field_inventaris_status_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['expose'] ['identifier'] = 'field_inventaris_status_value';
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_inventaris_status_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Categorie (field_inventaris_categorie) */
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['id'] = 'field_inventaris_categorie_value';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['table'] = 'field_data_field_inventaris_categorie';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['field'] = 'field_inventaris_categorie_value';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['expose'] ['operator_id'] = 'field_inventaris_categorie_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['expose'] ['label'] = 'Categorie';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['expose'] ['operator'] = 'field_inventaris_categorie_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['expose'] ['identifier'] = 'field_inventaris_categorie_value';
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_inventaris_categorie_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Structuuronderdeel (field_klas_structuuronderdeel) */
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['id'] = 'field_klas_structuuronderdeel_value';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['table'] = 'field_data_field_klas_structuuronderdeel';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['field'] = 'field_klas_structuuronderdeel_value';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['operator_id'] = 'field_klas_structuuronderdeel_value_op';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['label'] = 'Afdeling';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['operator'] = 'field_klas_structuuronderdeel_value_op';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['identifier'] = 'field_klas_structuuronderdeel_value';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Fysisch inventarisregister (field_inventaris_fir) */
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['id'] = 'field_inventaris_fir_value';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['table'] = 'field_data_field_inventaris_fir';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['field'] = 'field_inventaris_fir_value';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['operator_id'] = 'field_inventaris_fir_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['label'] = 'Fysisch inventarisregister (FIR)';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['operator'] = 'field_inventaris_fir_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['identifier'] = 'field_inventaris_fir_value';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_filter'] = '1';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_field'] = 'field_inventaris_fir';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_inventaris_fir_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Factuurnummer (field_factuurnummer) */
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['id'] = 'field_factuurnummer_value';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['table'] = 'field_data_field_factuurnummer';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['field'] = 'field_factuurnummer_value';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['operator_id'] = 'field_factuurnummer_value_op';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['label'] = 'Factuurnummer';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['operator'] = 'field_factuurnummer_value_op';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['identifier'] = 'field_factuurnummer_value';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['autocomplete_field'] = 'field_factuurnummer';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_factuurnummer_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Boekhoudkundig inventarisregister (field_inventaris_bir) */
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['id'] = 'field_inventaris_bir_value';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['table'] = 'field_data_field_inventaris_bir';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['field'] = 'field_inventaris_bir_value';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['operator_id'] = 'field_inventaris_bir_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['label'] = 'Boekhoudkundig inventarisregister (BIR)';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['operator'] = 'field_inventaris_bir_value_op';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['identifier'] = 'field_inventaris_bir_value';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_filter'] = '1';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_field'] = 'field_inventaris_bir';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_inventaris_bir_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Afkorting (field_lokaal_afkorting) */
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['id'] = 'field_lokaal_afkorting_value';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['table'] = 'field_data_field_lokaal_afkorting';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['field'] = 'field_lokaal_afkorting_value';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['relationship'] = 'field_lokaal_target_id';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['operator_id'] = 'field_lokaal_afkorting_value_op';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['label'] = 'Lokaal';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['operator'] = 'field_lokaal_afkorting_value_op';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['identifier'] = 'field_lokaal_afkorting_value';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_lokaal_afkorting_value'] ['expose'] ['autocomplete_dependent'] = 0;
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'inventaris_overview' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'inventaris';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Inventaris';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	
	/* Display: Selectielijst */
	$handler = $view->new_display ( 'entityreference', 'Selectielijst', 'ontleningen_selectielijst' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'entityreference_style';
	$handler->display->display_options ['style_options'] ['search_fields'] = array (
			'field_inventaris_fir' => 'field_inventaris_fir',
			'field_jaar' => 'field_jaar',
			'title' => 'title' 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['row_plugin'] = 'entityreference_fields';
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['link_to_node'] = FALSE;
	/* Veld: Inhoud: Jaar */
	$handler->display->display_options ['fields'] ['field_jaar'] ['id'] = 'field_jaar';
	$handler->display->display_options ['fields'] ['field_jaar'] ['table'] = 'field_data_field_jaar';
	$handler->display->display_options ['fields'] ['field_jaar'] ['field'] = 'field_jaar';
	$handler->display->display_options ['fields'] ['field_jaar'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_jaar'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_jaar'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_jaar'] ['settings'] = array (
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
	/* Veld: Inhoud: Fysisch inventarisregister */
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['id'] = 'field_inventaris_fir';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['table'] = 'field_data_field_inventaris_fir';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['field'] = 'field_inventaris_fir';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['alter'] ['text'] = '[title] - [field_jaar] ([field_inventaris_fir])';
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_inventaris_fir'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = '1';
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'inventaris' => 'inventaris' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$translatables ['inventaris'] = array (
			t ( 'Master' ),
			t ( 'Inventaris' ),
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
			t ( '<a href="/node/add/inventaris">Een nieuw inventaris-item toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Lokaal' ),
			t ( 'auteur' ),
			t ( 'Omshrijving' ),
			t ( '[title] ([field_jaar])<br />
[body]' ),
			t ( 'Afdeling / categorie' ),
			t ( '[field_inventaris_categorie]<br />
<small>[field_klas_structuuronderdeel]</small>' ),
			t ( 'Verantwoordelijke' ),
			t ( '[realname]<br />
<small>[field_lokaal]</small>' ),
			t ( 'FIR = <strong>[field_inventaris_fir]</strong><br />' ),
			t ( 'Factuurnr. = <strong>[field_factuurnummer]</strong>' ),
			t ( 'BIR = <strong>[field_inventaris_bir]</strong><br />' ),
			t ( 'Nummers' ),
			t ( '<small>[field_inventaris_fir][field_inventaris_bir][field_factuurnummer]</small>' ),
			t ( 'Status' ),
			t ( 'bewerken' ),
			t ( 'Categorie' ),
			t ( 'Afdeling' ),
			t ( 'Fysisch inventarisregister (FIR)' ),
			t ( 'Factuurnummer' ),
			t ( 'Boekhoudkundig inventarisregister (BIR)' ),
			t ( 'Overzicht' ),
			t ( 'Selectielijst' ),
			t ( '[title] - [field_jaar] ([field_inventaris_fir])' ) 
	);
	$export ['inventaris'] = $view;
	
	return $export;
}
