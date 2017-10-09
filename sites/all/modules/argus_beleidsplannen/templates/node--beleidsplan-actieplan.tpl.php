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
?>

<div class="view">
	<div class="view-header">
		<p>
			<a
				href="<?php print base_path() . drupal_lookup_path( 'alias', 'node/' . $nid ); ?>">Overzicht</a>
			- <a
				href="<?php print base_path() . 'node/' . $nid . '/administratief'; ?>">Bekijk de administratieve fiche</a>
		</p>
	</div>
</div>

<div id="node-<?php print $node->nid; ?>"
	class="<?php print $classes; ?> clearfix" <?php print $attributes; ?>>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
        <h2 <?php print $title_attributes; ?>>
		<a href="<?php print $node_url; ?>"><?php print $title; ?>: actieplan</a>
	</h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
        <div class="submitted">
            <?php print $submitted; ?>
        </div>
    <?php endif; ?>
    
    <div class="content" <?php print $content_attributes; ?>>

		<h1 class="title">ACTIEPLAN</h1>

		<h2 class="title">Visie</h2>

		<fieldset class="collapsible collapsed">
			<legend>
				<span class="fieldset-legend"><a class="fieldset-title" href="#">verbergen / tonen</a></span>
			</legend>
			<div class="fieldset-wrapper">
				<div class="pageEnd" style="font-size: smaller; color: green;"><?php print $node->body[LANGUAGE_NONE][0]['value']; ?></div>
			</div>
		</fieldset>

		<h2 class="title">Strategische doelstellingen</h2>
		
		<fieldset class="collapsible collapsed">
			<legend>
				<span class="fieldset-legend"><a class="fieldset-title" href="#">verbergen / tonen</a></span>
			</legend>
			<div class="fieldset-wrapper">
				<div class="pageEnd" style="font-size: smaller; color: green;">
					<ul>
				        <?php
												
						foreach ( $node->field_beleidsplan_doelstellingen [LANGUAGE_NONE] as $d ) {
							print '<li>' . $d ['value'] . '</li>';
						}
						
						?>
			        </ul>
				</div>
			</div>
		</fieldset>
		
		<form action="/<?php print current_path(); ?>" method="post" id="argus_beleidsplannen_form">
		
		<h2 class="title">Operationele doelstellingen</h2>

		<ul>
		<?php
		$cntr = 0;
		foreach ( $node->field_beleidsplan_op_doelst [LANGUAGE_NONE] as $d ) {
			$ref = md5( $d ['value'] );
			
			print '<li><h3>' . $d ['value'] . '</h3>';
			
			print '<div><div id="argus_beleidsplannen_' . $ref . '_actions">';
			
			if (array_key_exists($ref, $actions)){
				foreach($actions[$ref] as $action){
					if (array_key_exists('description', $action)){
						print argus_beleidsplannen_model_action( $action['description'], $action['deadline'], $action['gebruiker'], $action['budget'], $action['status'], $action['rok_opt'], $action['id'], $ref, $cntr, 'collapsible collapsed' );
						$cntr++;
					}
				}
			}
			
			print '</div><input type="button" id="argus_beleidsplannen_add_action_' . $ref . '" class="action-links argus_beleidsplannen_add_action_btn" value="+ voeg een actie toe" /></div>';

			print '</li>';
		}
		
		print '<input type="hidden" id="argus_beleidsplannen_nid" value="' . $node->nid . '" name="argus_beleidsplannen_nid" />';
		print '<input type="hidden" id="argus_beleidsplannen_cntr" value="' . $cntr . '" name="argus_beleidsplannen_cntr" />';
		
		?>
        </ul>
        
        <hr />
        
        <input type="submit" name="submit" value="opslaan" class="action-links" />
		
		</form>
		
        <div id="argus_beleidsplannen_action_model" class="argus_beleidsplannen_action_model">
			<?php print argus_beleidsplannen_model_action(); ?>
		</div>
	</div>

</div>

<div class="view">
	<div class="view-header">
		<p>
			<a
				href="<?php print base_path() . drupal_lookup_path( 'alias', 'node/' . $nid ); ?>">Overzicht</a>
			- <a
				href="<?php print base_path() . 'node/' . $nid . '/administratief'; ?>">Bekijk de administratieve fiche</a>
		</p>
	</div>
</div>