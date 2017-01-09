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
        <p><a href="<?php print base_path() . 'node/' . $nid . '/administratief'; ?>">Bekijk de administratieve fiche</a><?php print argus_schoolyear_selectionBox(); ?></p>
    </div>
</div>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
        <div class="submitted">
            <?php print $submitted; ?>
        </div>
    <?php endif; ?>

    <div class="content"<?php print $content_attributes; ?>>
        <h3>Klasbeeld</h3>
        
        <table class="views-table">
            <thead>
                <tr>
                    <th rowspan="2" class="views-align-left">Leerling</th>
                    <th colspan="<?php print count($averages['class']['absences']); ?>" class="absences">Afwezigheden<span style="font-weight: normal !important;"> (halve dagen)</span></th>
                    <th colspan="<?php print count($averages['class']['behaviour']); ?>" class="behaviour">Gedrag</th>
                    <th colspan="<?php print count($averages['class']['study']); ?>" class="study">Studie</th>
                </tr>
                <tr class="views-tr-sub">
                    <th class="border-left" title="Onwettig afwezig">B</th>
                    <th title="Doktersattest">D</th>
                    <th title="Ziekenbriefje van de ouders">Z</th>
                    <th title="Andere oorzaken voor de afwezigheid">andere</th>
                    <th title="Totaal aantal keer afwezig">totaal</th>
                    <th title="Begeleidingsovereenkomsten">BO</th>
                    <th title="Aantal keer te laat aangekomen op school">Te laat</th>

                    <th class="border-left" title="Meldingen over negatief gedrag">Neg.</th>
                    <th title="Meldingen over positief gedrag">Pos.</th>
                    <th title="Begeleidingsovereenkomsten & Volgkaarten">BO+VK</th>
                    <th title="Strafstudies">S</th>
                    <th title="Genomen Maatregelen bij Schending van de Leefregels: fase 1">F1</th>
                    <th title="Genomen Maatregelen bij Schending van de Leefregels: fase 2">F2</th>
                    <th title="Genomen Maatregelen bij Schending van de Leefregels: bewarend">BW</th>
                    <th title="Genomen Maatregelen bij Schending van de Leefregels: tucht">TM</th>
                    
                    <th class="border-left" title="Aantal tekorten">Tekort</th>
                    <th title="Remedïeringsopdrachten (geregistreerd in het Meldpunt)">Rem.</th>
                </tr>
            </thead>
            <tbody>
                <?php
                $i = 1;
                foreach ($node->field_klas_leerlingen[LANGUAGE_NONE] as $student){
                	if (array_key_exists($student['target_id'], $data)){
                    	$currentData = $data[$student['target_id']];
	                    
	                    print '<tr class="'.($i%2 == 0 ? "even" : "odd").' views-row-first">';
	                        print '<td class="views-field views-field-counter views-align-left"><div class="user">'.$i.'. <a href="'.base_path().drupal_lookup_path('alias', 'user/'.$student['target_id']).'" id="user'.$student['target_id'].'">'.argus_get_user_realname($student['target_id']).'</a>';
	                        if (variable_get('user_pictures', 0)){
	                            if ($student['entity']->picture){
	                                if (!empty($student['entity']->picture->uri)) {
	                                    $filepath = $student['entity']->picture->uri;
	                                }
	                                if (isset($filepath)) {
	                                    $profile_url = file_create_url($filepath);
	                                    print '<div id="profile-photo-'.$student['target_id'].'" class="profile-photo-class-overview"><img src="'.$profile_url.'" /></div>';
	                                    print '<script type="text/javascript">
	                                        jQuery(document).ready(function($) {
	                                            jQuery("#user'.$student['target_id'].'").mouseover(function (){
	                                                jQuery("#profile-photo-'.$student['target_id'].'").show(10);
	                                            });
	                                            jQuery("#user'.$student['target_id'].'").mouseout(function (){
	                                                jQuery("#profile-photo-'.$student['target_id'].'").hide(10);
	                                            });
	                                        });
	                                    </script>';
	                                }
	                            }
	                        }
	                        print '</div></td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center border-left';
	                        if (isset($currentData['absences']['B'])){
	                            if ($currentData['absences']['B'] == $data['max']['absences']['B']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">';
	                        if (isset($currentData['absences']['B'])){
	                            print $currentData['absences']['B'];
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center';
	                        if (isset($currentData['absences']['D'])){
	                            if ($currentData['absences']['D'] == $data['max']['absences']['D']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">';
	                        if (isset($currentData['absences']['D'])){
	                            print $currentData['absences']['D'];
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center';
	                        if (isset($currentData['absences']['Z'])){
	                            if ($currentData['absences']['Z'] == $data['max']['absences']['Z']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">';
	                        if (isset($currentData['absences']['Z'])){
	                            print $currentData['absences']['Z'];
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center';
	                        if (isset($currentData['absences']['other'])){
	                            if ($currentData['absences']['other'] == $data['max']['absences']['other']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">';
	                        if (isset($currentData['absences']['other'])){
	                            print $currentData['absences']['other'];
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center total';
	                        if (isset($currentData['absences']['total'])){
	                            if ($currentData['absences']['total'] == $data['max']['absences']['total']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">';
	                        if (isset($currentData['absences']['total'])){
	                            print $currentData['absences']['total'];
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center">';
	                        if (isset($currentData['absences']['bo'])){
	                            print '<a href="'.base_path().'begeleidingsovereenkomsten/overzicht?name='.$student['entity']->name.'">'.$currentData['absences']['bo'].'</a>';
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center';
	                        if (isset($currentData['absences']['L'])){
	                            if ($currentData['absences']['L'] == $data['max']['absences']['L']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">';
	                        if (isset($currentData['absences']['L'])){
	                            print $currentData['absences']['L'];
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center border-left">';
	                        if ($currentData['behaviour']['neg']){
	                            print '<a href="'.base_path().'meldingen/lvs/overzicht?name='.$student['entity']->name.'" class="';
	                            if ($currentData['behaviour']['neg'] == $data['max']['behaviour']['neg']){
	                                print ' data-max';
	                            }
	                            print '">'.$currentData['behaviour']['neg'].'</a>';
	                        }
	                        print '</td>';
	
	                        print '<td class="views-field views-field-counter views-align-center">';
	                        if ($currentData['behaviour']['pos']){
	                            print '<a href="'.base_path().'meldingen/lvs/overzicht?name='.$student['entity']->name.'" class="';
	                            if ($currentData['behaviour']['pos'] == $data['max']['behaviour']['pos']){
	                                print ' data-max';
	                            }
	                            print '">'.$currentData['behaviour']['pos'].'</a>';
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center">';
	                        if (isset($currentData['behaviour']['bo-vk'])){
	                            print '<a href="'.base_path().'begeleidingsovereenkomsten/overzicht?name='.$student['entity']->name.'">'.$currentData['behaviour']['bo-vk'].'</a>';
	                        }
	                        print '</td>';
	                        
	                        print '<td class="views-field views-field-counter views-align-center">';
	                        if (isset($currentData['behaviour']['msl']['fase2']['Strafstudie'])){
	                            print $currentData['behaviour']['msl']['fase2']['Strafstudie'];
	                        }
	                        print '</td>';
	                        
	                        foreach ($currentData['behaviour']['msl'] as $mk => $msl){
	                            $title = '';
	                            $total = 0;
	                            foreach($msl as $k => $m){
	                                $title .= $m.' x '.$k.', ';
	                                $total += $m;
	                            }
	                            print '<td class="views-field views-field-counter views-align-center';
	                            if ($total == $data['max']['behaviour'][$mk]){
	                                print ' data-max';
	                            }
	                            print '"';
	                            if ($total){
	                                print ' title="'.substr($title, 0, -2).'"';
	                            }
	                            print '>';
	                            if ($total){
	                                print $total;
	                            }
	                            print '</td>';
	                        }
	                        
	                        print '<td class="views-field views-field-counter views-align-center border-left';
	                        if (isset($currentData['study']['fails'])){
	                            if ($currentData['study']['fails'] == $data['max']['study']['fails']){
	                                print ' data-max';
	                            }
	                        }
	                        print '">'.$currentData['study']['fails'].'</td>';
	                        
	                        $title = '';
	                        $total = 0;
	                        foreach($currentData['study']['measures'] as $k => $m){
	                            $title .= $m.' x '.$k.', ';
	                            $total += $m;
	                        }
	                        print '<td class="views-field views-field-counter views-align-center';
	                        if ($total == $data['max']['study']['measures']){
	                            print ' data-max';
	                        }
	                        print '"';
	                        if ($total){
	                            print ' title="'.substr($title, 0, -2).'"';
	                        }
	                        print '>';
	                        if ($total){
	                            print $total;
	                        }
	                        print '</td>';
	                    print '</tr>';
	                    $i++;
                	}
                }
                ?>
            </tbody>
            <tfoot>
                <tr>
                    <td style="font-weight: bold !important;">Klasgemiddelde (%)</td>
                    <?php
                    foreach($averages['class'] as $aclass => $averageClass){
                        foreach($averageClass as $a => $average){
                            print '<td class="views-field views-field-counter views-align-center '.$aclass.'" style="font-weight: bold !important;">';
                            if (is_numeric($average)){
                                print round($average/$averages['class-total']);
                            }
                            print '</td>';
                        }
                    }
                    ?>
                </tr>
                <tr style="font-size: 0.9em">
                    <td>Gemiddelde in <?php print $averages['current-eduyear']; ?></td>
                    <?php
                    foreach($averages['eduyear'] as $aclass => $averageClass){
                        foreach($averageClass as $a => $average){
                            print '<td class="views-field views-field-counter views-align-center '.$aclass.'">';
                            if (is_numeric($average)){
                                print round($average/$averages['eduyear-total'],2);
                            }
                            print '</td>';
                        }
                    }
                    ?>
                </tr>
                <tr style="font-size: 0.9em">
                    <td>Gemiddeld in het <?php print $averages['current-grade']; ?>e leerjaar</td>
                    <?php
                    foreach($averages['grade'] as $aclass => $averageClass){
                        foreach($averageClass as $a => $average){
                            print '<td class="views-field views-field-counter views-align-center '.$aclass.'">';
                            if (is_numeric($average)){
                                print round($average/$averages['grade-total'],2);
                            }
                            print '</td>';
                        }
                    }
                    ?>
                </tr>
                <tr style="font-size: 0.9em">
                    <td>Gemiddelde in <?php print $averages['current-type']; ?></td>
                    <?php
                    foreach($averages['type'] as $aclass => $averageClass){
                        foreach($averageClass as $a => $average){
                            print '<td class="views-field views-field-counter views-align-center '.$aclass.'">';
                            if (is_numeric($average)){
                                print round($average/$averages['type-total'],2);
                            }
                            print '</td>';
                        }
                    }
                    ?>
                </tr>
                <tr style="font-size: 0.9em">
                    <td>Schoolgemiddelde</td>
                    <?php
                    foreach($averages['school'] as $aclass => $averageClass){
                        foreach($averageClass as $a => $average){
                            print '<td class="views-field views-field-counter views-align-center '.$aclass.'">';
                            if (is_numeric($average)){
                                print round($average/$averages['school-total'],2);
                            }
                            print '</td>';
                        }
                    }
                    ?>
                </tr>
            </tfoot>
        </table>
        
        <div class="clearfix" style="height: 30px;"></div>
        
        <h3>Leerkrachten / vakken</h3>
        
        <div class="profile">
            <div id="profile-admin-left">
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Klastitularis:&nbsp;</div>
                    <div class="field-items"><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$node->field_klas_klastitularis[LANGUAGE_NONE][0]['target_id']).'">'.argus_get_user_realname($node->field_klas_klastitularis[LANGUAGE_NONE][0]['target_id']).'</a>'; ?></div>
                </div>
            </div>

            <div id="profile-admin-right">
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Hulpklastitularis:&nbsp;</div>
                    <div class="field-items"><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$node->field_klas_hulpklastitularis[LANGUAGE_NONE][0]['target_id']).'">'.argus_get_user_realname($node->field_klas_hulpklastitularis[LANGUAGE_NONE][0]['target_id']).'</a>'; ?></div>
                </div>
            </div>
        </div>
        
        <table class="views-table">
            <thead>
                <tr>
                    <th class="views-align-left">Leerkracht</th>
                    <th class="views-align-left">Vak</th>
                    <th>Uren</th>
                </tr>
            </thead>
            <tbody>
                <?php
                $i = 1;
                foreach ($node->field_klas_leerkrachten[LANGUAGE_NONE] as $teacher){
                    if (isset($teachers[$teacher['target_id']])){
                        print '<tr class="'.($i%2 == 0 ? "even" : "odd").' views-row-first">';
                            print '<td class="views-field views-field-counter views-align-left"><div class="user">'.$i.'. <a href="'.base_path().drupal_lookup_path('alias', 'user/'.$teacher['target_id']).'" id="user'.$teacher['target_id'].'">'.argus_get_user_realname($teacher['target_id']).'</a>';
                            if (variable_get('user_pictures', 0)){
                                if ($teacher['entity']->picture){
                                    if (!empty($teacher['entity']->picture->uri)) {
                                        $filepath = $teacher['entity']->picture->uri;
                                    }
                                    if (isset($filepath)) {
                                        $profile_url = file_create_url($filepath);
                                        print '<div id="profile-photo-'.$teacher['target_id'].'" class="profile-photo-class-overview"><img src="'.$profile_url.'" /></div>';
                                        print '<script type="text/javascript">
                                            jQuery(document).ready(function($) {
                                                jQuery("#user'.$teacher['target_id'].'").mouseover(function (){
                                                    jQuery("#profile-photo-'.$teacher['target_id'].'").show(10);
                                                });
                                                jQuery("#user'.$teacher['target_id'].'").mouseout(function (){
                                                    jQuery("#profile-photo-'.$teacher['target_id'].'").hide(10);
                                                });
                                            });
                                        </script>';
                                    }
                                }
                            }
                            print '</div></td>';

                            print '<td class="views-field views-field-counter views-align-left">';
                            foreach ($teachers[$teacher['target_id']] as $c => $course){
                                print $course['long'].' ('.$course['short'].')<br />';
                            }
                            print '</td>';

                            print '<td class="views-field views-field-counter views-align-center">';
                            foreach ($teachers[$teacher['target_id']] as $c => $course){
                                print $course['amount'].'<br />';
                            }
                            print '</td>';

                        print '</tr>';
                        $i++;
                    }
                }
                ?>
            </tbody>
        </table>
    </div>

</div>

<div class="view">
    <div class="view-header">
        <p><a href="<?php print base_path() . 'node/' . $nid . '/administratief'; ?>">Bekijk de administratieve fiche</a><?php print argus_schoolyear_selectionBox(); ?></p>
    </div>
</div>