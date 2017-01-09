/**
 * Copyright 2015 - Bart Gysens
 */

jQuery(document).ready(function() {
    jQuery('#schoolyear_select_box').change(function(){
    	jQuery('#argus_klassenraden_filter').attr('action',
    		'/klassenraden-notities/'+this.value
    	);
    	jQuery('#argus_klassenraden_filter').submit();
    });
    
    jQuery('#argus_klassenraden_klassenraad').change(function(){
    	var schoolyear = jQuery('#schoolyear_select_box').val();
    	jQuery('#argus_klassenraden_filter').attr('action',
    		'/klassenraden-notities/'+schoolyear+'/'+this.value
    	);
    	jQuery('#argus_klassenraden_filter').submit();
    });
    
    jQuery('#argus_klassenraden_spoor').change(function(){
    	var schoolyear = jQuery('#schoolyear_select_box').val();
    	var klassenraad = jQuery('#argus_klassenraden_klassenraad').val();
    	jQuery('#argus_klassenraden_filter').attr('action',
    		'/klassenraden-notities/'+schoolyear+'/'+klassenraad+'/'+this.value
        );
    	jQuery('#argus_klassenraden_filter').submit();
    });
    
    jQuery('#argus_klassenraden_klas').change(function(){
    	var schoolyear = jQuery('#schoolyear_select_box').val();
    	var klassenraad = jQuery('#argus_klassenraden_klassenraad').val();
    	var spoor = jQuery('#argus_klassenraden_spoor').val();
    	jQuery('#argus_klassenraden_filter').attr('action',
    		'/klassenraden-notities/'+schoolyear+'/'+klassenraad+'/'+spoor+'/'+this.value
        );
    	jQuery('#argus_klassenraden_filter').submit();
    });
    
    jQuery('#argus_klassenraden_modus').click(function(){
    	var schoolyear = jQuery('#schoolyear_select_box').val();
    	var klassenraad = jQuery('#argus_klassenraden_klassenraad').val();
    	var spoor = jQuery('#argus_klassenraden_spoor').val();
    	var klas = jQuery('#argus_klassenraden_klas').val();
    	
    	jQuery('#argus_klassenraden_filter').attr('action',
    		'/klassenraden-notities/'+schoolyear+'/'+klassenraad+'/'+spoor+'/'+klas+'/'+modus
        );
    	jQuery('#argus_klassenraden_filter').submit();
    });
    
    jQuery('#argus_klassenraden_leerlingen').change(function(){
    	if (modus == 'edit'){
        	var schoolyear = jQuery('#schoolyear_select_box').val();
        	var klassenraad = jQuery('#argus_klassenraden_klassenraad').val();
        	var spoor = jQuery('#argus_klassenraden_spoor').val();
        	var klas = jQuery('#argus_klassenraden_klas').val();
        	
        	jQuery('#argus_klassenraden_filter').attr('action',
        		'/klassenraden-notities/'+schoolyear+'/'+klassenraad+'/'+spoor+'/'+klas+'/edit/'+this.value.replace('argus_klassenraden_leerlingen_','')
            );
        	jQuery('#argus_klassenraden_filter').submit();
    	} else {
        	jQuery('html,body').animate({scrollTop: jQuery("a[name='"+ this.value +"']").offset().top-40}, 500);
    	}
    });
    
    /* Handlers for editing */
    
	    function set_background_rows(tc){
			var tables = jQuery('.argus_klassenraden_action_table_'+tc);
			tables.removeClass(tc+'-background-light');
			
			for (t = 0; t < tables.length; t++){
	    		if (!(t % 2)){
	    			jQuery('#'+tables[t]['id']).addClass(tc+'-background-light');
	    		}
			}
		}
	    
    	jQuery('.argus_klassenraden_add_action_btn').click(function(){
    		var id = this.id.replace('argus_klassenraden_add_action_','');
    		
    		var cnt = Date.now().toString(); // a unique identifier is needed
    		
    		var model = jQuery('#argus_klassenraden_'+id+'_action_model').html();
    		model = model.replace(/{id}/g, cnt);
    		
    		jQuery('#argus_klassenraden_'+id+'_actions').append(model);
    		
    		update_backgrounds();
    		
    		jQuery('.argus_klassenraden_remove_action_btn').click(function(){
        		var id = this.id.replace('argus_klassenraden_remove_action_','');
        		jQuery('#argus_klassenraden_action_'+id).remove();
        		update_backgrounds();
        	});
    	});
    	
    	jQuery('.argus_klassenraden_remove_action_btn').click(function(){
    		var id = this.id.replace('argus_klassenraden_remove_action_','');
    		jQuery('#argus_klassenraden_action_'+id).remove();
    		update_backgrounds();
    	});
    	
    	function update_backgrounds(){
    		set_background_rows('studiebegeleiding');
    		set_background_rows('afwezigheden');
    		set_background_rows('gedrag');
    		set_background_rows('andere');
    	};
    	update_backgrounds();
});