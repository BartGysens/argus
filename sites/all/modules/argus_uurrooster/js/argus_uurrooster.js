/* 
 * Copyright (C) 2015 bartgysens
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
    jQuery('#argus_uurrooster_change_classes').change(function(){
        window.location = '/uurrooster/klas/' + this.value;
    });
    jQuery('#argus_uurrooster_change_user_lkr').change(function(){
        window.location = '/uurrooster/leerkracht/' + this.value;
    });
    jQuery('#argus_uurrooster_change_user_lln').change(function(){
        window.location = '/uurrooster/leerling/' + this.value;
    });
    jQuery('#argus_uurrooster_change_rooms').change(function(){
        window.location = '/uurrooster/lokaal/' + this.value;
    });
    
    jQuery('.lesson').hover(
        function(){
            var classes = this.className.split(/\s+/);
            jQuery('.' + classes[1]).addClass('lessonOver');
        },
        function(){
            var classes = this.className.split(/\s+/);
            jQuery('.' + classes[1]).removeClass('lessonOver');
        }
    );
});

function argus_uurrooster_getDetails(nid,t){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + nid).addClass('lessonDetail');
    
    if (typeof nid === 'undefined'){
    	nid = null;
    }
    if (typeof t === 'undefined'){
    	t = null;
    }
    
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/lesson.retrieve",
        data: {
        	nid: nid,
        	t: t
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
                jQuery('#argus_uurrooster_schedule_details').html(msg);
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}

function argus_uurrooster_toggle_students(nid){
    jQuery('#students_' + nid).toggle();
    if (jQuery('#students_' + nid).css('display') == 'block'){
        jQuery('#class_' + nid).html('-');
    } else {
        jQuery('#class_' + nid).html('+');
    }
}

function argus_uurrooster_getFreeRooms(pid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + pid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/freeRooms.retrieve",
        data: {
            pid: pid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
                jQuery('#argus_uurrooster_schedule_details').html(msg);
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}

function argus_uurrooster_getOccupiedRooms(pid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + pid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/occupiedRooms.retrieve",
        data: {
            pid: pid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
                jQuery('#argus_uurrooster_schedule_details').html(msg);
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}

function argus_uurrooster_getFreeTeachers(pid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + pid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/freeTeachers.retrieve",
        data: {
            pid: pid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
                jQuery('#argus_uurrooster_schedule_details').html(msg);
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}


function argus_uurrooster_substitution_create(uid,pid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + uid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/substitution.create",
        data: {
            uid: uid,
            pid: pid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
            	location.reload();
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}

function argus_uurrooster_substitution_delete(nid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + nid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/substitution.delete",
        data: {
            nid: nid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
            	location.reload();
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}


function argus_uurrooster_getSupervisionDetails(did,lid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + did + '-' + lid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/supervision.retrieve",
        data: {
            did: did,
            lid: lid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
                jQuery('#argus_uurrooster_schedule_details').html('<a id="argus_uurrooster_overloaded_toggler" href="#" onclick="javascript: argus_uurrooster_overloaded_toggle();">toon de rode gebruikers</a><hr />' + msg);
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}

function argus_uurrooster_overloaded_toggle(){
	var status = jQuery('#argus_uurrooster_overloaded_toggler').html();
	if (status == 'toon de rode gebruikers'){
		jQuery('.argus_uurrooster_overloaded').show();
		jQuery('#argus_uurrooster_overloaded_toggler').html('verberg de rode gebruikers');
	} else {
		jQuery('.argus_uurrooster_overloaded').hide();
		jQuery('#argus_uurrooster_overloaded_toggler').html('toon de rode gebruikers');
	}
}

function argus_uurrooster_supervision_create(uid,did,lid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + uid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/supervision.create",
        data: {
            uid: uid,
            did: did,
            lid: lid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
            	location.reload();
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}

function argus_uurrooster_supervision_delete(nid){
    jQuery('#argus_uurrooster_schedule_details').html('<img src="/sites/all/modules/argus_uurrooster/images/waiter.gif" />');
    jQuery('.lessonDetail').removeClass('lessonDetail');
    jQuery('#lesson_' + nid).addClass('lessonDetail');
    var jqxhr = jQuery.ajax({
        type: "POST",
        url: "/uurrooster/supervision.delete",
        data: {
            nid: nid
        },
        success: function(msg){
            if (msg == 0){
                // statusNotOK
                jQuery('#argus_uurrooster_schedule_details').html('Error: id not found');
            } else {
            	location.reload();
            };
        },
        error: function(msg){
            // statusFail
            jQuery('#argus_uurrooster_schedule_details').html('Error: request not found - system offline');
        }
    });
}