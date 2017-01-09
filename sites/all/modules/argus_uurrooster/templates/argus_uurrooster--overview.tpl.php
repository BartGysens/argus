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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

global $user, $base_url;

?>

<h2><?php print t('Overzicht'); ?></h2>

Om een uurrooster op te zoeken zijn er verschillende manieren:

<ul>
    <li>
        <h3>Via de filter aan de linkerzijde</h3>
        Je kan via deze weg opzoeken met behulp van vier gegevens:
        <ul>
            <li><strong>klassen</strong>: je krijgt het uurrooster van de opgevraagde klas te zien</li>
            <li><strong>Leerkracht</strong>: het uurrooster van de leerkracht wordt getoond</li>
            <li><strong>Leerling</strong>: het systeem geeft het uurrooster weer van de klas waarin deze leerling zit</li>
            <li><strong>Lokaal</strong>: het weekschema van het lokaal</li>
        </ul>
    </li>
    <li>
        <h3>Doorklikken binnen het uurrooster</h3>
        Het uurrooster is interactief, dit wil zeggen dat je overal op kan klikken voor meer informatie.<br />
        Voorbeeld:<br />
        <table class="argus_uurrooster_schedule">
        <thead>
        	<tr>
	            <th></th>
	            <th>maandag</th><th>...</th><th style="font-style: italic;">details</th>
	        </tr>
        </thead>
        <tbody>
	        <tr>
	            <td style="background-color: #eee;">08:30<br />-<br />09:20</td>
	            <td id="lesson_18209" class="lesson packLS_199700">
	                <div style="font-weight: bold; font-size: 1.2em;">VAK</div>
	                <div style="font-size: smaller;"><a>leerkracht</a></div>
	                <div style="font-size: 1.1em;"><a>klas 1</a> <a>klas 2</a></div>
	                <div><a>klaslokaal 001</a></div>
	            </td>
	            <td>...</td>
	            <td id="argus_uurrooster_schedule_details" rowspan="2"><em>klik op een uur voor meer info</em></td>
	        </tr>
	        <tr>
	            <td style="background-color: #eee;">...</td>
	            <td>...</td>
	            <td>...</td>
	        </tr>
        </tbody>
        </table>
        <ul>
            <li><span style="underline">vak</span>: als je klikt op het kader van de les, dan krijg je rechts in het detailvenster alle informatie over dit lesuur:<br />
                <ul>
                    <li>volledige naam van het <strong>vak</strong></li>
                    <li><strong>leerkracht</strong>: bekijk de fiche met extra informatie leerkracht</li>
                    <li><strong>parallellessen</strong>: een overzichtje van alle klassen die gekoppeld zijn aan dit lesuur</li>
                    <li>lijst van alle <strong>leerlingen</strong> per gekoppelde klas: je kan verder klikken voor de leerlingenfiche</li>
                </ul>
            </li>
            <li><span style="underline">leerkracht</span>: bekijk de fiche met extra informatie leerkracht</li>
            <li><span style="underline">klas(sen)</span>: je kan de volledige klassamenstelling bekijken door op de klas te klikken</li>
            <li><span style="underline">lokaal</span>: het weekschema van het lokaal</li>
        </ul>
    </li>
    <li>
        <h3>Bovenaan in het website-adres</h3>
        Om snel een uurrooster te vinden, kan je tenslotte ook via de link bovenaan in de browser werken:
        <ul>
            <li><strong><?php print $base_url; ?>/uurrooster/klas/3BBM1</strong>: uurrooster van de klas 3BBM1</li>
            <li><strong><?php print $base_url; ?>/uurrooster/leerkracht/frieda.dewinne</strong>: weekrooster van Frieda</li>
            <li><strong><?php print $base_url; ?>/uurrooster/leerling/tony.best</strong>: uurrooster van de klas 6BCA waarin Tony zit</li>
            <li><strong><?php print $base_url; ?>/uurrooster/lokaal/214</strong>: rooster van klaslokaal 214</li>
            <li>... andere mogelijkheden kunnen ook zoals het meegeven van uniek nummer 'ID' (als je dat kent)</li>
        </ul>
        <em>Opmerking: bij namen wordt de schrijfwijze "voornaam.achternaam", een puntje tussen beide namen.</em>
    </li>
</ul>