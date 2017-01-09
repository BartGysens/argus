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

/**
 * @file
 * Returns the HTML for a block.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728246
 */
?>
<div id="<?php print $block_html_id; ?>" class="sms <?php print $classes; ?>"<?php print $attributes; ?>>
    
    <?php print $content; ?>

	<?php if (!stristr($block_html_id, 'block-superfish')){ ?>
		<?php if ($title){ ?>
		    <div class="sms_frametitle sms_smscborder sms_centery sms_topy sms_smallboxct">
		        <div class="sms_title sms_tleft"></div>
		        <div class="sms_title sms_tcenter"><center>
		
		            <?php print render($title_prefix); ?>
		            <?php if ($title): ?>
		                <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
		            <?php endif; ?>
		            <?php print render($title_suffix); ?>
		
		            </center></div>
		        <div class="sms_title sms_tright"></div>
		    </div>
	    <?php } ?>
	
	    <div id="sms_block_lefttop" class="sms_smscborder sms_bleft sms_topl"></div>
	    <div id="sms_block_leftbottom" class="sms_smscborder sms_bleft sms_bottoml"></div>
	    <div id="sms_block_righttop" class="sms_smscborder sms_bright sms_topr"></div>
	    <div id="sms_block_rightbottom" class="sms_smscborder sms_bright sms_bottomr"></div>
    <?php } ?>
</div>
