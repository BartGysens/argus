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
                <?php
                print theme('links__system_secondary_menu', array(
                    'links' => $secondary_menu,
                    'attributes' => array(
                        'class' => array('links', 'inline', 'clearfix'),
                    ),
                    'heading' => array(
                        'text' => $secondary_menu_heading,
                        'level' => 'h2',
                        'class' => array('element-invisible'),
                    ),
                ));
                ?>
            </nav>
        <?php endif; ?>

<?php print render($page['header']); ?>

    </header>

    <div id="main">

        <div id="fd_wrapper">
            <div id="fd_content">
                <div id="content" class="column sms_smscborder sms_centerxy" role="main">

                    <a id="main-content"></a>
                    
                    <div class="fd_page">
                        <div class="sms_smscborder sms_bleft sms_topl"></div>
                        <div class="sms_smscborder sms_centery sms_topy sms_smallboxct">
                            <center>
                                <!-- BEGIN frametitleSmall -->
                                <div class="sms_frametitle">
                                        <div class="sms_title sms_tleft"></div>
                                        <div class="sms_title sms_tcenter"><center>
                                            <?php print render($title_prefix); ?>
                                            <?php if ($title): ?>
                                                <h2 class="page__title title" id="page-title"><?php print $title; ?></h2>
                                            <?php endif; ?>
                                            <?php print render($title_suffix); ?>

                                            </center></div>
                                        <div class="sms_title sms_tright"></div>
                                </div>
                                <!-- END frametitleSmall -->
                            </center>
                        </div>
                        <!-- <div class="sms_smscborder sms_bright sms_topr"></div> //-->
                    </div>
                    
                    <?php print render($page['highlighted']); ?>
                    <?php print $breadcrumb; ?>

                    <?php print $messages; ?>
                    <?php print render($tabs); ?>
                    <?php print render($page['help']); ?>
                    <?php if ($action_links): ?>
                        <ul class="action-links"><?php print render($action_links); ?></ul>
                    <?php endif; ?>
                    <?php print render($page['content']); ?>
                    <?php print $feed_icons; ?>
                    
                    <div class="fd_page">
                        <div class="sms_smscborder sms_bleft sms_bottoml"></div>
                        <div class="sms_smscborder sms_centery sms_bottomy sms_smallboxcb"></div>
                        <!-- <div class="sms_smscborder sms_bright sms_bottomr"></div> //-->
                    </div>
                        
                    <div class="sms_smscborder sms_bright sms_topr"></div>
                        
                    <div class="sms_smscborder sms_bright sms_bottomr"></div>
                </div>
            </div>
        </div>


        <div id="navigation">

            <?php if ($main_menu): ?>
            <nav id="main-menu" role="navigation" tabindex="-1">
                <?php
                // This code snippet is hard to modify. We recommend turning off the
                // "Main menu" on your sub-theme's settings form, deleting this PHP
                // code block, and, instead, using the "Menu block" module.
                // @see https://drupal.org/project/menu_block
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
                ));
                ?>
            </nav>
            <?php endif; ?>

            <?php print render($page['navigation']); ?>
            
            <div id="backToSMS"><a href="https://kta1-hasselt.smartschool.be">Terug naar Smartschool</a></div>
            
            <a id="sms_search" href="?q=zoeken"></a>

        </div>

        <?php
        // Render the sidebars to see if there's anything in them.
        $sidebar_first = render($page['sidebar_first']);
        $sidebar_second = render($page['sidebar_second']);
        ?>

            <?php if ($sidebar_first || $sidebar_second): ?>
            <aside class="sidebars">
                <div id="fd_navigation">
                    <?php print $sidebar_first; ?>
                </div>
                
                <div id="fd_extra">
                    <?php print $sidebar_second; ?>
                </div>
            </aside>
    <?php endif; ?>

    </div>

<?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
