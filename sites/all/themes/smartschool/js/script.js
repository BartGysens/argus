/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.
    
    $( document ).ready(function(){
       $( '.menu-ga a' ).click(function(){
           if ($( '#smscQuickNavDialog' ).css( 'display' ) == 'none'){
               $( '#smscQuickNavDialog' ).css( 'display', 'block' );
           }else{
               $( '#smscQuickNavDialog' ).css( 'display', 'none' );
           }
           
           return false;
       });
       $( 'body' ).click(function(){
           $( '#smscQuickNavDialog' ).css( 'display', 'none' );
       });
       
       $( '#sms_mytasks' ).click(function(){
           $( '.tabbar a' ).removeClass('active');
           $( this ).addClass('active');
           $( '#courses_lists div.list' ).addClass('hidden_list');
           $( '#sms_mytasks_list' ).removeClass('hidden_list');
           $( '#courses_title' ).html("Mijn taken");
           return false;
       });
       $( '#sms_mypeople' ).click(function(){
           $( '.tabbar a' ).removeClass('active');
           $( this ).addClass('active');
           $( '#courses_lists div.list' ).addClass('hidden_list');
           $( '#sms_mypeople_list' ).removeClass('hidden_list');
           $( '#courses_title' ).html("Mijn collega's");
           return false;
       });
       $( '#sms_myitems' ).click(function(){
           $( '.tabbar a' ).removeClass('active');
           $( this ).addClass('active');
           $( '#courses_lists div.list' ).addClass('hidden_list');
           $( '#sms_myitems_list' ).removeClass('hidden_list');
           $( '#courses_title' ).html("Mijn inhoud");
           return false;
       });
       $( '#sms_myquicklinks' ).click(function(){
           $( '.tabbar a' ).removeClass('active');
           $( this ).addClass('active');
           $( '#courses_lists div.list' ).addClass('hidden_list');
           $( '#sms_myquicklinks_list' ).removeClass('hidden_list');
           $( '#courses_title' ).html("Mijn koppelingen");
           return false;
       });
       
       $( '#sms_myitems_list_orderTitle' ).click(function(){
           $( '.sms_myitems_list_results' ).removeClass('active');
           $( '#sms_myitems_list_byTitle' ).addClass('active');
           $( '#sms_myitems_list_order a' ).removeClass('active');
           $( '#sms_myitems_list_orderTitle' ).addClass('active');
           return false;
       });
       $( '#sms_myitems_list_orderCreated' ).click(function(){
           $( '.sms_myitems_list_results' ).removeClass('active');
           $( '#sms_myitems_list_byCreated' ).addClass('active');
           $( '#sms_myitems_list_order a' ).removeClass('active');
           $( '#sms_myitems_list_orderCreated' ).addClass('active');
           return false;
       });
       $( '#sms_myitems_list_orderChanged' ).click(function(){
           $( '.sms_myitems_list_results' ).removeClass('active');
           $( '#sms_myitems_list_byChanged' ).addClass('active');
           $( '#sms_myitems_list_order a' ).removeClass('active');
           $( '#sms_myitems_list_orderChanged' ).addClass('active');
           return false;
       });
       $( '#sms_myitems_list_orderType' ).click(function(){
           $( '.sms_myitems_list_results' ).removeClass('active');
           $( '#sms_myitems_list_byType' ).addClass('active');
           $( '#sms_myitems_list_order a' ).removeClass('active');
           $( '#sms_myitems_list_orderType' ).addClass('active');
           return false;
       });
       
       $( 'li.course.node' ).click(function(){
           window.open('/node/' + this.id,'_self');
           return false;
       });
       
       $( '#legend_reports' ).mouseover(function(){
           $( '#legend_reports_ul' ).show();
       });
       $( '#legend_reports_ul' ).mouseout(function(){
           $( '#legend_reports_ul' ).hide();
       });
    });

  }
};


})(jQuery, Drupal, this, this.document);


if (typeof google !== 'undefined'){
	function drawChart() {
	    // Behaviour evolution chart
	    if (document.getElementById('reports_chart')){
	        var options = {
	            title: 'Maandelijkse evolutie',
	            legend: {position: 'none'},
	            colors: ['green', 'red', '#006CB7', '#B00057', 'gray'],
	            chartArea: {width: '90%', height: '75%'},
	            pointSize: 2,
	            vAxis: {
	                viewWindow: {
	                    max: maxReports,
	                    min: 0
	                }
	            }
	        };
	        var chart = new google.visualization.LineChart(document.getElementById('reports_chart'));
	        chart.draw(dataReportsChart, options);
	    }
	}
	if (typeof google.setOnLoadCallback == 'function'){
		google.setOnLoadCallback(drawChart);
	}
}

function resizeChart() {
	if (typeof drawChart === 'function'){
	    drawChart();
	}
}

if (document.addEventListener) {
    window.addEventListener('resize', resizeChart);
} else if (document.attachEvent) {
    window.attachEvent('onresize', resizeChart);
} else {
    window.resize = resizeChart;
}