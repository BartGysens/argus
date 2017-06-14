<?php
/**
 * @file
 * argus_soda.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_soda_field_group_info() {
	$field_groups = array ();
	
	$field_group = new stdClass ();
	$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
	$field_group->api_version = 1;
	$field_group->identifier = 'group_soda_rapport|node|lvs_soda|default';
	$field_group->group_name = 'group_soda_rapport';
	$field_group->entity_type = 'node';
	$field_group->bundle = 'lvs_soda';
	$field_group->mode = 'default';
	$field_group->parent_name = '';
	$field_group->data = array (
			'label' => 'Rapport',
			'weight' => '2',
			'children' => array (
					0 => 'field_soda_stiptheid',
					1 => 'field_soda_orde',
					2 => 'field_soda_discipline',
					3 => 'field_soda_attitude' 
			),
			'format_type' => 'fieldset',
			'format_settings' => array (
					'formatter' => 'collapsible',
					'instance_settings' => array (
							'description' => '',
							'classes' => 'group-soda-rapport field-group-fieldset',
							'id' => '' 
					) 
			) 
	);
	$field_groups ['group_soda_rapport|node|lvs_soda|default'] = $field_group;
	
	$field_group = new stdClass ();
	$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
	$field_group->api_version = 1;
	$field_group->identifier = 'group_soda_rapport|node|lvs_soda|form';
	$field_group->group_name = 'group_soda_rapport';
	$field_group->entity_type = 'node';
	$field_group->bundle = 'lvs_soda';
	$field_group->mode = 'form';
	$field_group->parent_name = '';
	$field_group->data = array (
			'label' => 'Rapport',
			'weight' => '2',
			'children' => array (
					0 => 'field_soda_stiptheid',
					1 => 'field_soda_orde',
					2 => 'field_soda_discipline',
					3 => 'field_soda_attitude' 
			),
			'format_type' => 'fieldset',
			'format_settings' => array (
					'formatter' => 'collapsible',
					'instance_settings' => array (
							'description' => '',
							'classes' => 'group-soda-rapport field-group-fieldset',
							'required_fields' => 1,
							'id' => '' 
					) 
			) 
	);
	$field_groups ['group_soda_rapport|node|lvs_soda|form'] = $field_group;
	
	// Translatables
	// Included for use with string extractors like potx.
	t ( 'Rapport' );
	
	return $field_groups;
}
