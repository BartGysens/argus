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

?>

<h2><?php print t('Overzicht'); ?></h2>

<?php if (module_exists('argus_ikz')){ ?>
	<div><em>Opmerking: de afkorting van drie letters verwijst naar het <a href="<?php print base_path(); ?>ikz">Intern Kwaliteitszorgsysteem</a></em></div>
<?php } ?>

<p>Volgende documenten zijn beschikbaar:</p>

<ul>
	<?php foreach ($structures as $structure): ?>
	    <li>
	        <h3><?php print $structure['title']; ?></h3>
	        
	        <ul>
	        	<?php foreach ($structure['elements'] as $element): ?>
		            <li>
		            <h4><?php print $element['title']; ?></h4>
		                <ol>
		                    <?php foreach ($element['plugins'] as $ref => $title){
		                        print '<li><a href="'.base_path().'documenten_generator/'.$ref.'">'.$title.'</a></li>';
		                    } ?>
		                </ol>
		            </li>
			    <?php endforeach; ?>
	        </ul>
	    </li>
    <?php endforeach; ?>
</ul>
