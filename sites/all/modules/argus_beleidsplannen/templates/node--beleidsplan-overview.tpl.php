<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */

$executors = array();
$schoolyears = array();

$trok_opts = 0;
$tactions = 0;
$tbudget = 0;
$trest = 0;

$tstatus = '-';

$startdate = '-';
$enddate = '-';

?>

<div class="view">
    <div class="view-header">
        <p><a href="<?php print base_path() . 'node/' . $nid . '/actieplan'; ?>">Werk het actieplan bij</a> - <a href="<?php print base_path() . 'node/' . $nid . '/administratief'; ?>">Bekijk de administratieve fiche</a></p>
    </div>
</div>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?>: overzicht</a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
        <div class="submitted">
            <?php print $submitted; ?>
        </div>
    <?php endif; ?>
    
    <div class="content"<?php print $content_attributes; ?>>
    	
    	<div class="onlyPrint pageEnd">
    		<div id="argus_beleidsplannen_title_container">
    			<div style="font-size: smaller; color: gray;">Beleidsplan</div>
    			<div style="font-weight: bold;"><?php print $title; ?></div>
    		</div>
    	</div>
    
        <h1 class="title">Visie</h1>
        
        <div class="pageEnd"><?php print $node->body[LANGUAGE_NONE][0]['value']; ?></div>
        
        <h1 class="title">Strategische doelstellingen</h1>
        
        <div class="pageEnd">
        	<?php if ( array_key_exists( LANGUAGE_NONE, $node->field_beleidsplan_doelstellingen ) ) { ?>
	        <ul>
	        <?php
	        
	        foreach ($node->field_beleidsplan_doelstellingen [LANGUAGE_NONE] as $d){
	        	print '<li>' . $d['value'] . '</li>';
	        }
	        
	        ?>
	        </ul>
	        <?php } else { print 'er werden geen strategische doelstellingen vastgelegd'; } ?>
        </div>
        
        <h1 class="title">Operationele doelstellingen</h1>
        
        <?php if ( array_key_exists( LANGUAGE_NONE, $node->field_beleidsplan_op_doelst ) ) { ?>
        <div>
	        <ul>
		        <?php foreach ($node->field_beleidsplan_op_doelst [LANGUAGE_NONE] as $k => $d){ $ref = md5 ( $d ['value'] ); ?>
		        	<li>
		        		<div class="pageEnd">
			        		<h4><?php print $d['value'] . ' <sup style="color: red;">(' . ($k+1) . ')</sup></h4>'; ?>
			        		
			        		<?php if (count($actions[$ref])) { ?>
					        	<fieldset class="collapsible">
						        	<legend>
						        		<span class="fieldset-legend"><a class="fieldset-title" href="#">deelactieplan verbergen / tonen</a></span>
						        	</legend>
						        	<div class="fieldset-wrapper">
							        	<table class="argus_beleidsplannen_actieplan">
								        	<thead>
									        	<tr>
									        		<th>actie</th>
									        		<th>deadline</th>
									        		<th>uitvoerder</th>
									        		<th>budget</th>
									        		<th><a href="http://mijnschoolisok.be/" target="_blank">OK</a> / <a href="http://www.onderwijsinspectie.be/" target="_blank">Inspectie 2.0</a></th>
									        		<th>status</th>
									        	</tr>
									        </thead>
									        <tbody>
									        	<?php
									        	$ref = md5 ( $d ['value'] );
									        	
									        	$i = 0;
									        	foreach ( $actions[$ref] as $d ) {
									        		print '<tr class="'.($i%2 == 0 ? "even" : "odd").'"><td>' . $d ['description'] . '</td><td>' . $d ['deadline'] . '</td><td><a href="' . base_path() . drupal_get_path_alias('user/' . $d ['gebruiker']) . '">' . argus_get_user_realname($d ['gebruiker']) . '</a></td><td>' . $d ['budget'] . '</td><td><ul><li>' . (count($d ['rok_opt']) ? implode( '</li><li>', $d ['rok_opt'] ) : '<em>geen verwijzingen naar het OK</em>' ) . '</li></ul></td><td>' . $d ['status'] . '</td></tr>';
									        		$i++;
									        		
									        		$trok_opts += count( $d ['rok_opt'] );
									        	}
									        	
									        	?>
								        	</tbody>
							        	</table>
			        				</div>
					        	</fieldset>
					        <?php } else { print '<em style="font-size: smaller;">geen acties gedefinieerd</em>'; } ?>
				        </div>
		        	</li>
		        <?php } ?>
	        </ul>
        </div>
        <?php } else { print '<div class="pageEnd">er werden geen operationele doelstellingen vastgelegd</div>'; } ?>
        
        <h1 class="title">Jaaractieplan(nen)</h1>
        
        <div class="pageEnd">
	        <?php if (count($action_plan)) { ?>
	        	<table class="argus_beleidsplannen_actieplan">
		        	<thead>
			        	<tr>
			        		<th>deadline</th>
			        		<th>actie</th>
			        		<th>uitvoerder</th>
			        		<th>budget (in euro)</th>
			        		<th>status</th>
			        		<th class="views-align-center" title="operationele doelstelling (zie nummer boven achter elke doelstelling)">OD</th>
			        		<th class="views-align-center" title="onderwijs kader (Inspectie 2.0)">OK</th>
			        	</tr>
			        </thead>
			        <tbody>
				        <?php
				        $i = 0;
				        $schoolyear = 0;
				        $all_actions = array();
				        $all_budgets = array();
				        $all_executors = array();
			        	foreach($action_plan as $ad => $ap) {
			        		$ad_sj_y = date('Y', strtotime($ad));
				        	$ad_sj_m = date('m', strtotime($ad));
				        	if ($ad_sj_m < 9){
				        		$ad_sj_y--;
				        	}
				        	
				        	$ad_sj = $ad_sj_y . ' - ' . ($ad_sj_y + 1);
				        	if ($schoolyear != $ad_sj){
				        		$schoolyear = $ad_sj;
				        		$i = 0;

				        		$all_actions[ $ad_sj ] = array( 'ok' => 0, 'nok' => 0 );
				        		$all_budgets[ $ad_sj ] = array( 'ok' => 0, 'nok' => 0 );
				        		$all_executors[ $ad_sj ] = array();
				        		
				        		print '<tr class="schoolyear"><td colspan="10">schooljaar ' . $schoolyear . '</td></tr>';
			        		}
				        	
				        	foreach ( $ap as $k => $d ) {
				        		if ($k == 0) {
				        			print '<tr class="'.($i%2 == 0 ? "even" : "odd").'" rowspan="'. count($ap) .'"><td>' . $d ['deadline'] . '</td>';
				        		} else {
				        			print '<tr><td></td>';
				        		}
				        	
				        		print '<td>' . $d ['description'] . '</td><td><a href="' . base_path() . drupal_get_path_alias('user/' . $d ['gebruiker']) . '">' . argus_get_user_realname($d ['gebruiker']) . '</a></td><td>' . $d ['budget'] . '</td><td>' . $d ['status'] . '</td><td class="views-align-center">' . $d ['cntr'] . '</td><td class="views-align-center">' . count( $d ['rok_opt'] ) . '</td></tr>';
				        		
				        		$i++;
				        		
				        		if ($d [ 'status' ] == 'afgehandeld' || $d [ 'status' ] == 'geannuleerd' ){
				        			$all_actions[ $ad_sj ] [ 'ok' ]++;
				        			$all_budgets[ $ad_sj ] [ 'ok' ] += $d ['budget'];
				        		} else {
				        			$all_actions[ $ad_sj ] [ 'nok' ]++;
				        			$all_budgets[ $ad_sj ] [ 'nok' ] += $d ['budget'];
				        		}
				        		
				        		$all_executors[ $ad_sj ] [] = $d ['gebruiker'];
			        		}
			        	}
			        	
			        	?>
					</tbody>
				</table>
			<?php } else { print '<em style="font-size: smaller;">geen acties gedefinieerd</em>'; } ?>
		</div>
        
        <h1 class="title">Financieel plan</h1>
        
        <div class="pageEnd">
	        <?php if (count($action_plan)) { ?>
	        	
		        <h2 class="title">Planning per operationele doelstelling</h2>
		        
		        <div class="pageEnd">
		        	<table class="argus_beleidsplannen_actieplan">
			        	<thead>
				        	<tr>
				        		<th class="views-align-left" title="operationele doelstelling (zie nummer boven achter elke doelstelling)">OD</th>
				        		<th class="views-align-center">status</th>
				        		<th class="views-align-right">budget (in euro)</th>
				        		<th class="views-align-right">resterend (in euro)</th>
				        	</tr>
				        </thead>
				        <tbody>
				        	<?php
	
				        	$tbudget = 0;
				        	$tactions = 0;
				        	$tstatus = 0;
				        	$trest = 0;
				        	foreach ($node->field_beleidsplan_op_doelst [LANGUAGE_NONE] as $k => $d) {
				        		$ref = md5 ( $d ['value'] );
				        		
				        		$budget = 0;
				        		$status = 0;
				        		$rest = 0;
				        		foreach ( $actions[$ref] as $a ) {
				        			$budget += $a ['budget'];
				        			if ($a ['status'] == 'afgehandeld' || $a ['status'] == 'geannuleerd'){
				        				$rest += $a ['budget'];
				        				$status++;
				        			}
				        		}
								
				        		if ( count( $actions [$ref] ) ) {
					        		$tstatus += $status;
				        			$tbudget += $budget;
					        		$trest += $rest;
					        		$tactions += count( $actions[$ref] );
					        		
				        			$status = floor( $status * 100 / count( $actions [ $ref ] ) ) . '%';
				        			$rest = number_format( $budget - $rest, 2 );
				        		} else {
				        			$status = '-';
				        			$rest = '';
				        		}
	
				        		print '<tr class="'.($k%2 == 0 ? "even" : "odd").'"><td><span style="color: red;">(' . ($k+1) . ')</span> ' . $d['value'] . ' </td><td class="views-align-center">' . $status . '</td><td class="views-align-right">' . number_format( $budget, 2) . '</td><td class="views-align-right">' . $rest . '</td></tr>';
				        	}
				        	
				        	$trest = $tbudget - $trest;
				        	
				        	?>
						</tbody>
						<tfoot>
							<tr>
								<td></td>
								<td class="views-align-center"><?php print round( $tstatus * 100 / $tactions, 2 ); ?>%</td>
								<td class="views-align-right"><?php print number_format( $tbudget, 2 ); ?></td>
								<td class="views-align-right"><?php print number_format( $trest, 2 ) . ' (' . floor( $trest * 100 / $tbudget ) . '%)'; ?></td>
							</tr>
						</tfoot>
					</table>
				</div>
			
				<br />
				
		        <h2 class="title">Planning per verantwoordelijke</h2>
		        
		        <div class="pageEnd">
		        	<table class="argus_beleidsplannen_actieplan">
			        	<thead>
				        	<tr>
				        		<th class="views-align-left">uitvoerder</th>
				        		<th class="views-align-center">status</th>
				        		<th class="views-align-right">budget (in euro)</th>
				        		<th class="views-align-right">resterend (in euro)</th>
				        	</tr>
				        </thead>
				        <tbody>
				        	<?php
							
				        	foreach ($node->field_beleidsplan_op_doelst [LANGUAGE_NONE] as $k => $d) {
				        		$ref = md5 ( $d ['value'] );
				        		
				        		foreach ( $actions[$ref] as $a ) {
					        		$eid = $a ['gebruiker'];
					        		
					        		if ( !array_key_exists( $eid, $executors ) ){
					        			$executors [ $eid ] = array(
								        		'actions' => 0,
					        					'budget' => 0,
								        		'status' => 0,
								        		'rest' => 0,
					        			);
					        		}
	
					        		$executors [ $eid ] [ 'budget' ] += $a ['budget'];
				        			$executors [ $eid ] [ 'actions' ]++;
				        			if ($a ['status'] == 'afgehandeld' || $a ['status'] == 'geannuleerd'){
				        				$executors [ $eid ] [ 'rest' ] += $a ['budget'];
				        				$executors [ $eid ] [ 'status' ]++;
				        			}
				        		}
				        	}
				        	
				        	$i = 0;
				        	$tbudget = 0;
				        	$tactions = 0;
				        	$tstatus = 0;
				        	$trest = 0;
				        	foreach ($executors as $eid => $e){
				        		$tactions += $e [ 'actions' ];
				        		$tstatus += $e [ 'status' ];
				        		
				        		if ( $e [ 'budget' ] ){
					        		$tbudget += $e [ 'budget' ];
					        		$trest += $e [ 'rest' ];
	
					        		$e [ 'rest' ] = number_format( $e [ 'budget' ] - $e [ 'rest' ], 2);
					        		$e [ 'budget' ] = number_format( $e [ 'budget' ], 2);
					        		$e [ 'status' ] = floor( $e ['status'] * 100 /$e [ 'actions' ] ) . '%';
				        		} else {
				        			$e [ 'status' ] = '-';
				        			$e [ 'rest' ] = '';
				        		}
				        		
				        		print '<tr class="'.(($i++)%2 == 0 ? "even" : "odd").'"><td><a href="' . base_path() . drupal_get_path_alias('user/' . $eid) . '">' . argus_get_user_realname($eid) . '</a></td><td class="views-align-center">' . $e ['status'] . '</td><td class="views-align-right">' . $e[ 'budget' ] . '</td><td class="views-align-right">' . $e [ 'rest' ] . '</td></tr>';
				        	}
				        	
				        	$trest = $tbudget - $trest;
				        	
				        	?>
						</tbody>
						<tfoot>
							<tr>
								<td></td>
								<td class="views-align-center"><?php print round( $tstatus * 100 / $tactions, 2 ); ?>%</td>
								<td class="views-align-right"><?php print number_format( $tbudget, 2 ); ?></td>
								<td class="views-align-right"><?php print number_format( $trest, 2 ) . ' (' . floor( $trest * 100 / $tbudget ) . '%)'; ?></td>
							</tr>
						</tfoot>
					</table>
				</div>
				
				<br />
				
		        <h2 class="title">Planning per schooljaar</h2>
		        
		        <div class="pageEnd">
			        <?php if (count($action_plan)) { ?>
			        	<table class="argus_beleidsplannen_actieplan">
				        	<thead>
					        	<tr>
					        		<th class="views-align-left">schooljaar</th>
					        		<th class="views-align-center">status</th>
					        		<th class="views-align-right">budget (in euro)</th>
					        		<th class="views-align-right">resterend (in euro)</th>
					        	</tr>
					        </thead>
					        <tbody>
						        <?php
						        
					        	foreach($action_plan as $ad => $ap) {
					        		if ( $startdate == '-' ){
					        			$startdate = $ad;
					        		}
					        		$enddate = $ad;
					        		
					        		$ad_sj_y = date('Y', strtotime($ad));
						        	$ad_sj_m = date('m', strtotime($ad));
						        	if ($ad_sj_m < 9){
						        		$ad_sj_y--;
						        	}
						        	
						        	$ad_sj = $ad_sj_y . ' - ' . ($ad_sj_y + 1);

						        	if ( !array_key_exists( $ad_sj, $schoolyears ) ){
						        		$schoolyears [ $ad_sj ] = array(
						        				'actions' => 0,
						        				'budget' => 0,
						        				'status' => 0,
						        				'rest' => 0,
						        		);
						        	}
						        	
						        	foreach ( $ap as $k => $a ) {
						        		$schoolyears [ $ad_sj ] [ 'budget' ] += $a ['budget'];
					        			$schoolyears [ $ad_sj ] [ 'actions' ]++;
					        			if ($a ['status'] == 'afgehandeld' || $a ['status'] == 'geannuleerd'){
					        				$schoolyears [ $ad_sj ] [ 'rest' ] += $a ['budget'];
					        				$schoolyears [ $ad_sj ] [ 'status' ]++;
					        			}
					        		}
					        	}
					        	
					        	$i = 0;
					        	$tbudget = 0;
					        	$tactions = 0;
					        	$tstatus = 0;
					        	$trest = 0;
					        	foreach ($schoolyears as $ad_sj => $e){
					        		$tactions += $e [ 'actions' ];
					        		$tstatus += $e [ 'status' ];
					        	
					        		if ( $e [ 'budget' ] ){
					        			$tbudget += $e [ 'budget' ];
					        			$trest += $e [ 'rest' ];
					        	
					        			$e [ 'rest' ] = number_format( $e [ 'budget' ] - $e [ 'rest' ], 2);
					        			$e [ 'budget' ] = number_format( $e [ 'budget' ], 2);
					        			$e [ 'status' ] = floor( $e ['status'] * 100 /$e [ 'actions' ] ) . '%';
					        		} else {
					        			$e [ 'status' ] = '-';
					        			$e [ 'rest' ] = '';
					        		}
					        	
					        		print '<tr class="'.(($i++)%2 == 0 ? "even" : "odd").'"><td>' . $ad_sj . '</td><td class="views-align-center">' . $e ['status'] . '</td><td class="views-align-right">' . $e[ 'budget' ] . '</td><td class="views-align-right">' . $e [ 'rest' ] . '</td></tr>';
					        	}
					        	 
					        	$trest = $tbudget - $trest;
					        	
					        	?>
							</tbody>
							<tfoot>
								<tr>
									<td></td>
									<td class="views-align-center"><?php print round( $tstatus * 100 / $tactions, 2 ); ?>%</td>
									<td class="views-align-right"><?php print number_format( $tbudget, 2 ); ?></td>
									<td class="views-align-right"><?php print number_format( $trest, 2 ) . ' (' . floor( $trest * 100 / $tbudget ) . '%)'; ?></td>
								</tr>
							</tfoot>
						</table>
					<?php } else { print '<em style="font-size: smaller;">geen acties gedefinieerd</em>'; } ?>
				</div>
		        
			<?php } else { print '<em style="font-size: smaller;">geen budgetering gedefinieerd</em>'; } ?>
		</div>
		
		
        <h1 class="title">Statusrapport</h1>
        
        <div class="pageEnd">
        	<table class="argus_beleidsplannen_status">
        		<?php 
        		
        		$params = array(
        				'Aantal strategische doelstellingen' => count( $node->field_beleidsplan_doelstellingen [LANGUAGE_NONE] ),
        				'Aantal operationele doelstellingen' => ( array_key_exists( LANGUAGE_NONE, $node->field_beleidsplan_op_doelst ) ) ? count( $node->field_beleidsplan_op_doelst [LANGUAGE_NONE] ) : 0,
        				'Aantal acties' => $tactions,
        				'Aantal acties voltooid' => ($tactions) ? $tstatus . ' (' . round( $tstatus * 100 / $tactions, 2 ) . '%)' : 'nvt',
        				'Referenties naar het <a href="http://mijnschoolisok.be/" target="_blank">OK</a> / <a href="http://www.onderwijsinspectie.be/" target="_blank">Inspectie 2.0</a>' => $trok_opts,
        				'Totaal budget' => number_format( $tbudget, 2 ) . ' euro',
        				'Totaal beschikbaar' => ($tbudget) ? number_format( $trest, 2 ) . ' euro (' . floor( $trest * 100 / $tbudget ) . '%)' : 'nvt',
        				'Totaal gebruikt' => ($tbudget) ? number_format( $tbudget - $trest, 2 ) . ' euro (' . ( 100 - floor( $trest * 100 / $tbudget ) ) . '%)' : 'nvt',
        				'Aantal verantwoordelijken' => count( $executors ),
        				'Startdatum' => ($startdate != '-') ? format_date( strtotime( $startdate ), 'custom', 'l, j F Y' ) : '-',
        				'(voorlopige) Einddatum' => ($enddate != '-') ? format_date( strtotime( $enddate ), 'custom', 'l, j F Y' ) : '-',
        		);
        		
        		$i = 0;
        		foreach ($params as $label => $value){
        			print '<tr class="'.(($i++)%2 == 0 ? "even" : "odd").'">';
	        			print '<td class="views-field views-field-title views-align-right">' . $label . ':</td>';
	        			print '<td class="views-field views-field-title views-align-left value">' . $value . '</td>';
        			print '</tr>';
        		}
        		
        		?>
        	</table>
	    
		    <?php if ($tactions) {
		    	
		    	$chartActions = array( array( 'schooljaar', 'uitgevoerd', array( 'role' => 'annotation' ), 'nog uit te voeren', array( 'role' => 'annotation' ) ) );
		    	
		    	foreach ( $all_actions as $sj => $d ){
		    		$chartActions[] = array( $sj, $d [ 'ok' ], $d [ 'ok' ], $d [ 'nok' ], $d [ 'nok' ] );
		    	}
		    	
		    	?>
			    <script type="text/javascript">
				var dataActions = google.visualization.arrayToDataTable(<?php print json_encode( $chartActions ); ?>);
				</script>
				
				<br />
				
				<h2 class="title">Evolutie van de acties</h2>
			    <div id="chart_actions" style="width: 98%; height: 300px;"></div>
		    <?php } ?>
		    
		    <?php if ($tbudget) {
		    	
		    	$chartBudget = array( array( 'schooljaar', 'verbruikt', array( 'role' => 'annotation' ), 'resterend', array( 'role' => 'annotation' ) ) );
		    	
		    	foreach ( $all_budgets as $sj => $d ){
		    		$chartBudget[] = array( $sj, $d [ 'ok' ], $d [ 'ok' ], $d [ 'nok' ], $d [ 'nok' ] );
		    	}
		    	
		    	?>
			    <script type="text/javascript">
				var dataBudget = google.visualization.arrayToDataTable(<?php print json_encode( $chartBudget ); ?>);
				</script>
				
				<br />
				
				<h2 class="title">Evolutie van het budget</h2>
				<div id="chart_budget" style="width: 98%; height: 300px;"></div>
		    <?php } ?>
		    
		    <?php if ($tactions) {
		    	
		    	$chartExecutors = array( array( 'schooljaar', 'gebruikers', array( 'role' => 'annotation' ) ) );
		    	
		    	foreach ( $all_executors as $sj => $d ){
		    		$chartExecutors[] = array( $sj, count( array_unique( $d ) ), count( array_unique( $d ) ) );
		    	}
		    	
		    	?>
			    <script type="text/javascript">
				var dataExecutors = google.visualization.arrayToDataTable(<?php print json_encode( $chartExecutors ); ?>);
				</script>
				
				<br />
				
				<h2 class="title">Evolutie van de verantwoordelijken</h2>
				<div id="chart_executors" style="width: 98%; height: 200px;"></div>
		    <?php } ?>
	    </div>
	    
		
		<h1 class="title">Addenda</h1>
        
        <div>
	        <h2 class="title">Bijlage(n) / referenties / bronnen</h2>
	        <?php
	        
	        if ( count( $node->field_bijlage ) ) {
	        	print '<ol>';
	        	foreach ( $node->field_bijlage[LANGUAGE_NONE] as $b ){
	        		print '<li><a href="' . file_create_url( $b [ 'uri' ] ) . '">' . $b [ 'filename' ] . '</a><div style="font-size: smaller;">' . $b [ 'type' ] . ' - ' . format_date( $b [ 'timestamp' ], 'custom', 'l, j F Y' ) . ' - ' . round( $b [ 'filesize' ] / 1000, 2 ) . 'kb - ' . $b [ 'filemime' ] . '</div></li>';
	        	}
	        	print '</ol>';
	        } else {
	        	print 'geen extra bijlage';
	        }
	        
	        ?>
	        
	        <h2 class="title">Opmerking(en)</h2>
	        <?php
	        
	        if ( array_key_exists( LANGUAGE_NONE, $node->field_opmerking_en_ ) ) {
	        	print $node->field_opmerking_en_[LANGUAGE_NONE][0]['value'];
	        } else {
	        	print 'geen bijkomende opmerkingen';
	        }
	        
	        ?>
        </div>
        
	</div>

</div>

<div class="view">
    <div class="view-header">
        <p><a href="<?php print base_path() . 'node/' . $nid . '/actieplan'; ?>">Werk het actieplan bij</a> - <a href="<?php print base_path() . 'node/' . $nid . '/administratief'; ?>">Bekijk de administratieve fiche</a></p>
    </div>
</div>