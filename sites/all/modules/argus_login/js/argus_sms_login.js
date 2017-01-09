/* 
 * Copyright (C) 2014 bartgysens
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

var currentScrollDiv = "statusOK";
function scrollDown(scrollDiv){
    if (currentScrollDiv!=scrollDiv){
        jQuery('#'+currentScrollDiv).animate({
            top: 70
        }, 1000);
        jQuery('#'+scrollDiv).animate({
            top: 0
        }, 1000);
        jQuery('#'+currentScrollDiv).css({
            top: -70
        });
        currentScrollDiv = scrollDiv;
    }
}

jQuery( document ).ready( function(){
    jQuery( '#edit-name--2' ).focus();
    jQuery( '#edit-name--2' ).keypress(function(){
        if ( event.keyCode === 13 ){
            jQuery( '#edit-pass--2' ).focus();
        }
    });
    jQuery( '#edit-pass--2' ).keypress(function(){
        if ( event.keyCode === 13 ){
            jQuery( '#edit-submit--2' ).click();
        }
    });
    jQuery( '#edit-submit--2' ).click(function(){
        if ( username = jQuery( '#edit-name--2' ).val()){
            if ( password = jQuery( '#edit-pass--2' ).val()){
                scrollDown('statusCheck');
                return true;
            }else{
                scrollDown('statusNoPassword');
                return false;
            }
        }else{
            scrollDown('statusNoUsername');
            return false;
        }
    });
    
    jQuery( '#smsLostPassword' ).hide();
    jQuery( '#smsLoginpage' ).hide();
    jQuery( '#recover' ).click(function(){
        jQuery( '#smsLogin' ).hide();
        jQuery( '#smsLostPassword' ).show();
        
        jQuery( '#recover' ).hide();
        jQuery( '#smsLoginpage' ).show();
    });
    
    jQuery( '#smsLoginpage' ).click(function(){
        jQuery( '#smsLostPassword' ).hide();
        jQuery( '#smsLogin' ).show();
        
        jQuery( '#smsLoginpage' ).hide();
        jQuery( '#recover' ).show();
    });
});