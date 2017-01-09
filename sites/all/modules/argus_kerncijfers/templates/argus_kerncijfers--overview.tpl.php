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

global $base_url;

?>

<h2><?php print t('Overzicht'); ?></h2>

<p>Volgende grafieken en statistieken zijn beschikbaar:</p>

<?php if (count($plugins)){ ?>
	<ul>
		<?php foreach($plugins as $pk => $pluginfolder){ ?>
		    <li>
		        <h3><?php print $pk; ?></h3>
		        <ul>
		        	<?php
		        	foreach($pluginfolder as $p => $plugin){
		        		if (array_key_exists('title', $plugin)){
		        			print '<li><a href="'.$base_url.'/kerncijfers/'.$pk.'/'.$p.'">'.$plugin['title'].'</a>';
		        			
		        			if (array_key_exists('type', $plugin)){
		        				print '<span style="font-size: smaller; font-style: italic;"> ('.$plugin['type'].')</span>';
		        			}

		        			if (array_key_exists('description', $plugin)){
		        				print '<div>'.$plugin['description'].'</div>';
		        			}
		        			
		        			print '</li>';
		        		}
					}
					?>
		        </ul>
		    </li>
		<?php } ?>
	</ul>
<?php } else { ?>
Er werden nog geen plugins geactiveerd. Neem hiervoor contact op met je argus/Smartschool-beheerder.
<?php } ?>