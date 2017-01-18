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

if (typeof google != "undefined"){
	google.setOnLoadCallback(drawChart);
	
	function drawChart() {
	    // Absences totals chart
	    if (document.getElementById('absenses_chart_totals')){
	        var options = {
	            title: 'Totalen per code',
	            chartArea: {width: '80%', height: '70%'},
	            legend: 'none',
	            vAxis: {
	                format: '0'
	            }
	        };
	        var chart = new google.visualization.ColumnChart(document.getElementById('absenses_chart_totals'));
	        chart.draw(dataAbsencesChart, options);
	    }
	    
	    // Absences evolution chart
	    var options = {
	        title: 'Evolutie afwezigheden',
	        colors: ['red', 'green'],
	        chartArea: {width: '80%', height: '60%'},
	        legend: {position: 'bottom'},
	        vAxis: {
	            format: '0'
	        }
	    };
	    var chart = new google.visualization.LineChart(document.getElementById('absenses_chart_evolution'));
	    chart.draw(dataAbsencesEvolutionChart, options);
	
	    // Absences week chart
	    var options = {
	        title: 'Afwezigheden per weekdag',
	        chartArea: {width: '80%', height: '70%'},
	        legend: 'none',
	        vAxis: {
	            format: '0'
	        }
	    };
	    var chart = new google.visualization.ColumnChart(document.getElementById('absenses_chart_week'));
	    chart.draw(dataAbsencesWeekChart, options);
	
	    // Absences period chart
	    if (document.getElementById('absenses_chart_periods')){
		    var options = {
		        title: 'Afwezigheden per periode',
		        colors: ['green', 'red'],
		        chartArea: {width: '80%', height: '70%'},
		        legend: {position: 'bottom'},
		        vAxis: {
		            viewWindow: {
		                max: maxAbsences+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('absenses_chart_periods'));
		    chart.draw(dataAbsencesPeriodsChart, options);
	    }
	    
	    // Late week chart
	    var options = {
	        title: 'Te laat komen per weekdag',
	        legend: 'none',
	        chartArea: {width: '80%', height: '80%'},
	        colors: ['lightsalmon'],
	        vAxis: {
	            format: '0'
	        }
	    };
	    var chart = new google.visualization.ColumnChart(document.getElementById('late_chart_week'));
	    chart.draw(dataLateWeekChart, options);
	    
	    // Behaviour evolution chart
	    var options = {
	        title: 'Status van de meldingen',
	        legend: {position: 'bottom'},
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
	
	    // Stage absences period chart
	    if (document.getElementById('stage_chart_periods')){
		    var options = {
		        title: 'Afwezigheden per periode',
		        colors: ['green', 'red'],
		        chartArea: {width: '80%', height: '70%'},
		        legend: {position: 'bottom'},
		        vAxis: {
		            viewWindow: {
		                max: maxAbsencesStage+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('stage_chart_periods'));
		    chart.draw(dataStagePeriodsChart, options);
	    }
	    
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
	                format: '0'
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
}