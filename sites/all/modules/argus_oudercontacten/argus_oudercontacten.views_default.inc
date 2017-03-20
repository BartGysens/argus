<?php
/**
 * @file
 * argus_oudercontacten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_oudercontacten_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'oudercontacten';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Oudercontacten';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Oudercontacten';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create oudercontact content';
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
					'oudercontact' => 'oudercontact' 
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
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '10';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'field_tijdstip' => 'field_tijdstip',
			'field_leerlingen' => 'field_leerlingen',
			'nid' => 'nid' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_tijdstip' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_leerlingen' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'nid' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/oudercontact">Een nieuw oudercontact toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/oudercontact">Een nieuw oudercontact toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Veld: Inhoud: Tijdstip */
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['id'] = 'field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['field'] = 'field_tijdstip';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_tijdstip'] ['settings'] = array (
			'format_type' => 'dag_en_datum_lang_',
			'fromto' => 'value',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = 'Tijdstip';
	$handler->display->display_options ['fields'] ['nid'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['alter'] ['text'] = '[field_tijdstip]';
	$handler->display->display_options ['fields'] ['nid'] ['link_to_node'] = TRUE;
	/* Veld: COUNT(DISTINCT Inhoud: Leerlingen) */
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['id'] = 'field_leerlingen';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['table'] = 'field_data_field_leerlingen';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['field'] = 'field_leerlingen';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['group_type'] = 'count_distinct';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['label'] = 'Leerlingen aanwezig';
	$handler->display->display_options ['fields'] ['field_leerlingen'] ['separator'] = ', ';
	/* Sorteercriterium: Inhoud: Tijdstip - startdatum (field_tijdstip) */
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['id'] = 'field_tijdstip_value';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['field'] = 'field_tijdstip_value';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['order'] = 'DESC';
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
			'oudercontact' => 'oudercontact' 
	);
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'page' );
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'oudercontacten';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Oudercontacten';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['oudercontacten'] = array (
			t ( 'Master' ),
			t ( 'Oudercontacten' ),
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
			t ( '<a href="/node/add/oudercontact">Een nieuw oudercontact toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Tijdstip' ),
			t ( '[field_tijdstip]' ),
			t ( 'Leerlingen aanwezig' ),
			t ( 'Overzicht' ) 
	);
	$export ['oudercontacten'] = $view;
	
	return $export;
}
