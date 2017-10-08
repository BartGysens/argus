/**
 * Copyright 2017 - Bart Gysens
 */

jQuery(document).ready(function() {

	/* Handlers for editing */

	function initActions() {
		jQuery('.argus_beleidsplannen_remove_action_btn').click(function() {
			var aid = this.id.replace('argus_beleidsplannen_remove_action_', '');

			jQuery('#argus_beleidsplannen_description_' + aid).html('{delete}');

			jQuery('#argus_beleidsplannen_action_' + aid).hide();

			initActions();
		});

		var tables = jQuery('.argus_beleidsplannen_action_model');
		tables.removeClass('background-light');

		for (t = 0; t < tables.length; t++) {
			if (!(t % 2)) {
				jQuery('#' + tables[t]['id']).addClass('background-light');
			}
		}

		jQuery('.date_picker').removeClass('hasDatepicker').datepicker({
			dateFormat : "dd/mm/yy"
		});
	}

	jQuery('.argus_beleidsplannen_add_action_btn').click(function() {
		var ref = this.id.replace('argus_beleidsplannen_add_action_', '');

		var cntr = parseInt(jQuery('#argus_beleidsplannen_cntr').val(), 10);

		var nid = ref + (jQuery('.argus_beleidsplannen_' + ref).length + cntr).toString();

		var model = jQuery('#argus_beleidsplannen_action_model').html();
		model = model.replace(/{ref}/g, ref);
		model = model.replace(/{aid}/g, null);
		model = model.replace(/{cntr}/g, cntr);

		model = model.replace(/{class}/g, '');
		
		jQuery('#argus_beleidsplannen_' + ref + '_actions').append(model);

		jQuery('#argus_beleidsplannen_description_' + cntr).focus();

		initActions();
		
		jQuery('#argus_beleidsplannen_rok_opts_' + cntr).addClass('collapsible collapsed');
		Drupal.attachBehaviors(document);
		
		jQuery('#argus_beleidsplannen_cntr').val(cntr + 1);
	});
	
	jQuery.datepicker.formatDate("yy-mm-dd", new Date(2007, 1 - 1, 26));
	
	initActions();
});