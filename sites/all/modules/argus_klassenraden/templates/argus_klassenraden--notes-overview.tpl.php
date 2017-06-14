<?php
/* 
 * Copyright (C) 2015 bartgysens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

?>

<div class="view-content">
	<?php if (count($data['pupils'])){ ?>
		<h2>Notities van de klas <a href="<?php print url('klas/'.$data['classname'], array('absolute' => TRUE)); ?>" target="_blank"><?php print $data['classname']; ?></a></h2>
		
		Overzicht van de notities: <?php print $data['cm-title']; ?><br />
		<table id="argus_klassenraden_notities" class="sticky-header">
			<?php 
			foreach ($data['pupils'] as $u => $uid){ ?>
				<thead>
					<tr>
						<th class="views-field views-field-title views-align-left" style="font-weight: normal !important;"><a id="argus_klassenraden_leerlingen_<?php print $uid; ?>"></a>Leerling</th>
						<th class="views-field views-field-title views-align-center absences" style="border-left: 1px solid gray;">Afwezigheden</th>
						<th class="views-field views-field-title views-align-center behaviour" style="border-left: 1px solid gray;">Gedrag</th>
						<th class="views-field views-field-title views-align-center study" style="border-left: 1px solid gray;">Studie</th>
						<th class="views-field views-field-title views-align-center" style="font-weight: normal !important; border-left: 1px solid gray;">Andere</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<?php
						
						print '<td><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$uid).'" target="_blank">'.argus_get_user_realname($uid).'</a>';
						if (user_access('create lvs_klassenraad_notitie content') || user_access('edit any lvs_klassenraad_notitie content')) {
							print '<div style="font-size: smaller;" class="action-links"><a href="'.url(current_path().'/edit/'.$uid, array('absolute' => TRUE)).'">bewerken</a></div>';
						}
						print '</td>';
						
						$lvsParts = list_allowed_values(field_info_field('field_lvs_onderdeel')); //afwezigheden, gedrag, studiebegeleiding, andere
						foreach ($lvsParts as $lvsPart){
							$query = new EntityFieldQuery();
							$query
							->entityCondition('entity_type', 'node', '=')
							->entityCondition('bundle', 'lvs_klassenraad_notitie', '=')
							->fieldCondition('field_klassenraad', 'target_id', $data['cmid'], '=')
							->fieldCondition('field_lvs_onderdeel', 'value', $lvsPart, '=')
							->fieldCondition('field_leerling', 'target_id', $uid, '=');
							$notes = $query->execute();

							print '<td class="views-field views-align-left" style="border-left: 1px solid gray;">';
							if ($notes){
								$note = node_load(key($notes['node']));
								if ($note->field_acties){
									print '<ol>';
									foreach ($note->field_acties[LANGUAGE_NONE] as $aid){
										$action = node_load($aid['target_id']);
										
										print '<li>';
										
										$ad = array();
										if ($action->field_maatregel){
											if ($action->field_maatregel[LANGUAGE_NONE][0]['target_id']){
												$m = node_load($action->field_maatregel[LANGUAGE_NONE][0]['target_id']);
												print '<div style="font-weight: bolder;';
												if ($action->uid == 0){
													print ' color: red !important;';
												}
												print '">'.$m->title.'</div>';
											}
										}
										if ($action->uid){
											print '<div style="font-style: italic;';
											if ($action->field_maatregel[LANGUAGE_NONE][0]['target_id'] == 0){
												print ' color: red !important;';
											}
											print '">'.argus_get_user_realname($action->uid).'</div>';
										}
										
										if ($action->body){
											print '<div style="font-size: smaller;">'.$action->body[LANGUAGE_NONE][0]['value'].'</div>';
										}
										
										print '</li>';
									}
									print '</ol>';
								}
								if ($note->body[LANGUAGE_NONE][0]['value']){
									print '<div style="font-size: smaller;"><u>opmerkingen:</u><br />'.$note->body[LANGUAGE_NONE][0]['value'].'</div>';
								}
							}
							print '</td>';
						}
						
						?>
					</tr>
				</tbody>
			<?php } ?>
		</table>
		
	<?php } else { ?>
		<p>Vooraleer je de notities van de klassenraad kan opvragen, moet je in het linkermenu - Filter - een selectie maken:</p>
		
		<ul>
			<li>
				<h3>STAP 1 - schooljaar</h3>
				<p>Kies bovenaan in het menu het schooljaar waar je notities van wil bekijken.</p>
			</li>
			<li>
				<h3>STAP 2 - klassenraad</h3>
				<p>Dan krijg je een lijst met de klassenraden die hebben plaatsgevonden. Ze staan geordend volgens datum, waarbij de meest recente boven in de lijst staat - kies hier de klassenraad die je wil zien.</p>
			</li>
			<li>
				<h3>STAP 3 - spoor</h3>
				<p>Vervolgens krijg je de sporen waarin de klassenraad werd ingedeeld. Maak ook hier weer je keuze aan de hand van de locatie die voor het specifiek traject wordt gebruikt.</p>
			</li>
			<li>
				<h3>STAP 4 - klas</h3>
				<p>Ten slotte zal de lijst verschijnen van alle leerlingen en kan je het detail bekijken per leerling, net als de actie die aan elke leerling werd gekoppeld binnen de respectievelijke categorie.</p>
			</li>
		</ul>
	<?php }	?>
</div>