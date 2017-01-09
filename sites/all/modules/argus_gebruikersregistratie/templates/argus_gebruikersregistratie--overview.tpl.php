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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

?>

<div class="view-content">

	<h2>Registratie van...</h2>
	
	<h3>een leerling:</h3>
	
	<ul>
		<li><a href="/<?php print current_path(); ?>/leerling/full">een definitieve inschrijving</a></li>
                <li><a href="/<?php print current_path(); ?>/leerling/renewal">een herinschrijving</a></li>
		<li><a href="/<?php print current_path(); ?>/leerling/pre">een voorinschrijving</a></li>
	</ul>
	
	<h3>een personeelslid:</h3>
	
	<ul>
		<li><a href="/<?php print current_path(); ?>/personeelid/1" onclick="return false;">een nieuw personeelslid (nog niet beschikbaar)</a></li>
		<li><a href="/<?php print current_path(); ?>/personeelid/1" onclick="return false;">een nieuwe leerkracht zonder onderwijservaring (nog niet beschikbaar)</a></li>
		<li><a href="/<?php print current_path(); ?>/personeelid/1" onclick="return false;">een nieuwe leerkracht met onderwijservaring (nog niet beschikbaar)</a></li>
	</ul>

</div>
