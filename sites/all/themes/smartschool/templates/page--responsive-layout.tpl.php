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

global $user;

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

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>

  </header>

  <div id="main">

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
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>

        <div id="sms_block_lefttop" class="sms_smscborder sms_bleft sms_topl"></div>
        <div id="sms_block_leftbottom" class="sms_smscborder sms_bleft sms_bottoml"></div>
        <div id="sms_block_righttop" class="sms_smscborder sms_bright sms_topr"></div>
        <div id="sms_block_rightbottom" class="sms_smscborder sms_bright sms_bottomr"></div>
    </div>

    <div id="navigation">
	        
	    
        <?php print render($page['navigation']); ?>

	    <?php if (user_is_logged_in()): ?>
	        <nav id="main-menu" role="navigation" tabindex="-1">
	          <?php
	            $extra_menu_items["menu-start"] = [
	                'attributes' => [
	                    'title' => 'Terug naar de startpagina',
	                ],
	                'href' => '',
	                'title' => 'Start',
	            ];
	            
	            $extra_menu_items["menu-ga"] = [
	                'attributes' => [
	                    'title' => 'Overzicht acties',
	                ],
	                'href' => '',
	                'title' => 'Ga',
	            ];
	
	            $main_menu = $extra_menu_items + $main_menu;
	            
	            print theme('links__system_main_menu', array(
	                'links' => $main_menu,
	                'attributes' => array(
	                    'class' => array('links', 'inline', 'clearfix'),
	                ),
	                'heading' => array(
	                    'text' => t('Main menu'),
	                    'level' => 'h2',
	                    'class' => array('element-invisible'),
	                ),
	            )); ?>
	        </nav>
        <?php endif; ?>
	
		<?php if (user_is_logged_in()){ ?>
	        <a id="sms_search" href="zoeken"></a>
	        
	        <div id="smscQuickNavDialog">
	            <div class="column modules">
	                <h3>Modules</h3>
	                <div id="quicknav_modulesList" class="list">
	                    <?php
	                    if ($cache = cache_get ( 'quicknav_modulesList_' . $user->uid )) {
	                    	$html = $cache->data;
	                    } else {
		                    $menuTreeGa = menu_load_links('menu-modules');
		                    $menuTree = array();
		                    if ($menuTreeGa){
		                        foreach ($menuTreeGa as $ks => $menuItem){
		                            if ($menuItem['link_path'] && isset($menuItem['options']['item_attributes']['class'])){
		                                if ($menuItem['options']['item_attributes']['class']!=''){
		                                    $extraClass = $menuItem['options']['item_attributes']['class'];
		                                    $menuTree[$menuItem['link_title']] = '<a class="module '.$extraClass.'" href="'.base_path().$menuItem['link_path'].'" title="'.$menuItem['link_title'].'">'.$menuItem['link_title'].'</a>';
		                                }
		                            }
		                        }
		                        ksort($menuTree);
		                        foreach ($menuTree as $menuItem){
		                            $html .= $menuItem;
		                        }
		                    }
		                    
		                    cache_set ( 'quicknav_modulesList_' . $user->uid, $uids, 'cache_argus' );
	                    }
	                    print $html;
	                    ?>
	                    <a class="module module-spacer" href="#"></a>
	                </div>
	            </div>
	            <div class="column courses">
	                <h3 id="courses_title">Mijn taken</h3>
	                <div class="tabbar">
	                    <a id="sms_mytasks" class="tab yellow active" href="#" title="Mijn taken"></a>
	                    <a id="sms_mypeople" class="tab green" href="#" title="Mijn collega's"></a>
	                    <a id="sms_myitems" class="tab blue" href="#" title="Mijn items"></a>
	                    <a id="sms_myquicklinks" class="tab pink" href="#" title="Mijn snelkoppelingen"></a>
	                </div>
	                <div id="courses_lists">
	                    <div id="sms_mytasks_list" class="list">
	                    <?php
	                    $skip_roles = ['authenticated user','andere'];
	                    $roles = $user->roles;
	                    foreach ($roles as $k => $role){
	                        if (!in_array($role,$skip_roles)){
	                            print '<a class="course" href="/search/node/'.$role.'">'.$role.'</a>';
	                        }
	                    }
	                    ?>
	                    </div>
	                    <div id="sms_mypeople_list" class="list hidden_list">
	                    <?php
	                    if (!in_array('leerling',$roles)) {
	                        foreach ($roles as $k => $role){
	                            if (!in_array($role,$skip_roles)){
	                                $team = smartschool_users_by_role($role);
	                                print '<h4 class="green">'.$role.'</h4>';
	                                foreach ($team as $uid){
	                                    if (is_numeric($uid)) {
	                                        $member = (array) user_load($uid);
	                                        print '<a class="course" href="/user/'.$uid.'">'.$member['field_user_sms_naam'][LANGUAGE_NONE][0]['value'].', '.$member['field_user_sms_voornaam'][LANGUAGE_NONE][0]['value'].'</a>';
	                                    } else {
	                                        print $uid;
	                                    }
	                                }
	                            }
	                        }
	                    }
	                    ?>
	                    </div>
	                    <div id="sms_myitems_list" class="list hidden_list">
	                        <div id="sms_myitems_list_order">sorteer op <a id="sms_myitems_list_orderTitle">titel</a> - <a id="sms_myitems_list_orderCreated">datum</a>/<a id="sms_myitems_list_orderChanged" class="active">aangepast</a> - <a id="sms_myitems_list_orderType">type</a></div>
	                        <div id="sms_myitems_list_byTitle" class="sms_myitems_list_results">
	                            <ul>
	                                <?php
	                                $nodes = smartschool_fetch_user_content($user->uid,'title ASC');
	                                foreach ($nodes as $k => $node){
	                                    if (is_object($node)) {
	                                        print '<li class="course node" id="'.$node->nid.'">'.$node->title.'<small>'.format_date($node->changed).'</small></li>';
	                                    } else {
	                                        print $node;
	                                    }
	                                }
	                                ?>
	                            </ul>
	                        </div>
	                        <div id="sms_myitems_list_byCreated" class="sms_myitems_list_results">
	                            <ul>
	                                <?php
	                                $nodes = smartschool_fetch_user_content($user->uid,'created DESC');
	                                foreach ($nodes as $k => $node){
	                                    if (is_object($node)) {
	                                        print '<li class="course node" id="'.$node->nid.'">'.$node->title.'<small>'.format_date($node->created).'</small></li>';
	                                    } else {
	                                        print $node;
	                                    }
	                                }
	                                ?>
	                            </ul>
	                        </div>
	                        <div id="sms_myitems_list_byChanged" class="sms_myitems_list_results active">
	                            <ul>
	                                <?php
	                                $nodes = smartschool_fetch_user_content($user->uid,'changed DESC');
	                                foreach ($nodes as $k => $node){
	                                    if (is_object($node)) {
	                                        print '<li class="course node" id="'.$node->nid.'">'.$node->title.'<small>'.format_date($node->changed).'</small></li>';
	                                    } else {
	                                        print $node;
	                                    }
	                                }
	                                ?>
	                            </ul>
	                        </div>
	                        <div id="sms_myitems_list_byType" class="sms_myitems_list_results">
	                            <ul>
	                                <?php
	                                $nodes = smartschool_fetch_user_content($user->uid,'type ASC,title ASC');
	                                foreach ($nodes as $k => $node){
	                                    if (is_object($node)) {
	                                        print '<li class="course node" id="'.$node->nid.'">'.$node->title.'<small>'.t($node->type).' ('.format_date($node->changed,'custom','d/m/Y').')</small></li>';
	                                    } else {
	                                        print $node;
	                                    }
	                                }
	                                ?>
	                            </ul>
	                        </div>
	                    </div>
	                    <div id="sms_myquicklinks_list" class="list hidden_list">
	                    <?php
	                    $flags = flag_get_user_flags('node',NULL,$user->uid);
	                    if ($flags){
	                        foreach ($flags['bookmark'] as $k => $flag){
	                            $node = node_load($flag->entity_id);
	                            print '<a class="course node" href="'.base_path().drupal_get_path_alias($flag->entity_type.'/'.$flag->entity_id).'">'.$node->title.'<small>'.t($node->type).' ('.format_date($node->changed).')</small></a>';
	                        }
	                    }
	                    ?>
	                    </div>
	                </div>
	            </div>
	        </div>
        
        <?php } ?>
        
    </div>

    <?php if ($secondary_menu): ?>
      <div id="secondary-menu" class="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'id' => 'secondary-menu-links',
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => t('Secondary menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </div> <!-- /#secondary-menu -->
    <?php endif; ?>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
