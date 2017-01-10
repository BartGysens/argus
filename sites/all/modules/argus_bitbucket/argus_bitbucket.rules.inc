<?php
/*
 * Copyright (C) 2017 bartgysens
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
function argus_bitbucket_rules_action_info() {
	return array (
		'argus_bitbucket_sendIssue' => array (
			'label' => t('Stuur een Bitbucket issue'),
			'group' => t('System'),
			'module' => 'argus_bitbucket',
			'parameter' => array (
				'bugformtitle' => array(
					'type' => 'text',
					'label' => t('Onderwerp'),
					'description' => t('Het onderwerp van je ticket.'),
				),
				'bugformdescription' => array (
					'type' => 'text',
					'label' => t('Details'),
					'description' => t('De volledige inhoud van de beschrijving van de melding.' ),
				),
				'bugformcomponent' => array (
					'type' => 'text',
					'label' => t('Component'),
					'description' => t('Het onderdeel waarop deze melding van toepassing is.'),
					'optional' => TRUE,
				),
				'bugformuser' => array (
					'type' => 'text',
					'label' => t('Gebruiker (email)'),
					'description' => t('Geef het emailadres van de gebruiker die de melding maakt.' ),
				),
			),
		),
	);
}