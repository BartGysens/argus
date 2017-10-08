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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
?>
<input type="hidden" name="argus_beleidsplannen_<?php print $cntr; ?>_ref" value="<?php print $ref; ?>" />
<input type="hidden" name="argus_beleidsplannen_<?php print $cntr; ?>_aid" value="<?php print $aid; ?>" />
<table id="argus_beleidsplannen_action_<?php print $cntr; ?>" class="argus_beleidsplannen_action_model">
	<tr>
		<td class="views-align-left" colspan="4"><textarea id="argus_beleidsplannen_description_<?php print $cntr; ?>" name="argus_beleidsplannen_<?php print $cntr; ?>_action_description" class="argus_beleidsplannen_description"><?php print $body; ?></textarea></td>
	</tr>
	<tr>
		<td class="views-align-left" colspan="4">
		<fieldset class="<?php print $class; ?>" id="argus_beleidsplannen_rok_opts_<?php print $cntr; ?>">
			<legend>
				<span class="fieldset-legend"><a class="fieldset-title" href="#">Integratie OK (Inspectie 2.0) / Strategische doelstellingen (tonen/verbergen)</a></span>
			</legend>
			<div class="fieldset-wrapper">
			<?php
			
			$k = 0;
			foreach (list_allowed_values( field_info_field( 'field_integratie_r_ok' ) ) as $o ){
				if (in_array($o, $rok_opts)){
					$checked = 'checked="true"';
				} else {
					$checked = '';
				}
				print '<div><label class="argus_beleidsplannen_rok_opt"><input type="checkbox" id="argus_beleidsplannen_'. $cntr . '_action_rok_'. $k .'" name="argus_beleidsplannen_'. $cntr . '_action_rok_'. $k .'" value="true" ' . $checked . ' /> ' . $o . '</label></div>';
				$k++;
			}
			
			?>
			</div>
		</fieldset>
		</td>
	</tr>
	<tr>
		<td class="views-align-left">deadline: <input size="10" id="argus_beleidsplannen_deadline_<?php print $cntr; ?>" name="argus_beleidsplannen_<?php print $cntr; ?>_action_deadline" class="date_picker" value="<?php print $deadline; ?>" /></td>
		<td class="views-align-left"><select name="argus_beleidsplannen_<?php print $cntr; ?>_action_status">
		<option value="0">- selecteer een status -</option>
		<?php $opts = array( 'nieuw', 'in behandeling', 'afgehandeld', 'geannuleerd' );
		
		foreach ($opts as $opt){
			print '<option value="' . $opt . '"';
			if ($opt == $status){
				print ' selected="selected"';
			}
			print '>' . $opt . '</option>';
		}?>
		</select></td>
		<td class="views-align-left"><select name="argus_beleidsplannen_<?php print $cntr; ?>_action_executor">
		<option value="0">- selecteer een uitvoerder -</option>
		<?php
		foreach ($executors as $uid){
			print '<option value="'.$uid.'"';
			if ($uid == $executor){
				print ' selected="selected"';
			}
			print '>'.argus_get_user_realname($uid).'</option>';
		}
		?>
		</select></td>
		<td class="views-align-left">budget: <input id="argus_beleidsplannen_budget_<?php print $cntr; ?>" name="argus_beleidsplannen_<?php print $cntr; ?>_action_budget" value="<?php print $budget; ?>" size="6" /> euro</td>
		<td class="views-align-right"><input type="button" value="verwijderen" id="argus_beleidsplannen_remove_action_<?php print $cntr; ?>" class="action-links argus_beleidsplannen_remove_action_btn" /></td>
	</tr>
</table>