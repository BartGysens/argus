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

if (!$aid) { $aid = '{id}'; } ?>
<a id="action<?php print $aid ?>"></a>
<table id="argus_klassenraden_action_<?php print $aid; ?>" class="argus_klassenraden_action_model <?php print $lvsPart; ?>-border argus_klassenraden_action_table_<?php print $lvsPart; ?>">
<input type="hidden" name="argus_klassenraden_<?php print $lvsPart; ?>_action_id[]" value="<?php if ($aid != '{id}') { print $aid; } ?>" />
	<tr>
		<td class="views-align-left"><select name="argus_klassenraden_<?php print $lvsPart; ?>_action_measure[]"<?php if (is_numeric($aid) && !$measure){ ?> style="background: #fee; color: red;"<?php } ?>>
		<option value="0">- selecteer een maatregel -</option>
		<?php
		foreach ($measures as $mid => $m){
			print '<option value="'.$mid.'"';
			if ($mid == $measure){
				print ' selected="selected"';
			}
			print '>'.$m.'</option>';
		}
		?>
		</select></td>
		<td class="views-align-left"><select name="argus_klassenraden_<?php print $lvsPart; ?>_action_executor[]"<?php if (is_numeric($aid) && !$executor){ ?> style="background: #fee; color: red;"<?php } ?>>
		<option value="0">- selecteer een uitvoerder -</option>
		<optgroup label="leerkrachten">
		<?php
		foreach ($executors['teachers'] as $uid){
			print '<option value="'.$uid.'"';
			if ($uid == $executor){
				print ' selected="selected"';
			}
			print '>'.argus_get_user_realname($uid);
					if ($uid == $executors['ktt']){
				print ' (klastitularis)';
			}
			if ($uid == $executors['hktt']){
				print ' (hulpklastitularis)';
			}
			print '</option>';
		}
		?>
		</optgroup>
		<optgroup label="andere">
		<?php
		foreach ($executors['others'] as $uid){
			print '<option value="'.$uid.'"';
			if ($uid == $executor){
				print ' selected="selected"';
			}
			print '>'.argus_get_user_realname($uid).'</option>';
		}
		?>
		</optgroup>
		</select></td>
		<td class="views-align-left"><textarea name="argus_klassenraden_<?php print $lvsPart; ?>_action_description[]" style="width: 100%;"><?php print $description; ?></textarea></td>
		<!-- TODO: 
		<td>deadline</td>
		 -->
		<td class="views-align-right"><input type="button" value="verwijderen" id="argus_klassenraden_remove_action_<?php print $aid; ?>" class="action-links argus_klassenraden_remove_action_btn" /></td>
	</tr>
</table>