<?php
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

/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */

$params = explode('/',current_path());

$query = 'SELECT DISTINCT c.nid AS id, c.title AS title '
    . 'FROM {node} AS c '
    . 'LEFT JOIN {field_data_field_klas_leerlingen} AS l ON c.nid = l.entity_id '
    . 'WHERE c.type = :type AND l.entity_id '
    . 'ORDER BY c.title ASC';
$classes = db_query($query, array(':type' => 'klas'))->fetchAll();

?>

<div id="page">

  <header class="header" id="header" role="banner">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php print render($page['header']); ?>

</header>

<div id="main">
    <?php if ($params[0] == 'user' && is_numeric($params[1])){
        $query = 'SELECT DISTINCT c.nid AS id, c.title AS title '
            . 'FROM {node} AS c '
            . 'LEFT JOIN {field_data_field_klas_leerlingen} AS l ON c.nid = l.entity_id '
            . 'WHERE l.field_klas_leerlingen_target_id = :uid '
            . 'ORDER BY c.title ASC';
        $userClass = db_query($query, array(':uid' => $params[1]))->fetch();

        $query = 'SELECT l.field_klas_leerlingen_target_id AS id, n.field_user_sms_naam_value AS name, fn.field_user_sms_voornaam_value AS firstname '
            . 'FROM {field_data_field_klas_leerlingen} AS l '
            . 'LEFT JOIN {field_data_field_user_sms_naam} as n ON n.entity_id = l.field_klas_leerlingen_target_id '
            . 'LEFT JOIN {field_data_field_user_sms_voornaam} as fn ON fn.entity_id = l.field_klas_leerlingen_target_id '
            . 'WHERE l.entity_id = :cid '
            . 'ORDER BY n.field_user_sms_naam_value ASC, fn.field_user_sms_voornaam_value ASC';
        $usersClass = db_query($query, array(':cid' => $userClass->id))->fetchAll(); ?>
        <div id="classNavBarContainer">
            <div id="classNavTools">
                <a id="classNavToolsLeft"><img src="<?php print base_path().drupal_get_path('theme', 'klassenraad').'/images/bar_buttons_03.gif'; ?>" /></a>
                <a id="classNavToolsSteps"><img src="<?php print base_path().drupal_get_path('theme', 'klassenraad').'/images/bar_buttons_05-1.gif'; ?>" /></a>
                <a id="classNavToolsRight"><img src="<?php print base_path().drupal_get_path('theme', 'klassenraad').'/images/bar_buttons_07.gif'; ?>" /></a>
            </div>
            <div id="classNavToolsMenu">
                <div class="contentTitle">Snelle navigatie</div>
                <div id="classNavToolsMenuClass">
                    Kies een klas: 
                    <select id="classNavToolsMenuClassSelect">
                        <?php
                        foreach ($classes as $c => $class){
                            $query = 'SELECT u.field_klas_leerlingen_target_id AS id '
                                . 'FROM {field_data_field_klas_leerlingen} AS u '
                                . 'WHERE u.entity_id = :cid';
                            $u = db_query($query, array(':cid' => $class->id))->fetch();

                            print '<option value="'.base_path().drupal_lookup_path('alias', 'user/'.$u->id).'"';
                            if ($userClass->id == $class->id){
                                print ' selected="selected"';
                            }
                            print '>'.$class->title.'</option>';
                        }
                        ?>
                    </select>
                </div>
                <div id="classNavToolsMenuStudents">
                    Kies een leerling: 
                    <select id="classNavToolsMenuStudentsSelect">
                        <?php
                        $nextUserId = $params[1];
                        $getNext = false;
                        foreach($usersClass as $u){
                            if ($getNext){
                                $nextUserId = $u->id;
                                $getNext = false;
                            }
                            print '<option value="'.base_path().drupal_lookup_path('alias', 'user/'.$u->id).'"';
                            if ($u->id == $params[1]){
                                print ' selected="selected"';
                                $getNext = true;
                            }
                            print '>'.$u->name.', '.$u->firstname.'</option>';
                        }
                        if ($nextUserId == $params[1]){
                            $nextUserId = $usersClass[0]->id;
                        }
                        ?>
                    </select>
                    <script type="text/javascript">var nextStudent = "<?php print base_path().drupal_lookup_path('alias', 'user/'.$nextUserId); ?>";</script>
                </div>
            </div>
            <div id="classNavBarContainerScroll">
                <div id="classNavBar">
                <?php
                foreach($usersClass as $u){
                    print '<a id="user'.$u->id.'" class="userTags"';
                    if ($u->id == $params[1]){
                        print ' style="font-weight: bold;"';
                    }
                    print ' href="'.base_path().drupal_lookup_path('alias', 'user/'.$u->id).'">'.$u->name.', '.$u->firstname.'</a>';

                }
                ?>
                </div>
            </div>
        </div>
    <?php } ?>

    <div id="content" class="sms column" role="main">
        <?php print render($page['highlighted']); ?>
        <?php print $breadcrumb; ?>
        <a id="main-content"></a>
        <?php if (!$title): ?>
            <div class="sms_frametitle sms_smscborder sms_centery sms_topy sms_smallboxct">
                <div class="sms_title sms_tleft"></div>
                <div class="sms_title sms_tcenter">
                    <h2><?php print format_date(time(),'long'); ?></h2>
                </div>
                <div class="sms_title sms_tright"></div>
            </div>
        <?php endif; ?>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
            <div class="sms_frametitle sms_smscborder sms_centery sms_topy sms_smallboxct">
                <div class="sms_title sms_tleft"></div>
                <div class="sms_title sms_tcenter">
                    <h2><?php print $title; ?></h2>
                </div>
                <div class="sms_title sms_tright"></div>
            </div>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        
        <?php
        if ($params[0] == 'user' && is_numeric($params[1])){
            $account = user_load($params[1]);
            $account_view = user_view($account);
            echo drupal_render($account_view);
        } else {
            $cntr = 0;
            print '<table id="classOverview">';
            foreach ($classes as $c => $class) {
                $query = 'SELECT l.field_klas_leerlingen_target_id AS id, n.field_user_sms_naam_value AS name, fn.field_user_sms_voornaam_value AS firstname '
                    . 'FROM {field_data_field_klas_leerlingen} AS l '
                    . 'LEFT JOIN {field_data_field_user_sms_naam} as n ON n.entity_id = l.field_klas_leerlingen_target_id '
                    . 'LEFT JOIN {field_data_field_user_sms_voornaam} as fn ON fn.entity_id = l.field_klas_leerlingen_target_id '
                    . 'WHERE l.entity_id = :cid '
                    . 'ORDER BY n.field_user_sms_naam_value ASC, fn.field_user_sms_voornaam_value ASC';
                $users = db_query($query, array(':cid' => $class->id))->fetchAll();
                if ($cntr == 0){
                    print '<tr><td>';
                } else {
                    print '<td>';
                }
                print '<div class="classBox">';
                    print '<h2>'.$class->title.'</h2>';
                    print '<ol>';
                    foreach ($users as $u) {
                        print '<li><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$u->id).'">'.$u->name.', '.$u->firstname.'</a></li>';
                    }
                    print '</ol>';
                    print '<div class="amount">'.count($users).'</div>';
                print '</div>';
                if ($cntr == 4){
                    print '</td></tr>';
                    $cntr = 0;
                } else {
                    print '</td>';
                    $cntr++;
                }
            }
            print '</table>';
        }
        ?>
        
        <div id="sms_block_lefttop" class="sms_smscborder sms_bleft sms_topl"></div>
        <div id="sms_block_leftbottom" class="sms_smscborder sms_bleft sms_bottoml"></div>
        <div id="sms_block_righttop" class="sms_smscborder sms_bright sms_topr"></div>
        <div id="sms_block_rightbottom" class="sms_smscborder sms_bright sms_bottomr"></div>
    </div>

    <div id="navigation">
        <nav id="main-menu" role="navigation" tabindex="-1">
            <h2 class="element-invisible">Hoofdmenu</h2>
            <ul class="links inline clearfix">
                <li class="menu-start first"><a href="/" title="Terug naar de startpagina">Start</a></li>
                <?php if ($params[0] == 'user' && is_numeric($params[1])){ ?>
                    <li class="first"><a href="<?php print base_path().drupal_lookup_path('alias', 'user/'.$params[1]); ?>">Leerlingvolgsysteem</a></li>
                    <li class="last"><a href="<?php print base_path().'user/'.$params[1].'/administratief'; ?>">Administratieve fiche</a></li>
                <?php } ?>
                <li class="menu-482"><a href="/user/logout" title="">Uitloggen</a></li>
            </ul>
        </nav>
        <div id="backToSMS"><a href="http://kta1-hasselt.smartschool.be">Terug naar Smartschool</a></div>
        <a id="sms_search" href="zoeken"></a>
    </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
