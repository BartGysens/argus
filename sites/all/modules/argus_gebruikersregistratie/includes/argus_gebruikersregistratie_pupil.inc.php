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
function argus_gebruikersregistratie_form_pupil($form, &$form_state) {
	global $user;
	
	require_once 'argus_gebruikersregistratie_options_nationaliteit.inc.php';
	$optionsNationality = argus_gebruikersregistratie_form_field_nationality ();
	
	require_once 'argus_gebruikersregistratie_options_religion.inc.php';
	$optionsReligion = argus_gebruikersregistratie_form_field_religion ();
	
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
	$form ['leerling'] ['extravoornamen'] = array (
			'#title' => t ( 'Extra voornamen' ),
			'#type' => 'textfield',
			'#required' => FALSE,
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
	
	$form ['leerling'] ['nationaliteit'] = array (
			'#title' => t ( 'Nationaliteit' ),
			'#type' => 'select',
			'#options' => $optionsNationality,
			'#required' => TRUE,
			'#default_value' => 150 
	);
	
	$form ['leerling'] ['rijksregisternumm'] = array (
			'#title' => t ( 'Rijksregisternummer' ),
			'#description' => t ( 'formaat: 00.00.00-000.00' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 50 
	);
	
	$form ['leerling'] ['adres'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Adres' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	$form ['leerling'] ['adres'] ['straat'] = array (
			'#title' => t ( 'Straat' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 100 
	);
	$form ['leerling'] ['adres'] ['huisnummer'] = array (
			'#title' => t ( 'Huisnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 5 
	);
	$form ['leerling'] ['adres'] ['busnummer'] = array (
			'#title' => t ( 'Busnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 5 
	);
	$form ['leerling'] ['adres'] ['postcode'] = array (
			'#title' => t ( 'Postcode' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 10 
	);
	$form ['leerling'] ['adres'] ['woonplaats'] = array (
			'#title' => t ( 'Woonplaats' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 100 
	);
	$form ['leerling'] ['adres'] ['woonplaats___deel'] = array (
			'#title' => t ( 'Woonplaats - deelgemeente' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['leerling'] ['adres'] ['land'] = array (
			'#title' => t ( 'Land' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#default_value' => t ( 'België' ),
			'#size' => 10 
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
	
	$form ['leerling'] ['geboortegegevens'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Geboortegegevens' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	$form ['leerling'] ['geboortegegevens'] ['geboortedatum'] = array (
			'#title' => t ( 'Geboortedatum' ),
			'#type' => 'date_select',
			'#date_format' => 'd F Y',
			'#default_value' => date ( 'Y-m-d' ),
			'#date_year_range' => '-30:-10',
			'#date_label_position' => 'within',
			'#required' => TRUE 
	);
	$form ['leerling'] ['geboortegegevens'] ['geboorteplaats'] = array (
			'#title' => t ( 'Geboorteplaats' ),
			'#type' => 'textfield',
			'#required' => TRUE 
	);
	$form ['leerling'] ['geboortegegevens'] ['geboorteland'] = array (
			'#title' => t ( 'Geboorteland' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#default_value' => t ( 'België' ) 
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
	
	/* GEGEVENS VAN DE VADER */
	$form ['vader'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 5 - Informatie over de vader' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$form ['vader'] ['nationaliteit_vad'] = array (
			'#title' => t ( 'Nationaliteit' ),
			'#type' => 'select',
			'#options' => $optionsNationality,
			'#required' => FALSE,
			'#default_value' => 150 
	);
	$form ['vader'] ['geboortedatum_vad'] = array (
			'#title' => t ( 'Geboortedatum' ),
			'#type' => 'date_select',
			'#date_format' => 'd F Y',
			'#default_value' => date ( 'Y-m-d' ),
			'#date_year_range' => '-90:-20',
			'#date_label_position' => 'within',
			'#required' => FALSE 
	);
	
	$form ['vader'] ['telefoon_werk_vad'] = array (
			'#title' => t ( 'Telefoonnummer (werk)' ),
			'#description' => t ( 'formaat' ) . ': 011 21 10 10',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	
	$form ['vader'] ['adres'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Adres' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	$form ['vader'] ['adres'] ['copy'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_vader_copy',
					'onclick' => 'return false' 
			),
			'#value' => t ( 'Gegevens overnemen van de leerling' ) 
	);
	$form ['vader'] ['adres'] ['straat_vader'] = array (
			'#title' => t ( 'Straat' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['vader'] ['adres'] ['huisnummer_vader'] = array (
			'#title' => t ( 'Huisnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 5 
	);
	$form ['vader'] ['adres'] ['busnummer_vader'] = array (
			'#title' => t ( 'Busnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 5 
	);
	$form ['vader'] ['adres'] ['postcode_vader'] = array (
			'#title' => t ( 'Postcode' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 10 
	);
	$form ['vader'] ['adres'] ['stad_gemeente_vad'] = array (
			'#title' => t ( 'Woonplaats' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	
	$form ['vader'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_vader',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 5' ) 
	);
	
	/* GEGEVENS VAN DE MOEDER */
	$form ['moeder'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 6 - Informatie over de moeder' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$form ['moeder'] ['nationaliteit_moe'] = array (
			'#title' => t ( 'Nationaliteit' ),
			'#type' => 'select',
			'#options' => $optionsNationality,
			'#required' => FALSE,
			'#default_value' => 150 
	);
	$form ['moeder'] ['geboortedatum_moe'] = array (
			'#title' => t ( 'Geboortedatum' ),
			'#type' => 'date_select',
			'#date_format' => 'd F Y',
			'#default_value' => date ( 'Y-m-d' ),
			'#date_year_range' => '-90:-20',
			'#date_label_position' => 'within',
			'#required' => FALSE 
	);
	
	$form ['moeder'] ['telefoon_werk_moe'] = array (
			'#title' => t ( 'Telefoonnummer (werk)' ),
			'#description' => t ( 'formaat' ) . ': 011 21 10 10',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	
	$form ['moeder'] ['adres'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Adres' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	$form ['moeder'] ['adres'] ['copy'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_moeder_copy',
					'onclick' => 'return false' 
			),
			'#value' => t ( 'Gegevens overnemen van de leerling' ) 
	);
	$form ['moeder'] ['adres'] ['straat_moeder'] = array (
			'#title' => t ( 'Straat' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['moeder'] ['adres'] ['huisnummer_moeder'] = array (
			'#title' => t ( 'Huisnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 5 
	);
	$form ['moeder'] ['adres'] ['busnummer_moeder'] = array (
			'#title' => t ( 'Busnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 5 
	);
	$form ['moeder'] ['adres'] ['postcode_moeder'] = array (
			'#title' => t ( 'Postcode' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 10 
	);
	$form ['moeder'] ['adres'] ['stad_gemeente_moe'] = array (
			'#title' => t ( 'Woonplaats' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	
	$form ['moeder'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_moeder',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 6' ) 
	);
	
	/* BEGINSITUATIE */
	$form ['beginsituatie'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 7 - Beginsituatie van de leerling' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Schoolloopbaan' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Vorige school' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE 
	);
	
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] ['sl_schooljaar'] = array (
			'#title' => t ( 'Schooljaar' ),
			'#description' => t ( 'formaat' ) . ': 2012-2013',
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 15 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] ['sl_leerjaar_en_st'] = array (
			'#title' => t ( 'Leerjaar en studierichting' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] ['sl_school'] = array (
			'#title' => t ( 'School' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] ['sl_stad_school'] = array (
			'#title' => t ( 'Gemeente' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 50 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] ['sl_attest'] = array (
			'#title' => t ( 'Attest' ),
			'#type' => 'select',
			'#options' => array (
					t ( 'A-attest' ) => t ( 'A-attest' ),
					t ( 'B-attest' ) => t ( 'B-attest' ),
					t ( 'C-attest' ) => t ( 'C-attest' ),
					t ( 'Ander attest - controleer conformiteit' ) => t ( 'Ander attest - controleer conformiteit' ) 
			),
			'#required' => TRUE 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject1'] ['sl_clausulering'] = array (
			'#title' => t ( 'Clausulering (enkel bij een B-attest)' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	
	/*
	 * M-DECREET?
	 * field_user_sms_b_getuigschrift
	 * field_user_sms_b_schooljaar
	 * field_user_sms_b_leerjaar
	 * field_user_sms_b_resultaat
	 * field_user_sms_b_taal
	 * field_user_sms_b_rekenen
	 * field_user_sms_b_baso_fiche
	 * field_user_sms_b_kopie_baso_fich
	 * field_user_sms_b_type_bo
	 * field_user_sms_b_naam_school
	 * field_user_sms_b_gemeente_school
	 */
	
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject2'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Vorige school (2)' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject2'] ['sl2_schooljaar'] = array (
			'#title' => t ( 'Schooljaar' ),
			'#description' => t ( 'formaat' ) . ': 2012-2013',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject2'] ['sl2_leerjaar_en_s'] = array (
			'#title' => t ( 'Leerjaar en studierichting' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject2'] ['sl2_school'] = array (
			'#title' => t ( 'School' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject2'] ['sl2_stad_school'] = array (
			'#title' => t ( 'Gemeente' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50 
	);
	$form ['beginsituatie'] ['schoolloopbaan'] ['traject2'] ['sl2_attest'] = array (
			'#title' => t ( 'Attest' ),
			'#type' => 'select',
			'#options' => array (
					t ( 'A-attest' ) => t ( 'A-attest' ),
					t ( 'B-attest' ) => t ( 'B-attest' ),
					t ( 'C-attest' ) => t ( 'C-attest' ),
					t ( 'Ander attest - controleer conformiteit' ) => t ( 'Ander attest - controleer conformiteit' ) 
			),
			'#required' => FALSE 
	);
	
	$form ['beginsituatie'] ['medische gegevens'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Medische gegevens' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['allergie'] = array (
			'#title' => t ( 'Allergie' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['astma'] = array (
			'#title' => t ( 'Astma' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['concentratieprobl'] = array (
			'#title' => t ( 'Concentratieproblemen' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['diabetes'] = array (
			'#title' => t ( 'Diabetes' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['epilepsie'] = array (
			'#title' => t ( 'Epilepsie' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['andere_mp'] = array (
			'#title' => t ( 'Andere medische problemen' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['diagnose_speciali'] = array (
			'#title' => t ( 'Is er een diagnose van een specialist?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#states' => array (
					'visible' => array (
							array (
									array (
											':input[name="astma"]' => array (
													'value' => 'Ja' 
											) 
									),
									'or',
									array (
											':input[name="allergie"]' => array (
													'value' => 'Ja' 
											) 
									),
									'or',
									array (
											':input[name="epilepsie"]' => array (
													'value' => 'Ja' 
											) 
									),
									'or',
									array (
											':input[name="diabetes"]' => array (
													'value' => 'Ja' 
											) 
									),
									'or',
									array (
											':input[name="concentratieprobl"]' => array (
													'value' => 'Ja' 
											) 
									),
									'or',
									array (
											':input[name="andere_mp"]' => array (
													'!value' => '' 
											) 
									) 
							) 
					) 
			),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['specialist'] = array (
			'#title' => t ( 'Naam van de specialist' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100,
			'#states' => array (
					'visible' => array (
							':input[name="diagnose_speciali"]' => array (
									'value' => 'Ja' 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['opvolging_voorzie'] = array (
			'#title' => t ( 'Is er opvolging voorzien?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE,
			'#states' => array (
					'visible' => array (
							':input[name="diagnose_speciali"]' => array (
									'value' => 'Ja' 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['doktersattest_'] = array (
			'#title' => t ( 'Is er een doktersattest?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE,
			'#states' => array (
					'visible' => array (
							':input[name="diagnose_speciali"]' => array (
									'visible' => TRUE 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['da_voor_hoe_lang_'] = array (
			'#title' => t ( 'Hoe lang is het doktersattest geldig?' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50,
			'#states' => array (
					'visible' => array (
							':input[name="doktersattest_"]' => array (
									'value' => 'Ja' 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['medicatie_'] = array (
			'#title' => t ( 'Neem de leerling medicatie?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['welke_en_hoeveel_'] = array (
			'#title' => t ( 'Welke medicatie en hoeveel is de dosis?' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100,
			'#states' => array (
					'visible' => array (
							':input[name="medicatie_"]' => array (
									'value' => 'Ja' 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['medische gegevens'] ['ingeent_tegen_kle'] = array (
			'#title' => t ( 'Is de leerling ingeënt tegen de klem?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['wanneer_ingeent_t'] = array (
			'#title' => t ( 'Wanneer?' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50,
			'#states' => array (
					'visible' => array (
							':input[name="ingeent_tegen_kle"]' => array (
									'value' => 'Ja' 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['medische gegevens'] ['aandachtspunten_p'] = array (
			'#title' => t ( 'Zijn er aandachtspunten voor de lessen praktijk of LO?' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['attest_lo_'] = array (
			'#title' => t ( 'Is er een attest voor LO?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	
	$form ['beginsituatie'] ['medische gegevens'] ['huisdokter'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Huisdokter' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$form ['beginsituatie'] ['medische gegevens'] ['huisdokter'] ['huisdokter'] = array (
			'#title' => t ( 'Naam' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['huisdokter'] ['huisdokter_woonpl'] = array (
			'#title' => t ( 'Woonplaats' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['medische gegevens'] ['huisdokter'] ['telefoon_huisdokt'] = array (
			'#title' => t ( 'Telefoonnummer' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#description' => t ( 'formaat' ) . ': 011 21 10 10 (of mobielnummer)',
			'#size' => 15 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'Leermoeilijkheden' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['adhd'] = array (
			'#title' => t ( 'ADHD' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['ass__autisme_spec'] = array (
			'#title' => t ( 'ASS (Autisme Spectrum Stoornis)' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['dyslexie'] = array (
			'#title' => t ( 'Dyslexie' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['dyscalculie'] = array (
			'#title' => t ( 'Dyscalculie' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['nld__non_verbale_'] = array (
			'#title' => t ( 'NLD (non-verbale leerstoornis)' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['andere_ls'] = array (
			'#title' => t ( 'Andere leerstoornissen' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['attest_leerstoorn'] = array (
			'#title' => t ( 'Is er een attest van deze leerstoornis(sen)?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE,
			'#states' => array (
					'visible' => array (
							array (
									array (
											':input[name="dyslexie"]' => array (
													'value' => t ( 'Ja' ) 
											) 
									),
									'or',
									array (
											':input[name="dyscalculie"]' => array (
													'value' => t ( 'Ja' ) 
											) 
									),
									'or',
									array (
											':input[name="adhd"]' => array (
													'value' => t ( 'Ja' ) 
											) 
									),
									'or',
									array (
											':input[name="ass__autisme_spec"]' => array (
													'value' => t ( 'Ja' ) 
											) 
									),
									'or',
									array (
											':input[name="nld__non_verbale_"]' => array (
													'value' => t ( 'Ja' ) 
											) 
									),
									'or',
									array (
											':input[name="andere_ls"]' => array (
													'!value' => '' 
											) 
									) 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['attest_ingeleverd'] = array (
			'#title' => t ( 'Werd het attest ingeleverd? (kopie bijvoegen)' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE,
			'#states' => array (
					'visible' => array (
							':input[name="attest_leerstoorn"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['diagnose_deskundi'] = array (
			'#title' => t ( 'Is er een diagnose van een deskundige?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE,
			'#states' => array (
					'visible' => array (
							':input[name="attest_leerstoorn"]' => array (
									'visible' => TRUE 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['deskundige'] = array (
			'#title' => t ( 'Naam van de deskundige' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100,
			'#states' => array (
					'visible' => array (
							':input[name="diagnose_deskundi"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['gon'] = array (
			'#title' => t ( 'Krijgt de leerling GON-begeleiding?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['gon_ja'] ['gon_begeleiding__'] = array (
			'#title' => t ( 'Aantal jaren GON-begeleiding gehad' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100,
			'#states' => array (
					'visible' => array (
							':input[name="gon"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['gon_begeleider'] = array (
			'#title' => t ( 'Naam van de GON-begeleider' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100,
			'#states' => array (
					'visible' => array (
							':input[name="gon"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['ondersteunende_maatregelen'] = array (
			'#title' => t ( 'Zijn er bijkomende ondersteunende maatregelen nodig? Zo ja, welke?' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buitengewoon_onde'] = array (
			'#title' => t ( 'Heeft de leerling ooit BuSO gevolgd?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] = array (
			'#type' => 'container',
			'#states' => array (
					'visible' => array (
							':input[name="buitengewoon_onde"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['copy1'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buso1_copy',
					'onclick' => 'return false' 
			),
			'#value' => t ( 'Gegevens overnemen van vorige school (1)' ) 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['copy2'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buso2_copy',
					'onclick' => 'return false' 
			),
			'#value' => t ( 'Gegevens overnemen van vorige school (2)' ) 
	);
	
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['periode_buo'] = array (
			'#title' => t ( 'Schooljaar' ),
			'#description' => t ( 'formaat' ) . ': 2012-2013',
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 15 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['school_buo'] = array (
			'#title' => t ( 'School' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['type_buo'] = array (
			'#title' => t ( 'Leerjaar en studierichting' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 100 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['verslag_clb'] = array (
			'#title' => t ( 'Is er een verslag van het CLB?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE 
	);
	$form ['beginsituatie'] ['leermoeilijkheden'] ['buso'] ['inschrijving_onde'] = array (
			'#title' => t ( 'Is dit een inschrijving onder ontbindende voorwaarden?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => FALSE,
			'#states' => array (
					'visible' => array (
							':input[name="verslag_clb"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	
	$form ['beginsituatie'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_beginsituatie',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 7' ) 
	);
	
	/* PRAKTISCHE GEGEVENS */
	$form ['praktisch'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 8 - Praktische informatie' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	
	$form ['praktisch'] ['soortleerling'] = array (
			'#title' => t ( 'Type leerling' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Vrije leerling' ) => t ( 'Vrije leerling' ),
					t ( 'Regelmatig financierbaar' ) => t ( 'Regelmatig financierbaar' ),
					t ( 'Regelmatig niet-financierbaar' ) => t ( 'Regelmatig niet-financierbaar' ),
					t ( 'Onder voorbehoud aanvaarde leerling' ) => t ( 'Onder voorbehoud aanvaarde leerling' ) 
			),
			'#default_value' => t ( 'Regelmatig financierbaar' ),
			'#required' => TRUE 
	);
	
	$form ['praktisch'] ['godsdienstkeuze'] = array (
			'#title' => t ( 'Keuze levensbeschouwelijk vak' ),
			'#type' => 'select',
			'#options' => $optionsReligion,
			'#required' => TRUE 
	);
	
	$form ['praktisch'] ['intern_extern_'] = array (
			'#title' => t ( 'Verblijft de leerling in een internaat?' ),
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => TRUE 
	);
	$form ['praktisch'] ['internaat'] = array (
			'#title' => t ( 'De naam van het internaat' ),
			'#type' => 'textfield',
			'#required' => FALSE,
			'#size' => 50,
			'#states' => array (
					'visible' => array (
							':input[name="intern_extern_"]' => array (
									'value' => t ( 'Ja' ) 
							) 
					) 
			) 
	);
	
	$form ['praktisch'] ['afstand_naar_huis'] = array (
			'#title' => t ( 'Afstand naar huis' ),
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 10 
	);
	$form ['praktisch'] ['vervoersmiddel'] = array (
			'#title' => t ( 'Vervoersmiddel' ),
			'#type' => 'select',
			'#options' => array (
					t ( 'te voet' ) => t ( 'te voet' ),
					t ( 'met de fiets' ) => t ( 'met de fiets' ),
					t ( 'met de bus' ) => t ( 'met de bus' ),
					t ( 'met de auto' ) => t ( 'met de auto' ),
					t ( 'met de trein' ) => t ( 'met de trein' ) 
			),
			'#required' => TRUE 
	);
	$form ['praktisch'] ['toelating_te_laat'] = array (
			'#title' => t ( 'De leerling krijgt de toelating om later toe te komen op school (ten gevolge van een moeilijke verbinding met het openbaar vervoer)' ),
			'#description' => 'het leerlingensecretariaat zal dit nakijken en eventueel aanpassen',
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => TRUE 
	);
	$form ['praktisch'] ['toelating_vroeger'] = array (
			'#title' => t ( 'De leerling krijgt de toelating om de school vroeger te verlaten (ten gevolge van een moeilijke verbinding met het openbaar vervoer)' ),
			'#description' => 'het leerlingensecretariaat zal dit nakijken en eventueel aanpassen',
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => TRUE 
	);
	
	$form ['praktisch'] ['s_middags_buiten_'] = array (
			'#title' => t ( 'De leerling krijgt de toelating om \'s middags de school te verlaten' ),
			'#description' => 'een meerderjarige leerling krijgt automatische deze toestemming',
			'#type' => 'radios',
			'#options' => array (
					t ( 'Ja' ) => t ( 'Ja' ),
					t ( 'Nee' ) => t ( 'Nee' ) 
			),
			'#default_value' => t ( 'Nee' ),
			'#required' => TRUE 
	);
	
	$form ['praktisch'] ['rekeningnummer_ge'] = array (
			'#title' => t ( 'Rekeningnummer' ),
			'#description' => 'dit nummer mag gebruikt worden voor eventuele terugbetalingen; formaat: (IBAN) BE00 0000 0000 0000',
			'#type' => 'textfield',
			'#required' => TRUE,
			'#size' => 20 
	);
	$form ['praktisch'] ['Betaalwijze'] = array (
			'#title' => t ( 'Welk betaalmiddel verkiest men om het inschrijvingsgeld te betalen?' ),
			'#description' => 'het inschrijvingsgeld dient verplicht betaald te worden bij de ondertekening; indien er, bij hoge <u>uitzondering</u> en in het kader van de principes van de "<strong>gelijke onderwijskansen</strong>", een afwijking wordt gevraagd zal dit eerst goedgekeurd moeten worden (afbetalingsplan)',
			'#type' => 'radios',
			'#options' => array (
					t ( 'Cash' ) => t ( 'Cash' ),
					t ( 'Bankkaart' ) => t ( 'Bankkaart' ),
					t ( 'Overschrijving' ) => t ( 'Overschrijving (binnen de 14 kalenderdagen)' ),
					t ( 'Afbetalingsplan' ) => t ( 'Afbetalingsplan (enkel bij goedkeuring!)' ) 
			),
			'#default_value' => t ( 'Bankkaart' ),
			'#required' => TRUE 
	);
	
	$form ['praktisch'] ['contact'] = array (
			'#title' => t ( 'Hoe leerde men onze school kennen?' ),
			'#type' => 'checkboxes',
			'#options' => array (
					'adver' => t ( 'Advertentie / folder' ), // contact_via_adver
					'clb' => t ( 'CLB' ), // contact_via_clb
					'famil' => t ( 'Familie' ), // contact_via_famil
					'opend' => t ( 'Opendeurdag / infomoment' ), // contact_via_opend
					'schoo' => t ( 'Rechtstreeks' ), // contact_via_schoo
					'tv' => t ( 'TV' ), // contact_via_tv
					'websi' => t ( 'Website' ), // contact_via_websi
					'_ande' => t ( 'Ander kanaal' ) 
			), // contact_via__ande
			'#required' => FALSE 
	);
	
	$form ['praktisch'] ['algemene_opmerkin'] = array (
			'#title' => t ( 'Bijkomende opmerking(en)' ),
			'#type' => 'textarea',
			'#required' => FALSE,
			'#size' => 100,
			'#rows' => 5 
	);
	
	$form ['praktisch'] ['ready'] = array (
			'#type' => 'button',
			'#attributes' => array (
					'id' => 'argus_gebruikersregistraties_buttonReady_praktisch',
					'onclick' => 'return false',
					'class' => array (
							'buttonReady' 
					) 
			),
			'#value' => t ( 'klaar met stap 8' ) 
	);
	
	$form ['readyForSubmit'] = array (
			'#type' => 'fieldset',
			'#title' => t ( 'STAP 9 - Inschrijving afronden en verzenden' ),
			'#collapsible' => TRUE,
			'#collapsed' => TRUE 
	);
	if (module_exists ( 'argus_sms_api' )) {
		$form ['readyForSubmit'] ['sendToSmartschool'] = array (
				'#title' => t ( 'de leerling in Smartschool registreren' ),
				'#description' => t ( 'als het dossier compleet is, dan kan je dit dossier rechtstreeks in Smartschool registreren (dit kan enkel indien een dossier volledig is - geen ontbrekende documenten of voorinschrijving)<br /><small><strong><u>opmerking</u>: deze optie mag enkel gebruikt worden vanaf de offici&euml;le opstart van het schooljaar, deze optie is enkel voor het leerlingensecretariaat of ILB beschikbaar</strong></small>' ),
				'#type' => 'checkbox',
				'#default_value' => TRUE,
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
					'argus_gebruikersregistratie_form_pupil_validate' 
			),
			'#submit' => array (
					'argus_gebruikersregistratie_form_pupil_submit' 
			),
			'#weight' => 10,
			'#value' => t ( 'Alle gegevens werden ingevuld en de leerling kan worden ingeschreven' ) 
	);
	
	if (count ( $form_state ['build_info'] ['args'] )) {
		if (array_key_exists ( 'uid', $form_state ['build_info'] ['args'] [0] )) {
			$uid = $form_state ['build_info'] ['args'] [0] ['uid'];
			
			if (is_numeric ( $uid )) {
				$u = user_load ( $uid );
				if ($u) {
					argus_gebruikersregistratie_setFormValues ( ( array ) $u, $form );
				}
			}
		}
	}
	
	return $form;
}
function argus_gebruikersregistratie_setFormValues($u, &$form_fields) {
	foreach ( $form_fields as $key => &$field ) {
		if (is_array ( $field )) {
			if (array_key_exists ( '#type', $field )) {
				if ($field ['#type'] == 'fieldset') {
					argus_gebruikersregistratie_setFormValues ( $u, $field );
				} else {
					if (array_key_exists ( 'field_user_sms_' . $key, $u )) {
						if (array_key_exists ( LANGUAGE_NONE, $u ['field_user_sms_' . $key] )) {
							if (array_key_exists ( 0, $u ['field_user_sms_' . $key] [LANGUAGE_NONE] )) {
								if (array_key_exists ( 'value', $u ['field_user_sms_' . $key] [LANGUAGE_NONE] [0] )) {
									$form_fields [$key] ['#default_value'] = $u ['field_user_sms_' . $key] [LANGUAGE_NONE] [0] ['value'];
								} elseif (array_key_exists ( 'email', $u ['field_user_sms_' . $key] [LANGUAGE_NONE] [0] )) {
									$form_fields [$key] ['#default_value'] = $u ['field_user_sms_' . $key] [LANGUAGE_NONE] [0] ['email'];
								}
							}
						}
					} else {
						switch ($key) {
							case 'klas' :
								$form_fields [$key] ['#default_value'] = $u ['field_user_tmp_reg_class'] [LANGUAGE_NONE] [0] ['value'];
								break;
							case 'Betaalwijze' :
								if (array_key_exists ( LANGUAGE_NONE, $u ['field_user_tmp_reg_payment'] )) {
									$form_fields [$key] ['#default_value'] = $u ['field_user_tmp_reg_payment'] [LANGUAGE_NONE] [0] ['value'];
								}
								break;
						}
					}
				}
			}
		}
	}
}

/**
 * Form submission callback
 */
function argus_gebruikersregistratie_form_pupil_validate($form, &$form_state) {
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
function argus_gebruikersregistratie_form_pupil_submit($form, &$form_state) {
	$cc = array (
			'form' => null,
			'grade' => null,
			'year' => null,
			'structure' => null 
	);
	
	// Check if a uid is set
	$uid = null;
	if (count ( $form_state ['build_info'] ['args'] )) {
		if (array_key_exists ( 'uid', $form_state ['build_info'] ['args'] [0] )) {
			if (is_numeric ( $form_state ['build_info'] ['args'] [0] ['uid'] )) {
				$uid = $form_state ['build_info'] ['args'] [0] ['uid'];
			}
		}
	}
	
	if (isset($uid)){
		$user = user_load ( $uid );
		$account = $user->name;
	} else {
		$user = '';
		$account = argus_engine_sanitize_string ( $form_state ['values'] ['voornaam'] ) . '.' . argus_engine_sanitize_string ( $form_state ['values'] ['naam'] );
	}
	
	// Check if username has already been taken
	$cntr = 1;
	$accountCheck = $account;
	do {
		$query = 'SELECT u.uid FROM {users} AS u WHERE u.name = :account AND u.uid != :uid';
		$checkAccounts = db_query ( $query, array (
				':account' => $accountCheck,
				':uid' => $uid 
		) )->rowCount ();
		if ($checkAccounts) {
			$accountCheck = $account . ($cntr ++);
		}
	} while ( $checkAccounts );
	$account = $accountCheck;
	
	$password = argus_engine_generate_password ();
	
	// Start preparing data for saving this user or load the prefilled form
	$user_data = array (
			'name' => $account,
			'pass' => $password,
			'mail' => $form_state ['values'] ['emailadres'],
			'status' => 0,
			'signature_format' => 'full_html' 
	);
	
	foreach ( $form_state ['values'] as $field => $value ) {
		$user_data ['field_user_sms_' . $field] [LANGUAGE_NONE] [0] ['value'] = $value;
	}
	
	// Manipulate data for registration
	$user_data ['field_user_sms_basisrol'] [LANGUAGE_NONE] [0] ['value'] = '1'; // Leerling
	$user_data ['field_user_sms_ingeschreven_door'] [LANGUAGE_NONE] [0] ['value'] = argus_get_user_realname ( $form_state ['values'] ['inschrijver'] );
	
	// Generate some extra information fields for registration purposes
	$fields = array (
			'field_user_tmp_schj_inschr' => 'Schooljaar van (her-)inschrijving',
			'field_user_tmp_pwhfd' => 'Paswoord hoofdaccount',
			'field_user_tmp_pwco1' => 'Paswoord coaccount 1',
			'field_user_tmp_pwco2' => 'Paswoord coaccount 2',
			'field_user_tmp_reg_class' => 'Inschrijving voor klas',
			'field_user_tmp_reg_payment' => 'Betaling inschrijvingsgeld',
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
	$user_data ['field_user_tmp_pwhfd'] [LANGUAGE_NONE] [0] ['value'] = $password;
	$user_data ['field_user_tmp_pwco1'] [LANGUAGE_NONE] [0] ['value'] = argus_engine_generate_password ();
	$user_data ['field_user_tmp_pwco2'] [LANGUAGE_NONE] [0] ['value'] = argus_engine_generate_password ();
	$user_data ['field_user_tmp_reg_class'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['klas'];
	$user_data ['field_user_tmp_reg_payment'] [LANGUAGE_NONE] [0] ['value'] = $form_state ['values'] ['Betaalwijze'];
	$user_data ['field_user_tmp_reg_smartschool'] [LANGUAGE_NONE] [0] ['value'] = 'unregistered';
	
	// Get class for registration
	$result = db_query ( 'SELECT n.nid FROM {node} n WHERE n.title = :title AND n.type = :type', array (
			':title' => $user_data ['field_user_tmp_reg_class'] [LANGUAGE_NONE] [0] ['value'],
			':type' => 'klas' 
	) );
	$currentClass = $result->fetchField ();
	if ($currentClass) {
		$currentClass = node_load ( $currentClass );
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_leerjaar )) {
			$cc ['year'] = $currentClass->field_klas_leerjaar [$currentClass->language] [0] ['value'];
		}
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_graad )) {
			$cc ['grade'] = $currentClass->field_klas_graad [$currentClass->language] [0] ['value'];
		}
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_onderwijsvorm )) {
			$cc ['form'] = $currentClass->field_klas_onderwijsvorm [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_structuuronderdeel )) {
			$cc ['structure'] = $currentClass->field_klas_structuuronderdeel [LANGUAGE_NONE] [0] ['value'];
		}
	}
	
	// Get initials
	$user_data ['field_user_sms_initialen'] [LANGUAGE_NONE] [0] ['value'] = '';
	
	$name = $user_data ['field_user_sms_voornaam'] [LANGUAGE_NONE] [0] ['value'];
	if ($user_data ['field_user_sms_extravoornamen'] [LANGUAGE_NONE] [0] ['value']) {
		$name .= ' ' . $user_data ['field_user_sms_extravoornamen'] [LANGUAGE_NONE] [0] ['value'];
	}
	$name .= ' ' . $user_data ['field_user_sms_naam'] [LANGUAGE_NONE] [0] ['value'];
	
	$words = preg_split ( "/\s+/", $name );
	foreach ( $words as $w ) {
		$user_data ['field_user_sms_initialen'] [LANGUAGE_NONE] [0] ['value'] .= $w [0] . ' ';
	}
	
	// Process email-fields
	$user_data ['field_user_sms_emailadres'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['emailadres'];
	$user_data ['field_user_sms_email_coaccount1'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount1'];
	$user_data ['field_user_sms_email_coaccount2'] [LANGUAGE_NONE] [0] ['email'] = $form_state ['values'] ['email_coaccount2'];
	
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
	
	require_once 'argus_gebruikersregistratie_options_nationaliteit.inc.php';
	$optionsNationality = argus_gebruikersregistratie_form_field_nationality ();
	$user_data ['field_user_sms_nationaliteit_vad'] [LANGUAGE_NONE] [0] ['value'] = $optionsNationality [$form_state ['values'] ['nationaliteit_vad']];
	$user_data ['field_user_sms_nationaliteit_moe'] [LANGUAGE_NONE] [0] ['value'] = $optionsNationality [$form_state ['values'] ['nationaliteit_moe']];
	
	// Set 'informatiekanalen'
	$optionsContact = array (
			'adver',
			'clb',
			'famil',
			'opend',
			'schoo',
			'tv',
			'websi',
			'_ande' 
	);
	foreach ( $optionsContact as $option ) {
		$set = '';
		if ($form_state ['values'] ['contact'] [$option]) {
			$set = 'Ja';
		} else {
			$set = 'Nee';
		}
		$user_data ['field_user_sms_contact_via_' . $option] [LANGUAGE_NONE] [0] ['value'] = $set;
	}
	
	// Set 'medische problematiek'
	$set = '';
	if ($form_state ['values'] ['andere_mp']) {
		$set = 'Ja';
	} else {
		$set = 'Nee';
	}
	$user_data ['field_user_sms_andere_mp_j_n'] [LANGUAGE_NONE] [0] ['value'] = $set;
	
	// Set 'andere_ls_j_n'
	$set = '';
	if ($form_state ['values'] ['andere_ls']) {
		$set = 'Ja';
	} else {
		$set = 'Nee';
	}
	$user_data ['field_user_sms_andere_ls_j_n'] [LANGUAGE_NONE] [0] ['value'] = $set;
	
	try {
		$u = user_save ( $user, $user_data );
		
		if ($u) {
			argus_report ( 'De gebruiker "%accountname" werd succesvol toegevoegd.', array (
					'%accountname' => $account 
			), 'status', 'argus' );
			
			if (module_exists ( 'argus_sms_api' )) {
				if ($form_state ['values'] ['sendToSmartschool'] == TRUE) {
					argus_sms_add_user_to_smartschool ( $u->uid );
				}
			}
			
			if (module_exists ( 'argus_document_generator' )) {
				if ($form_state ['values'] ['generateDocuments'] == TRUE) {
					drupal_set_message ( '<a style="color: lime;" href="' . base_path () . 'documenten_generator.get/CNT_Inschrijvingsdossier/leerling=' . $u->uid . '">Klik hier om het dossier te downloaden en af te drukken</a>', 'status' );
				}
			}
			
			$status = 'Nog enkele aandachtspunten:<ul>';
			
			// HANDLE REGISTRATION LATER THEN START OF SCHOOLYEAR
			
			if ($u->created > strtotime ( argus_schoolyear () ['start'] ) && module_exists ( 'argus_document_generator' )) {
				$status .= '<li><a style="color: yellow;" href="' . base_path () . 'documenten_generator.get/CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving/leerling=' . $u->uid . '">begeleidingsovereenkomst LAATTIJDIGE INSCHRIJVING - klik hier</a></li>';
			}
			
			// HANDLE INTERNSHIPMENT
			
			if (($cc ['form'] == 'B.S.O.' && $cc ['grade'] == 3) || ($cc ['form'] == 'T.S.O.' && ($cc ['grade'] == 6 || $cc ['grade'] == 7)) && module_exists ( 'argus_document_generator' )) {
				$status .= '<li><a style="color: gold;" href="' . base_path () . 'documenten_generator.get/VSG_Stagegever_infofiche/leerling=' . $u->uid . '">infofiche STAGEGEVER - klik hier</a></li>';
			}
			
			drupal_set_message ( $status . '<li>inlichtingen over de eerste schooldagen</li><li>informatie over de studietoelage</li></ul>', 'status' );
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
