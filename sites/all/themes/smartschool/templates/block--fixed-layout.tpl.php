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
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

    <div>
	<div class="sms_smscborder sms_bleft sms_topl"></div>
	<div class="sms_smscborder sms_centery sms_topy sms_smallboxct">
		<!-- BEGIN frametitleSmall -->
		<div class="sms_frametitle">
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
		<!-- END frametitleSmall -->
	</div>
	<div class="sms_smscborder sms_bright sms_topr"></div>
    </div>
    
    <div>
	<div class="sms_smscborder sms_bleft"></div>
        <div class="sms_smscborder sms_centerxy sms_smallboxc">
          <?php print $content; ?>
        </div>
	<div class="sms_smscborder sms_bright"></div>
    </div>

    <div>
	<div class="sms_smscborder sms_bleft sms_bottoml"></div>
	<div class="sms_smscborder sms_centery sms_bottomy sms_smallboxcb"></div>
	<div class="sms_smscborder sms_bright sms_bottomr"></div>
    </div>
    
</div>
