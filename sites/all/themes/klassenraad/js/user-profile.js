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
 * 
 */

google.setOnLoadCallback(drawChart);
function drawChart() {
    // Absences totals chart
    if (document.getElementById('absenses_chart_totals')){
        var options = {
            title: 'Totalen per code',
            chartArea: {width: '80%', height: '70%'},
            legend: 'none'
        };
        var chart = new google.visualization.ColumnChart(document.getElementById('absenses_chart_totals'));
        chart.draw(dataAbsencesChart, options);
    }
    
    // Absences evolution chart
    var options = {
        title: 'Evolutie afwezigheden',
        colors: ['red', 'green'],
        chartArea: {width: '80%', height: '60%'},
        legend: {position: 'bottom'}
    };
    var chart = new google.visualization.LineChart(document.getElementById('absenses_chart_evolution'));
    chart.draw(dataAbsencesEvolutionChart, options);
    
    // Absences week chart
    var options = {
        title: 'Afwezigheden per weekdag',
        chartArea: {width: '80%', height: '70%'},
        legend: 'none'
    };
    var chart = new google.visualization.ColumnChart(document.getElementById('absenses_chart_week'));
    chart.draw(dataAbsencesWeekChart, options);
    
    // Late week chart
    var options = {
        title: 'Te laat komen per weekdag',
        legend: 'none',
        chartArea: {width: '80%', height: '80%'},
        colors: ['lightsalmon']
    };
    var chart = new google.visualization.ColumnChart(document.getElementById('late_chart_week'));
    chart.draw(dataLateWeekChart, options);
    
    // Behaviour evolution chart
    var options = {
        title: 'Status van de meldingen',
        legend: {position: 'right'},
        colors: ['green', 'red'],
        chartArea: {width: '80%', height: '75%'},
        pointSize: 2,
        vAxis: {
            viewWindow: {
                max: maxReportsBehaviour,
                min: 0
            },
            gridlines: {
                count: maxReportsBehaviour+1
            }
        }
    };
    var chart = new google.visualization.LineChart(document.getElementById('behaviour_chart_evolution'));
    chart.draw(dataBehaviourChart, options);
    
    // Study results fails chart
    if (document.getElementById('study_chart_fails')){
        var options = {
            title: 'Evolutie van de tekorten op totaal aantal vakken',
            legend: 'none',
            colors: ['green', 'red'],
            chartArea: {width: '80%', height: '80%'},
            isStacked: true,
            vAxis: {
                viewWindow: {
                    max: maxFails,
                    min: 0
                },
                gridlines: {
                    count: maxFails+1
                }
            }
        };
        var chart = new google.visualization.ColumnChart(document.getElementById('study_chart_fails'));
        chart.draw(dataStudyFailsChart, options);
    
        // Study course typed percentages graph
        var options = {
            colors: ['orange', 'blue', 'purple', 'lightgreen'],
            chartArea: {width: '80%', height: '80%'}
        };
        var chart = new google.visualization.PieChart(document.getElementById('study_chart_course_type'));
        chart.draw(dataStudyCourseTypeChart, options);
    }
    
    // Study birdseye graph
    var options = {
        colors: ['red', 'green'],
        chartArea: {width: '80%', height: '80%'}
    };
    var chart = new google.visualization.PieChart(document.getElementById('study_chart_birdseye'));
    chart.draw(dataStudyBirdseyeChart, options);
}

function resizeChart () {
    drawChart();
}
if (document.addEventListener) {
    window.addEventListener('resize', resizeChart);
}
else if (document.attachEvent) {
    window.attachEvent('onresize', resizeChart);
}
else {
    window.resize = resizeChart;
}

jQuery(document).ready(function($) {
    if (jQuery('#results0')){
        jQuery('#results0').show();
        jQuery('#selectResults').change(function(){
            jQuery('.results').hide();
            jQuery('#results'+this.value).show();
        });
    }
    
    var scrollLefts = [];
    var refX = jQuery('#classNavBarContainer').width() - 94;
    var cssCorrection = 30;
    var userTags = jQuery('.userTags');
    var widthContainer = jQuery('#classNavBarContainerScroll').outerWidth();
    var navBar = jQuery('#classNavBar');
    var navBarW = navBar[0].offsetWidth;
    jQuery('#classNavToolsLeft').click(function(){
        var startX = jQuery('#classNavBarContainerScroll').scrollLeft();
        for (ut = 0; ut < userTags.length; ut++){
            var posX = userTags[ut].offsetLeft;
            var posW = jQuery('#'+userTags[ut].id).outerWidth();
            if (posX+posW+cssCorrection-startX > refX && startX+widthContainer<navBarW){
                scrollLefts.push(jQuery('#classNavBarContainerScroll').scrollLeft());
                jQuery('#classNavBarContainerScroll').animate({scrollLeft: posX}, 1000);
                break;
            }
        }
    });
    jQuery('#classNavToolsRight').click(function(){
        if (scrollLefts.length){
            var posX = scrollLefts[scrollLefts.length-1];
            jQuery('#classNavBarContainerScroll').animate({scrollLeft: posX}, 1000);
            scrollLefts.pop();
        }
    });
    jQuery('#classNavToolsSteps').bind('click', function(e){
        if (nextStudent){
            window.open(nextStudent, '_self');
        }
    });
    jQuery('#classNavToolsSteps').bind('contextmenu', function(e){
        jQuery('#classNavToolsMenu').fadeIn(500);
        return false;
    });
    
    jQuery('#classNavToolsMenu').hide();
    jQuery('#classNavToolsMenu').bind('mouseleave',function(){
        jQuery('#classNavToolsMenu').fadeOut(500);
    });
        
    jQuery('#classNavToolsMenuClassSelect').change(function(){
        window.open(this.value, '_self');
    });
    jQuery('#classNavToolsMenuStudentsSelect').change(function(){
        window.open(this.value, '_self');
    });
    
    jQuery('#profile-admin-photo').mouseover(function(){
        jQuery('#profile-admin-photo-full').animate({
            opacity: 1,
            width: "toggle"
        }, 500);
    });
    jQuery('#profile-admin-photo-full').mouseout(function(){
        jQuery('#profile-admin-photo-full').animate({
            opacity: 0,
            width: "toggle"
        }, 250);
    });
});