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

    jQuery('#argus_gebruikersregistraties_vader_copy').click(function(){
    	jQuery('#edit-straat-vader').val(jQuery('#edit-straat').val());
    	jQuery('#edit-huisnummer-vader').val(jQuery('#edit-huisnummer').val());
    	jQuery('#edit-busnummer-vader').val(jQuery('#edit-busnummer').val());
    	jQuery('#edit-postcode-vader').val(jQuery('#edit-postcode').val());
    	jQuery('#edit-stad-gemeente-vad').val(jQuery('#edit-woonplaats').val());
		return false;
	});

    jQuery('#argus_gebruikersregistraties_moeder_copy').click(function(){
    	jQuery('#edit-straat-moeder').val(jQuery('#edit-straat').val());
    	jQuery('#edit-huisnummer-moeder').val(jQuery('#edit-huisnummer').val());
    	jQuery('#edit-busnummer-moeder').val(jQuery('#edit-busnummer').val());
    	jQuery('#edit-postcode-moeder').val(jQuery('#edit-postcode').val());
    	jQuery('#edit-stad-gemeente-moe').val(jQuery('#edit-woonplaats').val());
		return false;
	});

    jQuery('#argus_gebruikersregistraties_buso1_copy').click(function(){
    	jQuery('#edit-periode-buo').val(jQuery('#edit-sl-schooljaar').val());
    	jQuery('#edit-school-buo').val(jQuery('#edit-sl-school').val()+' - '+jQuery('#edit-sl-stad-school').val());
    	jQuery('#edit-type-buo').val(jQuery('#edit-sl-leerjaar-en-st').val());
		return false;
	});
    jQuery('#argus_gebruikersregistraties_buso2_copy').click(function(){
    	jQuery('#edit-periode-buo').val(jQuery('#edit-sl2-schooljaar').val());
    	jQuery('#edit-school-buo').val(jQuery('#edit-sl2-school').val()+' - '+jQuery('#edit-sl2-stad-school').val());
    	jQuery('#edit-type-buo').val(jQuery('#edit-sl2-leerjaar-en-s').val());
		return false;
	});
    
});
