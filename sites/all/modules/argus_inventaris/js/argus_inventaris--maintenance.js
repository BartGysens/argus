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

jQuery(document).ready(function() {
    jQuery('.argus_inventaris_item').change(function(){
    	id = this.id.substr(22);
    	
    	var waiter = '<img src="/sites/all/modules/argus_inventaris/images/ajax-loader.gif" />';
    	jQuery('#argus_inventaris_item_waiter_' + id).html(waiter);
    	
    	var jqxhr = jQuery.ajax({
            type: "POST",
            url: "/inventaris-beheren/status.edit",
            data: {
                pid: id,
                state: this.value
            },
            success: function(msg){
                if (msg == 0){
                    // statusNotOK
                    jQuery('#argus_inventaris_item_waiter_' + id).html('Error: edit not saved');
                } else {
                    jQuery('#argus_inventaris_item_waiter_' + id).html('');
                };
            },
            error: function(msg){
                // statusFail
                jQuery('#argus_inventaris_item_waiter_' + id).html('Error: request not found - system offline');
            }
        });
    });
});