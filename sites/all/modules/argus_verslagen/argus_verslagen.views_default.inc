<?php
/**
 * @file
 * argus_verslagen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_verslagen_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'vergaderingen';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Verslagen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = '%1 (%2)';
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
					'article' => 'article',
					'page' => 'page' 
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
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '25';
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
	$handler->display->display_options ['style_plugin'] = 'list';
	$handler->display->display_options ['style_options'] ['type'] = 'ol';
	$handler->display->display_options ['row_plugin'] = 'fields';
	$handler->display->display_options ['row_options'] ['inline'] = array (
			'title' => 'title',
			'name' => 'name',
			'created' => 'created' 
	);
	$handler->display->display_options ['row_options'] ['separator'] = ' - ';
	$handler->display->display_options ['row_options'] ['hide_empty'] = TRUE;
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Resultaat @start - @end van @total';
	/* Gedrag bij ontbreken van resultaten: Algemeen: Tekstveld */
	$handler->display->display_options ['empty'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['empty'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['empty'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['empty'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['empty'] ['area'] ['content'] = 'Voor de vergadering <strong>%1</strong> werden geen verslagen gevonden waartoe je toegang hebt.';
	$handler->display->display_options ['empty'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['empty'] ['area'] ['tokenize'] = TRUE;
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['element_type'] = 'strong';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Gebruiker: Naam */
	$handler->display->display_options ['fields'] ['name'] ['id'] = 'name';
	$handler->display->display_options ['fields'] ['name'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['name'] ['field'] = 'name';
	$handler->display->display_options ['fields'] ['name'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['name'] ['label'] = '';
	$handler->display->display_options ['fields'] ['name'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Datum van inzending */
	$handler->display->display_options ['fields'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['label'] = '';
	$handler->display->display_options ['fields'] ['created'] ['element_type'] = 'em';
	$handler->display->display_options ['fields'] ['created'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['created'] ['date_format'] = 'dag_en_datum_lang_';
	$handler->display->display_options ['fields'] ['created'] ['second_date_format'] = 'long';
	/* Veld: Inhoud: Bijgewerkte/laatste reactiedatum */
	$handler->display->display_options ['fields'] ['last_updated'] ['id'] = 'last_updated';
	$handler->display->display_options ['fields'] ['last_updated'] ['table'] = 'node_comment_statistics';
	$handler->display->display_options ['fields'] ['last_updated'] ['field'] = 'last_updated';
	$handler->display->display_options ['fields'] ['last_updated'] ['date_format'] = 'long';
	$handler->display->display_options ['fields'] ['last_updated'] ['second_date_format'] = 'long';
	/* Sorteercriterium: Inhoud: Datum van inzending */
	$handler->display->display_options ['sorts'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['order'] = 'DESC';
	$handler->display->display_options ['sorts'] ['created'] ['exposed'] = TRUE;
	$handler->display->display_options ['sorts'] ['created'] ['expose'] ['label'] = 'Datum';
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['sorts'] ['title'] ['expose'] ['label'] = 'Titel';
	/* Contextueel filter: Groep */
	$handler->display->display_options ['arguments'] ['tid'] ['id'] = 'tid';
	$handler->display->display_options ['arguments'] ['tid'] ['table'] = 'taxonomy_index';
	$handler->display->display_options ['arguments'] ['tid'] ['field'] = 'tid';
	$handler->display->display_options ['arguments'] ['tid'] ['ui_name'] = 'Groep';
	$handler->display->display_options ['arguments'] ['tid'] ['default_action'] = 'default';
	$handler->display->display_options ['arguments'] ['tid'] ['exception'] ['value'] = '';
	$handler->display->display_options ['arguments'] ['tid'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['tid'] ['title_enable'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['title'] = 'Vergadering - %1 (%2)';
	$handler->display->display_options ['arguments'] ['tid'] ['breadcrumb_enable'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['breadcrumb'] = 'Vergaderingen';
	$handler->display->display_options ['arguments'] ['tid'] ['default_argument_type'] = 'raw';
	$handler->display->display_options ['arguments'] ['tid'] ['default_argument_options'] ['index'] = '1';
	$handler->display->display_options ['arguments'] ['tid'] ['default_argument_options'] ['use_alias'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['tid'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['tid'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['tid'] ['specify_validation'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['validate'] ['type'] = 'taxonomy_term';
	$handler->display->display_options ['arguments'] ['tid'] ['validate_options'] ['vocabularies'] = array (
			'ikz' => 'ikz',
			'schoolgeld_kostenomschrijvingen' => 'schoolgeld_kostenomschrijvingen',
			'tags' => 'tags' 
	);
	$handler->display->display_options ['arguments'] ['tid'] ['validate_options'] ['type'] = 'convert';
	$handler->display->display_options ['arguments'] ['tid'] ['validate_options'] ['transform'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['validate'] ['fail'] = 'empty';
	$handler->display->display_options ['arguments'] ['tid'] ['add_table'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['reduce_duplicates'] = TRUE;
	/* Contextueel filter: Periodiciteit */
	$handler->display->display_options ['arguments'] ['tid_1'] ['id'] = 'tid_1';
	$handler->display->display_options ['arguments'] ['tid_1'] ['table'] = 'taxonomy_index';
	$handler->display->display_options ['arguments'] ['tid_1'] ['field'] = 'tid';
	$handler->display->display_options ['arguments'] ['tid_1'] ['ui_name'] = 'Periodiciteit';
	$handler->display->display_options ['arguments'] ['tid_1'] ['default_action'] = 'default';
	$handler->display->display_options ['arguments'] ['tid_1'] ['exception'] ['value'] = '%2A';
	$handler->display->display_options ['arguments'] ['tid_1'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['tid_1'] ['breadcrumb_enable'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid_1'] ['breadcrumb'] = 'Vergaderingen';
	$handler->display->display_options ['arguments'] ['tid_1'] ['default_argument_type'] = 'raw';
	$handler->display->display_options ['arguments'] ['tid_1'] ['default_argument_options'] ['index'] = '2';
	$handler->display->display_options ['arguments'] ['tid_1'] ['default_argument_options'] ['use_alias'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid_1'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['tid_1'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['tid_1'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['tid_1'] ['specify_validation'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid_1'] ['validate'] ['type'] = 'taxonomy_term';
	$handler->display->display_options ['arguments'] ['tid_1'] ['validate_options'] ['vocabularies'] = array (
			'ikz' => 'ikz',
			'schoolgeld_kostenomschrijvingen' => 'schoolgeld_kostenomschrijvingen',
			'tags' => 'tags' 
	);
	$handler->display->display_options ['arguments'] ['tid_1'] ['validate_options'] ['type'] = 'convert';
	$handler->display->display_options ['arguments'] ['tid_1'] ['validate_options'] ['transform'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid_1'] ['validate'] ['fail'] = 'empty';
	$handler->display->display_options ['arguments'] ['tid_1'] ['add_table'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid_1'] ['reduce_duplicates'] = TRUE;
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
			'article' => 'article',
			'page' => 'page' 
	);
	
	/* Display: Vergaderingen */
	$handler = $view->new_display ( 'page', 'Vergaderingen', 'vergaderingen_tagged' );
	$handler->display->display_options ['display_description'] = 'Overzicht van verslagen van vergaderingen, dienstmededelingen, evaluaties...';
	$handler->display->display_options ['path'] = 'vergaderingen/%/%';
	
	/* Display: Verslagen */
	$handler = $view->new_display ( 'page', 'Verslagen', 'verslagen_tagged' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Verslagen - %1';
	$handler->display->display_options ['display_description'] = 'Overzicht van verslagen van vergaderingen, dienstmededelingen, evaluaties...';
	$handler->display->display_options ['defaults'] ['empty'] = FALSE;
	/* Gedrag bij ontbreken van resultaten: Algemeen: Tekstveld */
	$handler->display->display_options ['empty'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['empty'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['empty'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['empty'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['empty'] ['area'] ['content'] = 'Er werden geen verslagen gevonden voor <strong>%1</strong>.';
	$handler->display->display_options ['empty'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['empty'] ['area'] ['tokenize'] = TRUE;
	$handler->display->display_options ['defaults'] ['arguments'] = FALSE;
	/* Contextueel filter: Inhoud: Heeft taxonomieterm-ID */
	$handler->display->display_options ['arguments'] ['tid'] ['id'] = 'tid';
	$handler->display->display_options ['arguments'] ['tid'] ['table'] = 'taxonomy_index';
	$handler->display->display_options ['arguments'] ['tid'] ['field'] = 'tid';
	$handler->display->display_options ['arguments'] ['tid'] ['default_action'] = 'default';
	$handler->display->display_options ['arguments'] ['tid'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['tid'] ['default_argument_type'] = 'taxonomy_tid';
	$handler->display->display_options ['arguments'] ['tid'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['tid'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['tid'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['tid'] ['specify_validation'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['validate'] ['type'] = 'taxonomy_term';
	$handler->display->display_options ['arguments'] ['tid'] ['validate_options'] ['vocabularies'] = array (
			'ikz' => 'ikz',
			'schoolgeld_kostenomschrijvingen' => 'schoolgeld_kostenomschrijvingen',
			'tags' => 'tags' 
	);
	$handler->display->display_options ['arguments'] ['tid'] ['validate_options'] ['type'] = 'convert';
	$handler->display->display_options ['arguments'] ['tid'] ['validate_options'] ['transform'] = TRUE;
	$handler->display->display_options ['arguments'] ['tid'] ['validate'] ['fail'] = 'empty';
	$handler->display->display_options ['arguments'] ['tid'] ['reduce_duplicates'] = TRUE;
	$handler->display->display_options ['path'] = 'verslagen/%';
	$translatables ['vergaderingen'] = array (
			t ( 'Master' ),
			t ( '%1 (%2)' ),
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
			t ( 'Resultaat @start - @end van @total' ),
			t ( 'Voor de vergadering <strong>%1</strong> werden geen verslagen gevonden waartoe je toegang hebt.' ),
			t ( 'auteur' ),
			t ( 'Bijgewerkte/laatste reactiedatum' ),
			t ( 'Datum' ),
			t ( 'Titel' ),
			t ( 'Alle' ),
			t ( 'Vergadering - %1 (%2)' ),
			t ( 'Vergaderingen' ),
			t ( 'Overzicht van verslagen van vergaderingen, dienstmededelingen, evaluaties...' ),
			t ( 'Verslagen' ),
			t ( 'Verslagen - %1' ),
			t ( 'Er werden geen verslagen gevonden voor <strong>%1</strong>.' ) 
	);
	$export ['vergaderingen'] = $view;
	
	return $export;
}
