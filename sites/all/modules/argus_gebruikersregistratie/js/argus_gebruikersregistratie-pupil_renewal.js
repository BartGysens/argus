/**
 * Copyright 2016 - Bart Gysens
 */

jQuery(document).ready(function() {

    jQuery('.buttonReady').click(function(){
    	item = jQuery(this).attr('id').substr(41);
    	jQuery('#edit-' + item).find('.fieldset-wrapper').toggle(1000);
    	
    	setTimeout(function(){ jQuery('#edit-' + item).addClass('collapsed'); }, 1000);
		return false;
	});
    
});
