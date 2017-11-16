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
 * 
 */

jQuery(document).ready(function() {
	jQuery('.argus_afwezigheden_create').click(function() {
		var id = this.id;
		var reason = jQuery('#select_' + id).val();
		
		jQuery('#create_block_form_' + id).hide();
		jQuery('#waiter_' + id).show();
		
		jQuery.ajax({
			url : Drupal.settings.basePath + 'telaatkomers-wettiging.create',
			type : 'POST',
			async : false,
			data : {
				did : id,
				reason : reason
			},
			success : function(data) {
				var url = jQuery(location).attr('origin');

				var d = jQuery('#argus_afwezigheden_latecomers_date').val();
				var uid = jQuery('#argus_afwezigheden_latecomers_lln').val();
				var cid = jQuery('#argus_afwezigheden_latecomers_classes').val();

				window.location = url + '/telaatkomers?d=' + d + '&uid=' + uid + '&cid=' + cid;
			}
		});

	});

	jQuery('.argus_afwezigheden_delete').click(function() {
		var id = this.id;
		
		jQuery('#delete_block_form_' + id).hide();
		jQuery('#waiter_' + id).show();

		jQuery.ajax({
			url : Drupal.settings.basePath + 'telaatkomers-wettiging.delete/' + id,
			type : 'GET',
			async : false,
			success : function(data) {
				var url = jQuery(location).attr('origin');

				var d = jQuery('#argus_afwezigheden_latecomers_date').val();
				var uid = jQuery('#argus_afwezigheden_latecomers_lln').val();
				var cid = jQuery('#argus_afwezigheden_latecomers_classes').val();

				window.location = url + '/telaatkomers?d=' + d + '&uid=' + uid + '&cid=' + cid;
			}
		});

	});

	/* Filter */
	jQuery('#argus_afwezigheden_latecomers_reset').click(function() {
		jQuery('#argus_afwezigheden_latecomers_classes').val(null);
		jQuery('#argus_afwezigheden_latecomers_lln').val(null);
		jQuery('#argus_afwezigheden_latecomers_date').val(null);
		argus_afwezigheden_latecomers_loadPage();
	});

	jQuery('#argus_afwezigheden_latecomers_classes').change(function() {
		argus_afwezigheden_latecomers_loadPage();
	});
	jQuery('#argus_afwezigheden_latecomers_lln').change(function() {
		argus_afwezigheden_latecomers_loadPage();
	});
	jQuery('#argus_afwezigheden_latecomers_date').change(function() {
		argus_afwezigheden_latecomers_loadPage();
	});

	jQuery.datepicker.formatDate("yy-mm-dd", new Date(2007, 1 - 1, 26));
	jQuery('.date_picker').removeClass('hasDatepicker').datepicker({
		dateFormat : "dd-mm-yy"
	});
});

function argus_afwezigheden_latecomers_loadPage() {
	var url = jQuery(location).attr('origin') + jQuery(location).attr('pathname');
	var d = jQuery('#argus_afwezigheden_latecomers_date').val();
	var uid = jQuery('#argus_afwezigheden_latecomers_lln').val();
	var cid = jQuery('#argus_afwezigheden_latecomers_classes').val();

	window.location = url + '?d=' + d + '&uid=' + uid + '&cid=' + cid;
}