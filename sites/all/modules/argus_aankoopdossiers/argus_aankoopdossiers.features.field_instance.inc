<?php
/**
 * @file
 * argus_aankoopdossiers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_aankoopdossiers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_aankoopdossier-comment_body'.
  $field_instances['comment-comment_node_aankoopdossier-comment_body'] = array(
    'bundle' => 'comment_node_aankoopdossier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-body'.
  $field_instances['node-aankoopdossier-body'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Reden voor aankoop',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_bestelbon'.
  $field_instances['node-aankoopdossier-field_aankoop_bestelbon'] = array(
    'bundle' => 'aankoopdossier',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_bestelbon',
    'label' => 'Bestelbon',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'aankoopdossiers',
      'file_extensions' => 'txt pdf doc docx xls xlsx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_budget'.
  $field_instances['node-aankoopdossier-field_aankoop_budget'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_budget',
    'label' => 'Budget',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_conclusie'.
  $field_instances['node-aankoopdossier-field_aankoop_conclusie'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => array(
      0 => array(
        'value' => '<p>In acht name van het prijsverschil, de gratis levering, opleiding, onderhoud, ... concluderen wij dat ... het beste aanbod heeft.</p>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_conclusie',
    'label' => 'Conclusie',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_factuurbedrag'.
  $field_instances['node-aankoopdossier-field_aankoop_factuurbedrag'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_factuurbedrag',
    'label' => 'Factuurbedrag',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_leverancier'.
  $field_instances['node-aankoopdossier-field_aankoop_leverancier'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<u>FIRMANAAM</u>
Straat nr/bus
Postnr & gemeente
Telefoonnummer
Emailadres',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_leverancier',
    'label' => 'Leverancier',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_leveranciers'.
  $field_instances['node-aankoopdossier-field_aankoop_leveranciers'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Als de leverancier niet in de lijst staat, kan je hem hier <a href="/node/add/organisatie" target="_blank">toevoegen</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'links' => 1,
          'use_content_language' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_leveranciers',
    'label' => 'Leveranciers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_offerte'.
  $field_instances['node-aankoopdossier-field_aankoop_offerte'] = array(
    'bundle' => 'aankoopdossier',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_offerte',
    'label' => 'Offerte',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'aankoopdossiers',
      'file_extensions' => 'txt doc docx pdf ppt pptx xls xlsx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-aankoopdossier-field_aankoop_preventieregister'.
  $field_instances['node-aankoopdossier-field_aankoop_preventieregister'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_preventieregister',
    'label' => 'Opnemen in het preventieregister',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_status'.
  $field_instances['node-aankoopdossier-field_aankoop_status'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => array(
      0 => array(
        'value' => 'Nieuw dossier',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_vakgroep'.
  $field_instances['node-aankoopdossier-field_aankoop_vakgroep'] = array(
    'bundle' => 'aankoopdossier',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_vakgroep',
    'label' => 'Vakgroep',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-aankoopdossier-field_aankoop_vergelijking'.
  $field_instances['node-aankoopdossier-field_aankoop_vergelijking'] = array(
    'bundle' => 'aankoopdossier',
    'default_value' => array(
      0 => array(
        'value' => '<table border="1" cellpadding="5" cellspacing="0" style="width:100%">
	<tbody>
		<tr>
			<td style="background-color:rgb(220, 220, 220)"><strong>BETREFT</strong></td>
			<td style="background-color:rgb(220, 220, 220)"><strong>FIRMA A</strong></td>
			<td style="background-color:rgb(220, 220, 220)"><strong>FIRMA B</strong></td>
			<td style="background-color:rgb(220, 220, 220)"><strong>FIRMA C</strong></td>
		</tr>
		<tr>
			<td style="background-color:rgb(220, 220, 220)">ITEM 1</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td style="background-color:rgb(220, 220, 220)">ITEM 2</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td style="background-color:rgb(220, 220, 220)"><em>onderhoud</em></td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td style="background-color:rgb(220, 220, 220)"><em>opleiding</em></td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td style="background-color:rgb(220, 220, 220)"><em>levering</em></td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td style="background-color:rgb(220, 220, 220)"><strong>TOTAAL</strong></td>
			<td style="background-color:rgb(220, 220, 220)">&nbsp;</td>
			<td style="background-color:rgb(220, 220, 220)">&nbsp;</td>
			<td style="background-color:rgb(220, 220, 220)">&nbsp;</td>
		</tr>
	</tbody>
</table>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aankoop_vergelijking',
    'label' => 'Vergelijking',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<u>FIRMANAAM</u>
Straat nr/bus
Postnr & gemeente
Telefoonnummer
Emailadres');
  t('Als de leverancier niet in de lijst staat, kan je hem hier <a href="/node/add/organisatie" target="_blank">toevoegen</a>.');
  t('Bestelbon');
  t('Budget');
  t('Comment');
  t('Conclusie');
  t('Factuurbedrag');
  t('Leverancier');
  t('Leveranciers');
  t('Offerte');
  t('Opnemen in het preventieregister');
  t('Reden voor aankoop');
  t('Status');
  t('Vakgroep');
  t('Vergelijking');

  return $field_instances;
}
