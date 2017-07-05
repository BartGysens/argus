<?php
/*
 * Copyright (C) 2016 bartgysens
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
 */

/**
 * Form preprocessor: pupil
 *
 * prefix fields = "field_user_sms_"
 */
function argus_gebruikersregistratie_form_pupil_renewal($form, &$form_state) {
	global $user;
	
	/* GEGEVENS VAN DE LEERLING */
	$form ['algemeen'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 1 - Om te starten' ),
			'#description' => 'Welkom op onze school!',
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$roles = user_roles ( TRUE, 'access argus_gebruikersregistratie content' );
	$query = 'SELECT u.uid, u.name FROM {users_roles} AS ur INNER JOIN {users} AS u ON u.uid = ur.uid INNER JOIN {role} AS r ON r.rid = ur.rid WHERE r.name IN (:roles)';
	$result = db_query ( $query, array (
			':roles' => $roles 
	) )->fetchAll ();
	$options = array ();
	foreach ( $result as $row ) {
		$options [$row->uid] = argus_get_user_realname ( $row->uid );
	}
	asort( $options );
	$form ['algemeen'] ['inschrijver'] = array (
			'#title' => t ( 'U wordt momenteel geholpen door...' ),
			'#type' => 'select',
			'#options' => $options,
			'#required' => TRUE,
			'#default_value' => $user->uid 
	);
	
	$y = date ( 'Y' );
	$options = array ();
	$options [$y . ' - ' . ($y + 1)] = $y . ' - ' . ($y + 1);
	$options [($y + 1) . ' - ' . ($y + 2)] = ($y + 1) . ' - ' . ($y + 2);
	$form ['algemeen'] ['schooljaar_inschrijving'] = array (
			'#title' => t ( 'Voor welk schooljaar geldt deze inschrijving?' ),
			'#type' => 'select',
			'#options' => $options,
			'#required' => TRUE,
			'#default_value' => ($y) . ' - ' . ($y + 1) 
	);
	
	$query = 'SELECT title,title FROM {node} WHERE type = :bundle ORDER BY title';
	$options = db_query ( $query, array (
			':bundle' => 'klas' 
	) )->fetchAllKeyed ();
	$form ['algemeen'] ['klas'] = array (
			'#title' => t ( 'In welke klas zal de leerling starten? (onder voorbehoud)' ),
			'#description' => 'indien een klas gesplitst moet worden, kan het dat de leerling in deel A of B terecht komt',
			'#type' => 'select',
			'#options' => $options,
			'#required' => TRUE 
	);
	
	$form ['algemeen'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_algemeen',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 1' ) 
	);
	
	/* GEGEVENS VAN DE LEERLING */
	$form ['leerling'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 2 - Informatie over de leerling' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$options = argus_get_user_select_options ( 'leerling', FALSE );
	$form ['leerling'] ['uid'] = array (
			'#title' => t ( 'Naam' ),
			'#type' => 'select',
			'#options' => $options,
			'#required' => TRUE 
	);
	
	$form ['leerling'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_leerling',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 2' ) 
	);
	
	$form ['readyForSubmit'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 3 - Herinschrijving afronden en verzenden' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	if (module_exists ( 'argus_sms_api' )) {
		$form ['readyForSubmit'] ['sendToSmartschool'] = array (
				'#title' => t ( 'de leerling in Smartschool registreren' ),
				'#description' => t ( 'als het dossier compleet is, dan kan je dit dossier rechtstreeks in Smartschool registreren (dit kan enkel indien een dossier volledig is - geen ontbrekende documenten of voorinschrijving)<br /><small><strong><u>opmerking</u>: deze optie mag enkel gebruikt worden vanaf de offici&euml;le opstart van het schooljaar, deze optie is enkel voor het leerlingensecretariaat of ILB beschikbaar</strong></small>' ),
				'#type' => 'checkbox',
				'#default_value' => FALSE,
				'#required' => FALSE 
		);
	}
	
	if (module_exists ( 'argus_document_generator' )) {
		$form ['readyForSubmit'] ['generateDocuments'] = array (
				'#title' => t ( 'het dossier afdrukken voor ondertekening' ),
				'#description' => t ( 'als het dossier compleet is, dan kan je dit dossier afdrukken zodat de leerling, ouders en/of verantwoordelijken de nodige documenten kunnen ondertekenen' ),
				'#type' => 'checkbox',
				'#default_value' => TRUE,
				'#required' => FALSE 
		);
	}
	$form ['readyForSubmit'] ['submit'] = array (
			'#type' => 'submit',
			'#validate' => array (
					'argus_gebruikersregistratie_form_pupil_renewal_validate' 
			),
			'#submit' => array (
					'argus_gebruikersregistratie_form_pupil_renewal_submit' 
			),
			'#weight' => 10,
			'#value' => t ( 'Alle gegevens werden ingevuld en de leerling kan worden heringeschreven' ) 
	);
	
	return $form;
}

/**
 * Form submission callback
 */
function argus_gebruikersregistratie_form_pupil_renewal_validate($form, &$form_state) {
}

/**
 * Form submission callback
 */
function argus_gebruikersregistratie_form_pupil_renewal_submit($form, &$form_state) {
	$uid = null;
	
	// Check if a uid is set
	if (count ( $form_state ['build_info'] ['args'] )) {
		if (array_key_exists ( 'uid', $form_state ['build_info'] ['args'] [0] )) {
			if (is_numeric ( $form_state ['build_info'] ['args'] [0] ['uid'] )) {
				$uid = $form_state ['build_info'] ['args'] [0] ['uid'];
			}
		}
	}
	
	if ($uid) {
		$user = user_load ( $uid );
	} else {
		$user = user_load ( $form_state ['values'] ['uid'] );
	}
	
	$account = $user->name;
	
	$user_data = array (
			'status' => 0 
	);
	
	// Manipulate data for registration
	$user_data ['field_user_sms_basisrol'] [LANGUAGE_NONE] [0] ['value'] = '1'; // Leerling
	$user_data ['field_user_sms_ingeschreven_door'] [LANGUAGE_NONE] [0] ['value'] = argus_get_user_realname ( $form_state ['values'] ['inschrijver'] );
	
	// Generate some extra information fields for registration purposes
	$user_data ['field_user_tmp_schj_inschr'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['schooljaar_inschrijving'];
	$user_data ['field_user_tmp_reg_class'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['klas'];
	$user_data ['field_user_tmp_reg_smartschool'] [LANGUAGE_NONE] [0] ['value'] = 'unregistered';
	
	try {
		$u = user_save ( $user, $user_data );
		if ($u) {
			argus_report ( 'De gebruiker "%accountname" werd succesvol heringeschreven.', array (
					'%accountname' => $account
			), 'status', 'argus' );
			
			if (module_exists ( 'argus_sms_api' )) {
				if ($form_state ['values'] ['sendToSmartschool'] == TRUE) {
					argus_sms_add_user_to_smartschool ( $u->uid );
				}
			}
			
			if (module_exists ( 'argus_document_generator' )) {
				if ($form_state ['values'] ['generateDocuments'] == TRUE) {
					drupal_set_message ( '<a href="' . base_path () . 'documenten_generator.get/CNT_Inschrijvingsdossier/leerling=' . $u->uid . '">Klik hier om het dossier te downloaden en af te drukken</a>', 'status' );
				}
			}
			
			drupal_set_message ( 'Nog enkele aandachtspunten:<ul><li>inlichtingen over de eerste schooldagen</li><li>informatie over de studietoelage</li></ul>', 'status' );
		}
	} catch ( PDOException $e ) {
		argus_report ( 'De gebruiker "%accountname" kon niet worden heringeschreven.<br />' . $e->getMessage (), array (
				'%accountname' => $account 
		), 'error', 'argus' );
	}
}



/**
 * Custom module functionality
 */
