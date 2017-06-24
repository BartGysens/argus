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
function argus_gebruikersregistratie_form_pupil_pre($form, &$form_state) {
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
	
	$query = 'SELECT title,title FROM {node} WHERE type = :bundle AND status = 1 ORDER BY title';
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
	
	$form ['algemeen'] ['gezin'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Informatie over de gezinssamenstelling' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	
	$form ['algemeen'] ['gezin'] ['gezinssituatie'] = array (
			'#title' => t ( 'Gezinssituatie' ),
			'#type' => 'select',
			'#options' => array (
					'twee-oudergezin' => t ( 'twee-oudergezin' ),
					'één-oudergezin' => t ( 'één-oudergezin' ),
					'co-ouderschap' => t ( 'co-ouderschap' ),
					'nieuw samengesteld gezin' => t ( 'nieuw samengesteld gezin' ),
					'pleeggezin' => t ( 'pleeggezin' ) 
			),
			'#default_value' => 'twee-oudergezin',
			'#required' => TRUE 
	);
	$form ['algemeen'] ['gezin'] ['gezinshoofd'] = array (
			'#title' => t ( 'Gezinshoofd' ),
			'#description' => 'vader / moeder / voogd / broer of zus / grootouders / ...',
			'#type' => 'textfield',
			'#size' => 50,
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
	
	$form ['leerling'] ['naam'] = array (
			'#title' => t ( 'Naam' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 100 
	);
	$form ['leerling'] ['voornaam'] = array (
			'#title' => t ( 'Voornaam' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 50 
	);
	
	$form ['leerling'] ['geslacht'] = array (
			'#title' => t ( 'Geslacht' ),
			'#type' => 'select',
			'#options' => array (
					'm' => t ( 'man' ),
					'f' => t ( 'vrouw' ) 
			),
			'#required' => TRUE 
	);
	
	$form ['leerling'] ['contact'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Contactinformatie' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	$form ['leerling'] ['contact'] ['emailadres'] = array (
			'#title' => t ( 'Emailadres' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	$form ['leerling'] ['contact'] ['telefoonnummer'] = array (
			'#title' => t ( 'Telefoonnummer' ),
			'#description' => t ( 'formaat' ) . ': 011 21 10 10',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	$form ['leerling'] ['contact'] ['mobielnummer'] = array (
			'#title' => t ( 'Mobielnummer' ),
			'#description' => t ( 'formaat' ) . ': 0475 21 10 10',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
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
	
	/* GEGEVENS VAN COACCOUNT 1 */
	$form ['co-account1'] = array (
			'#type' => 'fieldset',
			'#description' => '<div style="color: red; font-size: smaller;"><u>Opgelet</u>: deze persoon zal het dossier moeten ondertekenen! (bij een meerderjarige leerling hoeft er geen co-account ingevuld te worden, het mag natuurlijk wel)</div>',
			'#title' => t ( 'STAP 3 - Informatie over co-account 1' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$form ['co-account1'] ['type_coaccount1'] = array (
			'#title' => t ( 'Type' ),
			'#type' => 'select',
			'#options' => array (
					'Moeder' => t ( 'Moeder' ),
					'Vader' => t ( 'Vader' ),
					'Voogd' => t ( 'Voogd' ) 
			),
			'#required' => FALSE 
	);
	
	$form ['co-account1'] ['naam_coaccount1'] = array (
			'#title' => t ( 'Naam' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['co-account1'] ['voornaam_coac1'] = array (
			'#title' => t ( 'Voornaam' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	$form ['co-account1'] ['email_coaccount1'] = array (
			'#title' => t ( 'Emailadres' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	$form ['co-account1'] ['telnummer_coac1'] = array (
			'#title' => t ( 'Telefoonnummer' ),
			'#description' => t ( 'formaat' ) . ': 011 21 10 10',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	$form ['co-account1'] ['mobielnr_coac1'] = array (
			'#title' => t ( 'Mobielnummer' ),
			'#description' => t ( 'formaat' ) . ': 0475 11 21 21',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	
	$form ['co-account1'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_co-account1',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 3' ) 
	);
	
	/* GEGEVENS VAN COACCOUNT 2 */
	$form ['co-account2'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 4 - Informatie over co-account 2' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$form ['co-account2'] ['type_coaccount2'] = array (
			'#title' => t ( 'Type' ),
			'#type' => 'select',
			'#options' => array (
					'Moeder' => t ( 'Moeder' ),
					'Vader' => t ( 'Vader' ),
					'Voogd' => t ( 'Voogd' ) 
			),
			'#required' => FALSE 
	);
	
	$form ['co-account2'] ['naam_coaccount2'] = array (
			'#title' => t ( 'Naam' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['co-account2'] ['voornaam_coac2'] = array (
			'#title' => t ( 'Voornaam' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	$form ['co-account2'] ['email_coaccount2'] = array (
			'#title' => t ( 'Emailadres' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	$form ['co-account2'] ['telnummer_coac2'] = array (
			'#title' => t ( 'Telefoonnummer' ),
			'#description' => t ( 'formaat' ) . ': 011 21 10 10',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	$form ['co-account2'] ['mobielnr_coac2'] = array (
			'#title' => t ( 'Mobielnummer' ),
			'#description' => t ( 'formaat' ) . ': 0475 11 21 21',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	
	$form ['co-account2'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_co-account2',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 4' ) 
	);
	
	$form ['readyForSubmit'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 5 - Voorinschrijving afronden en verzenden' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	$form ['readyForSubmit'] ['submit'] = array (
			'#type' => 'submit',
			'#validate' => array (
					'argus_gebruikersregistratie_form_pupil_pre_validate' 
			),
			'#submit' => array (
					'argus_gebruikersregistratie_form_pupil_pre_submit' 
			),
			'#weight' => 10,
			'#value' => t ( 'Alle gegevens werden ingevuld en de leerling kan worden vooringeschreven' ) 
	);
	
	return $form;
}

/**
 * Form submission callback
 */
function argus_gebruikersregistratie_form_pupil_pre_validate($form, &$form_state) {
	if ($form_state ['values'] ['emailadres']) {
		if (! valid_email_address ( $form_state ['values'] ['emailadres'] )) {
			form_set_error ( 'emailadres', t ( 'Ongeldig e-mailadres: leerling.' ) );
		}
	}
	
	if ($form_state ['values'] ['email_coaccount1']) {
		if (! valid_email_address ( $form_state ['values'] ['email_coaccount1'] )) {
			form_set_error ( 'email_coaccount1', t ( 'Ongeldig e-mailadres: co-account 1.' ) );
		}
	}
	
	if ($form_state ['values'] ['email_coaccount2']) {
		if (! valid_email_address ( $form_state ['values'] ['email_coaccount2'] )) {
			form_set_error ( 'email_coaccount2', t ( 'Ongeldig e-mailadres: co-account 2.' ) );
		}
	}
}

/**
 * Form submission callback
 */
function argus_gebruikersregistratie_form_pupil_pre_submit($form, &$form_state) {
	$uid = null;
	
	// Check if a uid is set
	if (count ( $form_state ['build_info'] ['args'] )) {
		if (array_key_exists ( 'uid', $form_state ['build_info'] ['args'] [0] )) {
			if (is_numeric ( $form_state ['build_info'] ['args'] [0] ['uid'] )) {
				$uid = $form_state ['build_info'] ['args'] [0] ['uid'];
			}
		}
	}
	
	$account = argus_sanitize_string ( $form_state ['values'] ['voornaam'] ) . '.' . argus_sanitize_string ( $form_state ['values'] ['naam'] );
	
	// Check if username has already been taken
	$cntr = 1;
	$accountCheck = $account;
	do {
		$query = 'SELECT u.uid ' . 'FROM {users} AS u ' . 'WHERE u.name = :account AND uid != :uid';
		$checkAccounts = db_query ( $query, array (
				':account' => $accountCheck,
				':uid' => $uid 
		) )->rowCount ();
		if ($checkAccounts) {
			$accountCheck = $account . ($cntr ++);
		}
	} while ( $checkAccounts );
	$account = $accountCheck;
	
	$password = argus_engine_generate_password();
	
	// Start preparing data for saving this user or load the prefilled form
	$user_data = array (
			'name' => $account,
			'pass' => $password,
			'mail' => $form_state ['values'] ['emailadres'],
			'status' => 0,
			'signature_format' => 'full_html' 
	);
	if ($uid) {
		$user = user_load ( $uid );
	} else {
		$user = '';
	}
	foreach ( $form_state ['values'] as $field => $value ) {
		$user_data ['field_user_sms_' . $field] [LANGUAGE_NONE] [0] ['value'] = $value;
	}
	
	// Manipulate data for registration
	$user_data ['field_user_sms_basisrol'] [LANGUAGE_NONE] [0] ['value'] = '1'; // Leerling
	$user_data ['field_user_sms_ingeschreven_door'] [LANGUAGE_NONE] [0] ['value'] = argus_get_user_realname ( $form_state ['values'] ['inschrijver'] );
	
	// Generate some extra information fields for registration purposes
	$fields = array (
			'field_user_tmp_schj_inschr' => 'Schooljaar van (her-)inschrijving',
			'field_user_tmp_reg_class' => 'Inschrijving voor klas',
			'field_user_tmp_voorinschrijving' => 'Voorinschrijving',
			'field_user_tmp_reg_smartschool' => 'Registratie in Smartschool' 
	);
	foreach ( $fields as $f => $l ) {
		if (! field_info_field ( $f )) {
			$field = array (
					'field_name' => $f,
					'type' => 'text' 
			);
			field_create_field ( $field );
			
			// Create the instance on the bundle.
			$instance = array (
					'field_name' => $f,
					'entity_type' => 'user',
					'label' => $l,
					'bundle' => 'user',
					'settings' => array (
							'user_register_form' => 1 
					),
					'widget' => array (
							'type' => 'textfield',
							'weight' => 100, /* Add fields to back of Userform */
					),
					'display' => array (
							'default' => array (
									'type' => 'hidden' 
							) 
					) 
			);
			field_create_instance ( $instance );
		}
	}
	$user_data ['field_user_tmp_schj_inschr'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['schooljaar_inschrijving'];
	$user_data ['field_user_tmp_reg_class'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['klas'];
	$user_data ['field_user_tmp_voorinschrijving'] [LANGUAGE_NONE] [0] ['value'] = date ( 'Y-m-d' );
	
	// Process email-fields
	$user_data ['field_user_sms_emailadres'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['emailadres'];
	$user_data ['field_user_sms_email_coaccount1'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount1'];
	$user_data ['field_user_sms_email_coaccount2'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount2'];
	$user_data ['field_user_tmp_reg_smartschool'] [LANGUAGE_NONE] [0] ['value'] = 'unregistered';
	
	// Set data from co-accounts
	switch ($form_state ['values'] ['type_coaccount1']) {
		case 'Moeder' :
			$user_data ['field_user_sms_naam_moeder'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['naam_coaccount1'];
			$user_data ['field_user_sms_voornaam_moeder'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['voornaam_coac1'];
			$user_data ['field_user_sms_email_moeder'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount1'];
			
			$tel = implode ( ' - ', array (
					$form_state ['values'] ['telnummer_coac1'],
					$form_state ['values'] ['mobielnr_coac1'] 
			) );
			$user_data ['field_user_sms_telefoon_moeder'] [LANGUAGE_NONE] [0] ['value'] = $tel;
			break;
		case 'Vader' :
			$user_data ['field_user_sms_naam_vader'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['naam_coaccount1'];
			$user_data ['field_user_sms_voornaam_vader'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['voornaam_coac1'];
			$user_data ['field_user_sms_email_vader'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount1'];
			
			$tel = implode ( ' - ', array (
					$form_state ['values'] ['telnummer_coac1'],
					$form_state ['values'] ['mobielnr_coac1'] 
			) );
			$user_data ['field_user_sms_telefoon_vader'] [LANGUAGE_NONE] [0] ['value'] = $tel;
			break;
		case 'Voogd' :
			$user_data ['field_user_sms_naam_ouder_voogd'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['naam_coaccount1'];
			$user_data ['field_user_sms_voornaam_ouder_vo'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['voornaam_coac1'];
			break;
	}
	switch ($form_state ['values'] ['type_coaccount2']) {
		case 'Moeder' :
			$user_data ['field_user_sms_naam_moeder'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['naam_coaccount2'];
			$user_data ['field_user_sms_voornaam_moeder'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['voornaam_coac2'];
			$user_data ['field_user_sms_email_moeder'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount2'];
			
			$tel = implode ( ' - ', array (
					$form_state ['values'] ['telnummer_coac2'],
					$form_state ['values'] ['mobielnr_coac2'] 
			) );
			$user_data ['field_user_sms_telefoon_moeder'] [LANGUAGE_NONE] [0] ['value'] = $tel;
			break;
		case 'Vader' :
			$user_data ['field_user_sms_naam_vader'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['naam_coaccount2'];
			$user_data ['field_user_sms_voornaam_vader'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['voornaam_coac2'];
			$user_data ['field_user_sms_email_vader'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount2'];
			
			$tel = implode ( ' - ', array (
					$form_state ['values'] ['telnummer_coac2'],
					$form_state ['values'] ['mobielnr_coac2'] 
			) );
			$user_data ['field_user_sms_telefoon_vader'] [LANGUAGE_NONE] [0] ['value'] = $tel;
			break;
		case 'Voogd' :
			$user_data ['field_user_sms_naam_ouder_voogd'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['naam_coaccount2'];
			$user_data ['field_user_sms_voornaam_ouder_vo'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['voornaam_coac2'];
			break;
	}
	
	try {
		$u = user_save ( $user, $user_data );
		if ($u) {
			argus_report ( 'De gebruiker "%accountname" werd succesvol toegevoegd.', array (
					'%accountname' => $account 
			), 'status', 'argus' );
			
			if (module_exists ( 'argus_document_generator' )) {
				drupal_set_message ( '<a href="' . base_path () . 'documenten_generator.get/CNT_Voorinschrijvingsdossier/leerling=' . $u->uid . '">Klik hier om het dossier te downloaden en af te drukken</a>', 'status' );
			}
			
			drupal_set_message ( 'Nog enkele aandachtspunten:<ul><li>dit is een tijdelijke inschrijving, de leerling dient nog een volledig dossier in te dienen om ingeschreven te zijn voor de start van het schooljaar</li><li>informatie over de studietoelage</li></ul>', 'status' );
		}
	} catch ( PDOException $e ) {
		argus_report ( 'De gebruiker "%accountname" kon niet worden toegevoegd.<br />' . $e->getMessage (), array (
				'%accountname' => $account 
		), 'error', 'argus' );
	}
}



/**
 * Custom module functionality
 */
