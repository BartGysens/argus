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

jQuery(document).ready(function() {
    jQuery('.wet').mouseover(function(){                        
    	jQuery('#'+this.id+'_tt').show();
    });
    jQuery('.wet').mouseout(function(){                        
    	jQuery('#'+this.id+'_tt').hide();
    });
    
    jQuery('.onw').mouseover(function(){                        
    	jQuery('#'+this.id+'_tt').show();
    });
    jQuery('.onw').mouseout(function(){                        
    	jQuery('#'+this.id+'_tt').hide();
    });
    
    /* Filter */
    jQuery('#argus_afwezigheden_latecomers_reset').click(function(){
    	jQuery('#argus_afwezigheden_latecomers_classes').val(null);
    	jQuery('#argus_afwezigheden_latecomers_lln').val(null);
    	argus_afwezigheden_latecomers_loadPage();
    });
    
    jQuery('#argus_afwezigheden_latecomers_classes').change(function(){
    	argus_afwezigheden_latecomers_loadPage();
    });
    jQuery('#argus_afwezigheden_latecomers_lln').change(function(){
    	argus_afwezigheden_latecomers_loadPage();
    });
    jQuery('#argus_afwezigheden_latecomers_only_today').change(function(){
    	argus_afwezigheden_latecomers_loadPage();
    });
});

function argus_afwezigheden_latecomers_loadPage(){
	var url = jQuery(location).attr('origin')+jQuery(location).attr('pathname');
	var uid = jQuery('#argus_afwezigheden_latecomers_lln').val();
	var cid = jQuery('#argus_afwezigheden_latecomers_classes').val();
	var st = jQuery('#argus_afwezigheden_latecomers_only_today').is(':checked');
	
	window.location = url + '?uid=' + uid + '&cid=' + cid + '&st=' + st;
}