<?php
/**
 * @file
 * argus_projectgroepen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_projectgroepen_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'projectgroepen';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Projectgroepen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Projectgroepen';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create projectgroep content';
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
					'projectgroep' => 'projectgroep' 
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
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['style_plugin'] = 'default';
	$handler->display->display_options ['row_plugin'] = 'fields';
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = 'Projectgroepen ontstaan als er een tijdelijk lopend project is, dat rond één bepaalde realisatie werkt.';
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/projectgroep">Een nieuwe projectgroep toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/projectgroep">Een nieuwe projectgroep toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['element_type'] = 'h3';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Body */
	$handler->display->display_options ['fields'] ['body'] ['id'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['table'] = 'field_data_body';
	$handler->display->display_options ['fields'] ['body'] ['field'] = 'body';
	$handler->display->display_options ['fields'] ['body'] ['label'] = '';
	$handler->display->display_options ['fields'] ['body'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['body'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Veld: Voorzitter */
	$handler->display->display_options ['fields'] ['field_voorzitter_1'] ['id'] = 'field_voorzitter_1';
	$handler->display->display_options ['fields'] ['field_voorzitter_1'] ['table'] = 'field_data_field_voorzitter';
	$handler->display->display_options ['fields'] ['field_voorzitter_1'] ['field'] = 'field_voorzitter';
	$handler->display->display_options ['fields'] ['field_voorzitter_1'] ['element_label_type'] = 'strong';
	$handler->display->display_options ['fields'] ['field_voorzitter_1'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Leden */
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['id'] = 'field_personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['table'] = 'field_data_field_personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['field'] = 'field_personeelsleden';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['element_label_type'] = 'strong';
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_personeelsleden'] ['delta_offset'] = '0';
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
			'projectgroep' => 'projectgroep' 
	);
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'overzicht_projectgroepen' );
	$handler->display->display_options ['path'] = 'projectgroepen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Projectgroepen';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['projectgroepen'] = array (
			t ( 'Master' ),
			t ( 'Projectgroepen' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Projectgroepen ontstaan als er een tijdelijk lopend project is, dat rond één bepaalde realisatie werkt.' ),
			t ( '<a href="/node/add/projectgroep">Een nieuwe projectgroep toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Voorzitter' ),
			t ( 'Leden' ),
			t ( 'Overzicht' ) 
	);
	$export ['projectgroepen'] = $view;
	
	return $export;
}
