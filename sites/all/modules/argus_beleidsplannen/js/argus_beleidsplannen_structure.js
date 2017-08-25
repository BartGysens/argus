/* 
 * Copyright (C) 2017 bartgysens
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

jQuery(document)
		.ready(
				function() {
					google.charts.load('current', {
						packages : [ "orgchart" ]
					});
					google.charts.setOnLoadCallback(drawChart);

					function drawChart() {
						var data2 = new google.visualization.DataTable();
						data2.addColumn('string', 'Name');
						data2.addColumn('string', 'Manager');
						data2.addColumn('string', 'ToolTip');

						// For each orgchart box, provide the name, manager, and tooltip to show.
						data2.addRows(data);
						
						// Create the chart.
						var chart = new google.visualization.OrgChart(document
								.getElementById('chart_div'));

						// Draw the chart, setting the allowHtml option to true
						// for the tooltips.
						chart.draw(data2, {
							allowHtml : true
						});
					}
				});