/**
 * Copyright 2017 - Bart Gysens
 */

jQuery(document).ready(function() {

	// Chart actions
    if (document.getElementById('chart_actions')){
        var options = {
            chartArea: {width: '80%', height: '70%'},
            legend: { position: 'top', maxLines: 1 },
            bar: { groupWidth: '90%' },
            isStacked: true,
            vAxis: {
                gridlines: { count: -1},
                title: '(aantal)'
              }
        };
        
        var chart = new google.visualization.ColumnChart(document.getElementById('chart_actions'));
        chart.draw(dataActions, options);
    }
    
	// Chart budget
    if (document.getElementById('chart_budget')){
        var options = {
            chartArea: {width: '80%', height: '70%'},
            legend: { position: 'top', maxLines: 1 },
            bar: { groupWidth: '90%' },
            isStacked: true,
            vAxis: {
                title: '(in euro)'
            },
            series: {
                0: { color: 'gray' },
                1: { color: 'green' }
            }
        };
        
        var chart = new google.visualization.ColumnChart(document.getElementById('chart_budget'));
        chart.draw(dataBudget, options);
    }
    
	// Chart executors
    if (document.getElementById('chart_executors')){
        var options = {
            chartArea: {width: '80%', height: '70%'},
            legend: 'none',
            bar: { groupWidth: '90%' },
            vAxis: {
                gridlines: { count: -1},
                title: '(aantal betrokkenen)'
	        },
	        series: {
	            0: { color: 'purple' }
	        }
        };
        
        var chart = new google.visualization.ColumnChart(document.getElementById('chart_executors'));
        chart.draw(dataExecutors, options);
    }
});