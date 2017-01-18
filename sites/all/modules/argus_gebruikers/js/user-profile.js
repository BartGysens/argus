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
 * 
 */
jQuery(document).ready(function($) {
    if (jQuery('#results0')){
        jQuery('#results0').show();
        jQuery('#selectResults').change(function(){
            jQuery('.results').hide();
            jQuery('#results'+this.value).show();
        });
    }
    
    jQuery('#profile-admin-photo').mouseover(function(){
        jQuery('#profile-admin-photo-full').animate({
            opacity: 1,
            width: "toggle"
        }, 500);
    });
    jQuery('#profile-admin-photo-full').mouseout(function(){
        jQuery('#profile-admin-photo-full').animate({
            opacity: 0,
            width: "toggle"
        }, 250);
    });
});