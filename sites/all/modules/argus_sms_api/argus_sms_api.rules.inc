<?php
/*
 * Copyright (C) 2014 bartgysens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/* Drupal Hooks */

/**
 * Implement hook_rules_action_info().
 */
function argus_sms_api_rules_action_info() {
	return array (
		'argus_sms_api_send_msg' => array (
			'label' => t('Stuur een Smartschool-bericht'),
			'group' => t('System'),
			'module' => 'argus_sms_api',
			'parameter' => array (
				'key' => array(
					'type' => 'text',
					'label' => t('Sleutel'),
					'description' => t('Een sleutel die het bericht intern identificeert.'),
					'optional' => TRUE,
				),
				'to' => array (
					'type' => 'text',
					'label' => t('Naar'),
					'description' => t('De ontvanger van het bericht.' ),
				),
				'co' => array(
					'type' => 'boolean',
					'label' => t('Co-account'),
					'description' => t('Is het bericht bestemd voor de co-account?' ),
				),
				'from' => array (
					'type' => 'text',
					'label' => t('Van'),
					'description' => t('De verzender van het bericht.'),
				),
				'subject' => array (
					'type' => 'text',
					'label' => t('Onderwerp'),
					'description' => t('Het onderwerp van het bericht dat getoond worden in de berichtenlijst.'),
					'translatable' => TRUE,
				),
				'body' => array (
					'type' => 'text',
					'label' => t('Body' ),
					'description' => t ( 'De inhoud van het bericht. Dit mag opgemaakt worden in HTML-formaat.'),
					'sanitize' => TRUE,
					'optional' => TRUE,
					'translatable' => TRUE,
				),
				'attachments' => array (
					'type' => 'text',
					'label' => t('Bijlage(n)'),
					'description' => t ('De bijlagen bij het bericht, één bestand per regel - verwijzend van "/sites/default/files/", bvb. \'images/mijnbijlage.png\' zonder de aanhalingstekens.'),
					'optional' => TRUE,
				),
			),
		),
		'argus_sms_api_send_msg_to_users_of_role' => array(
			'label' => t('Stuur een Smartschool-bericht naar gebruikers met een specifieke rol'),
			'group' => t('System'),
			'module' => 'argus_sms_api',
			'parameter' => array(
				'key' => array(
					'type' => 'text',
					'label' => t('Sleutel'),
					'description' => t('Een sleutel die het bericht intern identificeert.'),
					'optional' => TRUE,
				),
				'roles' => array(
					'type' => 'list<integer>',
					'label' => t('Roles'),
					'options list' => 'entity_metadata_user_roles',
					'description' => t('Selecteer de rollen waarvan de gebruikers een bericht moeten ontvangen.'),
				),
				'co' => array(
					'type' => 'boolean',
					'label' => t('Co-account'),
					'description' => t('Is het bericht bestemd voor de co-account?' ),
				),
				'from' => array (
					'type' => 'text',
					'label' => t('Van'),
					'description' => t('De verzender van het bericht.'),
				),
				'subject' => array (
					'type' => 'text',
					'label' => t('Onderwerp'),
					'description' => t('Het onderwerp van het bericht dat getoond worden in de berichtenlijst.'),
					'translatable' => TRUE,
				),
				'body' => array (
					'type' => 'text',
					'label' => t('Body' ),
					'description' => t ( 'De inhoud van het bericht. Dit mag opgemaakt worden in HTML-formaat.'),
					'sanitize' => TRUE,
					'optional' => TRUE,
					'translatable' => TRUE,
				),
				'attachments' => array (
					'type' => 'text',
					'label' => t('Bijlage(n)'),
					'description' => t ('De bijlagen bij het bericht, één bestand per regel - verwijzend van "/sites/default/files/", bvb. \'images/mijnbijlage.png\' zonder de aanhalingstekens.'),
					'optional' => TRUE,
				),
			),
		),
	);
}