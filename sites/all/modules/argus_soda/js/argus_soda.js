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
    jQuery('#argus_soda_change_classes').change(function(){
        window.location = '/soda/rapporten/' + this.value;
    });
    jQuery('#argus_soda_change_user_lln').change(function(){
        window.location = '/soda/rapporten/' + this.value;
    });
    
    jQuery('.argus_soda_attestBtn').click(function(){
    	var parts = this.id.split('-');
    	
    	jQuery('#argus_soda_waiter').html('<img src="/sites/all/modules/argus_soda/images/waiter.gif" />');
    	jQuery('#argus_soda_actions').hide();
    	
	    var jqxhr = jQuery.ajax({
	        type: "POST",
	        url: "/soda/attest.set",
	        data: {
	            uid: parts[1],
	            value: parts[2]
	        },
	        success: function(msg){
            	jQuery('#argus_soda_actions').show();
            	
	            if (msg == 0){
	                // statusNotOK
	                jQuery('#argus_soda_waiter').html('Error: id not found');
	            } else {
	            	jQuery('#argus_soda_waiter').html('Attest succesvol aangepast');
	            	jQuery('#argus_soda-result').html(parts[2] + '<span style="font-size: 10px; font-style: italic;">(D)</span>');
	            	
	            	switch (parts[2]){
	            		case 'A': jQuery('#argus_soda-result').css('color', 'green'); break;
	            		case 'B': jQuery('#argus_soda-result').css('color', 'red'); break;
	            		case 'D': jQuery('#argus_soda-result').css('color', 'yellow'); break;
	            	}
	            };
	        },
	        error: function(msg){
            	jQuery('#argus_soda_actions').show();
	            // statusFail
	            jQuery('#argus_soda_waiter').html('Error: request not found - system offline');
	        }
	    });
	    
	    return false;
    });
    
	function argus_soda_resetReports() {
	    jQuery('#argus_soda_resetReports_waiter').show();
	}
});