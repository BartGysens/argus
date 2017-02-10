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
    jQuery('#argus_inventaris_users').change(function(){
        window.location = '/inventaris-beheren/?uid=' + this.value + '&item=' + jQuery('#argus_inventaris_item').val() + '&fir=' + jQuery('#argus_inventaris_fir').val();
    });
    jQuery('#argus_inventaris_item').change(function(){
        window.location = '/inventaris-beheren/?uid=' + jQuery('#argus_inventaris_users').val() + '&item=' + this.value + '&fir=' + jQuery('#argus_inventaris_fir').val();
    });
    jQuery('#argus_inventaris_fir').change(function(){
        window.location = '/inventaris-beheren/?uid=' + jQuery('#argus_inventaris_users').val() + '&item=' + jQuery('#argus_inventaris_item').val() + '&fir=' + this.value;
    });
});