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
	    
	    // Absences reports period chart
	    if (document.getElementById('absences_reports_chart')){
		    var options = {
		        title: 'Per schooljaar',
		        colors: ['#006A32'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxAbsencesReports+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('absences_reports_chart'));
		    chart.draw(dataAbsencesReportsChart, options);
	    }
	    
	    // Substitutions executed period chart
	    if (document.getElementById('substitutions_executed_chart')){
		    var options = {
		        title: 'Vervangingen per maand (laatste 12 maanden)',
		        colors: ['#006A32'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxSubstitutions+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.LineChart(document.getElementById('substitutions_executed_chart'));
		    chart.draw(dataSubstitutionsChart, options);
	    }

	    // CVT period chart
	    if (document.getElementById('cvt_chart')){
		    var options = {
		        title: 'Aangevraagd: goedgekeurd / geannuleerd per schooljaar',
		        colors: ['#006A32', '#ff0000'],
		        chartArea: {width: '90%', height: '60%'},
		        legend: 'bottom',
		        seriesType: 'bars',
		        series: {
		        	1: {
		        		type: 'line'
		        	}
		        },
		        vAxis: {
		            viewWindow: {
		                max: maxCVT+1,
		                min: 0
		            },
		            format: '0'
		        },
		        hAxis: {
		        	slantedText: true,
		        	slantedTextAngle: 45,
	                textStyle : {
	                    fontSize: 7
	                }
		        }
		    };
		    var chart = new google.visualization.ComboChart(document.getElementById('cvt_chart'));
		    chart.draw(dataCVTChart, options);
	    }
	    
	    // Pupil reports period chart
	    if (document.getElementById('pupil_reports_chart')){
		    var options = {
		        title: 'Meldingen per maand (laatste 12 maanden)',
		        colors: ['#006CB7'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxPupilReports+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('pupil_reports_chart'));
		    chart.draw(dataPupilReportsChart, options);
	    }
	    
	    // EMA-IMA period chart
	    if (document.getElementById('emaima_chart')){
		    var options = {
		        title: 'Aanvragen & deelnames (per schooljaar)',
		        colors: ['#006CB7', '#ff0000', '#c7c013'],
		        chartArea: {width: '90%', height: '60%'},
		        legend: 'bottom',
		        seriesType: 'bars',
		        series: {
		        	1: {
		        		type: 'line'
		        	}
		        },
		        vAxis: {
		            viewWindow: {
		                max: maxEMAIMA+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ComboChart(document.getElementById('emaima_chart'));
		    chart.draw(dataEMAIMAChart, options);
	    }
	    
	    // Technical reports period chart
	    if (document.getElementById('technical_reports_chart')){
		    var options = {
		        title: 'Meldingen per maand (laatste 12 maanden)',
		        colors: ['#c7c013'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxTechnicalReports+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('technical_reports_chart'));
		    chart.draw(dataTechnicalReportsChart, options);
	    }
	    
	    // Works period chart
	    if (document.getElementById('works_chart')){
		    var options = {
		        title: 'Registraties',
		        colors: ['#006CB7'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxWorks+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('works_chart'));
		    chart.draw(dataWorksChart, options);
	    }
	    
	    // Stages - attendant period chart
	    if (document.getElementById('stages_attendant_chart')){
		    var options = {
		        title: 'Aantal stagedossiers',
		        colors: ['#006CB7'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxStagesAttendant+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('stages_attendant_chart'));
		    chart.draw(dataStagesAttendantChart, options);
	    }
	    
	    // Stages - visits period chart
	    if (document.getElementById('stages_visits_chart')){
		    var options = {
		        title: 'Stagebezoeken per maand (laatste 12 maanden)',
		        colors: ['#006CB7'],
		        chartArea: {width: '90%', height: '70%'},
		        legend: 'none',
		        vAxis: {
		            viewWindow: {
		                max: maxStagesVisits+1,
		                min: 0
		            },
		            format: '0'
		        }
		    };
		    var chart = new google.visualization.ColumnChart(document.getElementById('stages_visits_chart'));
		    chart.draw(dataStagesVisitsChart, options);
	    }
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