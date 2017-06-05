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
    jQuery('#argus_stages_change_classes').change(function(){
    	window.location = '/stages/bezoeken/controle?class=' + jQuery('#argus_stages_change_classes').val();
    });
    jQuery('#argus_stages_change_user_lkr').change(function(){
    	window.location = '/stages/bezoeken/controle?lkr=' + jQuery('#argus_stages_change_user_lkr').val();
    });
    jQuery('#argus_stages_change_user_lln').change(function(){
    	window.location = '/stages/bezoeken/controle?lln=' + jQuery('#argus_stages_change_user_lln').val();
    });
});