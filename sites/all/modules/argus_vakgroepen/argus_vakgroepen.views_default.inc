<?php
/**
 * @file
 * argus_vakgroepen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_vakgroepen_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'vakgroepen';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Vakgroepen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Vakgroepen';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create vakgroep content';
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
					'vakgroep' => 'vakgroep' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '20';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'title' => 'title',
			'field_vgwg_vak' => 'field_vgwg_vak',
			'field_vgwg_omschrijving' => 'field_vgwg_omschrijving',
			'realname' => 'realname',
			'nid' => 'nid',
			'field_vak_beschrijving' => 'field_vak_beschrijving' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'title' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_vgwg_vak' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_vgwg_omschrijving' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'realname' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nid' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_vak_beschrijving' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_vgwg_vak_target_id'] ['id'] = 'field_vgwg_vak_target_id';
	$handler->display->display_options ['relationships'] ['field_vgwg_vak_target_id'] ['table'] = 'field_data_field_vgwg_vak';
	$handler->display->display_options ['relationships'] ['field_vgwg_vak_target_id'] ['field'] = 'field_vgwg_vak_target_id';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Vakken */
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['id'] = 'field_vgwg_vak';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['table'] = 'field_data_field_vgwg_vak';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['field'] = 'field_vgwg_vak';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['label'] = 'Vak(ken)';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['alter'] ['path'] = 'vak/';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_vgwg_vak'] ['multi_type'] = 'ul';
	/* Veld: Inhoud: Omschrijving */
	$handler->display->display_options ['fields'] ['field_vgwg_omschrijving'] ['id'] = 'field_vgwg_omschrijving';
	$handler->display->display_options ['fields'] ['field_vgwg_omschrijving'] ['table'] = 'field_data_field_vgwg_omschrijving';
	$handler->display->display_options ['fields'] ['field_vgwg_omschrijving'] ['field'] = 'field_vgwg_omschrijving';
	$handler->display->display_options ['fields'] ['field_vgwg_omschrijving'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	/* Veld: Inhoud: Beschrijving */
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['id'] = 'field_vak_beschrijving';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['table'] = 'field_data_field_vak_beschrijving';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['field'] = 'field_vak_beschrijving';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['relationship'] = 'field_vgwg_vak_target_id';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['group_columns'] = array (
			'entity_id' => 'entity_id',
			'value' => 'value' 
	);
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['expose'] ['label'] = 'Titel';
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
			'vakgroep' => 'vakgroep' 
	);
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	/* Filtercriterium: Inhoud: Leerkracht (field_uurrooster_les_leerkracht) */
	$handler->display->display_options ['filters'] ['field_uurrooster_les_leerkracht_target_id'] ['id'] = 'field_uurrooster_les_leerkracht_target_id';
	$handler->display->display_options ['filters'] ['field_uurrooster_les_leerkracht_target_id'] ['table'] = 'field_data_field_uurrooster_les_leerkracht';
	$handler->display->display_options ['filters'] ['field_uurrooster_les_leerkracht_target_id'] ['field'] = 'field_uurrooster_les_leerkracht_target_id';
	
	/* Display: Vakgroepen */
	$handler = $view->new_display ( 'page', 'Vakgroepen', 'vakgroepen_overzicht' );
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
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
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'title' => 'title',
			'field_voorzitter' => 'field_voorzitter',
			'field_vgwg_leden' => 'field_vgwg_leden' 
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
			'field_voorzitter' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_vgwg_leden' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['override'] = FALSE;
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Vakgroep';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[title] - [nid]';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Veld: Voorzitter */
	$handler->display->display_options ['fields'] ['field_voorzitter'] ['id'] = 'field_voorzitter';
	$handler->display->display_options ['fields'] ['field_voorzitter'] ['table'] = 'field_data_field_voorzitter';
	$handler->display->display_options ['fields'] ['field_voorzitter'] ['field'] = 'field_voorzitter';
	$handler->display->display_options ['fields'] ['field_voorzitter'] ['settings'] = array (
			'link' => '1' 
	);
	/* Veld: Inhoud: Leden */
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['id'] = 'field_vgwg_leden';
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['table'] = 'field_data_field_vgwg_leden';
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['field'] = 'field_vgwg_leden';
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['settings'] = array (
			'link' => '1' 
	);
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['multi_type'] = 'ol';
	$handler->display->display_options ['fields'] ['field_vgwg_leden'] ['separator'] = ' - ';
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['expose'] ['label'] = 'Titel';
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
			'vakgroep' => 'vakgroep' 
	);
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Vakgroep';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'vakgroepen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Vakgroepen';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	
	/* Display: Vakgroepen: selectielijst */
	$handler = $view->new_display ( 'entityreference', 'Vakgroepen: selectielijst', 'vakgroepen' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'some';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'entityreference_style';
	$handler->display->display_options ['style_options'] ['search_fields'] = array (
			'title' => 'title' 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['row_plugin'] = 'entityreference_fields';
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'vakgroep' => 'vakgroep' 
	);
	$translatables ['vakgroepen'] = array (
			t ( 'Master' ),
			t ( 'Vakgroepen' ),
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
			t ( 'Inhoud entity referenced from field_vgwg_vak' ),
			t ( 'Titel' ),
			t ( 'Vak(ken)' ),
			t ( 'Omschrijving' ),
			t ( 'Nid' ),
			t ( 'Beschrijving' ),
			t ( 'Vakgroep' ),
			t ( '[title] - [nid]' ),
			t ( 'Voorzitter' ),
			t ( 'Leden' ),
			t ( 'Vakgroepen: selectielijst' ) 
	);
	$export ['vakgroepen'] = $view;
	
	return $export;
}
