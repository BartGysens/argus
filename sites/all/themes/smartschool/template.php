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
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function smartschool_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  smartschool_preprocess_html($variables, $hook);
  smartschool_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function 
function smartschool_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function smartschool_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function smartschool_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // smartschool_preprocess_node_page() or smartschool_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function smartschool_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function smartschool_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function smartschool_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

/**
 * argus - a Smartschool extension
 * 
 * supporting functions package.
 */

function smartschool_menu_alter(&$items){
    $items['search/users-by-role'] = array(
        //'title' => t('Personen met dezelfde rol'),
        'page callback' => 'smartschool_search_users_by_role_view',
        'access arguments' => array('access content'),
        'access callback' => TRUE,
    );
    return $items;
}

/** 
 * Implement hook_theme()
 */
function smartschool_theme() {
    return array(
        'search-users-by-role-results' => array(
            'template' => 'templates/search--users-by-role-results',
        ),
      );
}

/**
 * Check if given date is in schoolyear
 * 
 * @param type $y
 * @param type $m
 * @param type $d
 * @param type $schoolyear
 */
function smartschool_date_in_schoolyear($y = 0, $m = 0, $d = 0, $schoolyear = 0){
    $today = new DateTime('NOW');
    if ($y == 0){ $y = $today->format('Y'); }
    if ($m == 0){ $m = $today->format('m'); }
    if ($d == 0){ $d = $today->format('d'); }
    
    if ($schoolyear == 0){
        $schoolyear = $today->format('Y');
    }
    if (date('n')<9){
        $schoolyear--;
    }
    
    $d = substr('0'.$d,-2);
    $m = substr('0'.$m,-2);
    
    $checkDate = new DateTime($y.$m.$d);
    $schoolyearStart = new DateTime($schoolyear.'0901');
    $schoolyearEnd = new DateTime(($schoolyear+1).'0831');
    
    return ($checkDate > $schoolyearStart && $checkDate < $schoolyearEnd);
}

/**
 * Retrieve all users by their role.
 *
 * @param $role_name
 *   A string reference by rolename.
 */
function smartschool_search_users_by_role_view($rid = NULL) {
    $search_results = '';
    if ($rid) {
        if (is_numeric($rid)){
            $role = user_role_load($rid);
        } else {

        }
        $title = t('User role').' : '.((string) $role->name);
        drupal_set_title($title);

        //$role = user_role_load_by_name($role_name);
        $query = 'SELECT ur.uid AS id '
                . 'FROM {users_roles} AS ur '
                . 'INNER JOIN {field_data_field_user_sms_voornaam} AS uf ON ur.uid = uf.entity_id '
                . 'INNER JOIN {field_data_field_user_sms_naam} AS ul ON ur.uid = ul.entity_id '
                . 'WHERE ur.rid = :rid '
                . 'ORDER BY ul.field_user_sms_naam_value ASC, uf.field_user_sms_voornaam_value ASC';
        $result = db_query($query, array(':rid' => $rid));
        $users = $result->fetchCol();
        foreach ($users as $u => $us) {
            $us = (array) user_load($us);
            if ($u % 2 == 0) {
                $classes = 'even';
            } else {
                $classes = 'odd';
            }
            switch ($u) {
                case 0: $classes .= ' views-row-first'; break;
                case count($users)-1: $classes .= ' views-row-last'; break;
            }
            $search_results .= '<tr class="'.$classes.'">';
                $search_results .= '<td class="views-field views-align-center">'.($u+1).'</td>';
                $search_results .= '<td class="views-field"><a href="/user/'.$us['uid'].'">'.$us['field_user_sms_naam'][LANGUAGE_NONE][0]['value'].', '.$us['field_user_sms_voornaam'][LANGUAGE_NONE][0]['value'].'</a></td>';
                $search_results .= '<td class="views-field">';
                    if (isset($us['field_user_sms_emailadres'][LANGUAGE_NONE])) $search_results .= '<a href="mailto:'.$us['field_user_sms_emailadres'][LANGUAGE_NONE][0]['value'].'">'.$us['field_user_sms_emailadres'][LANGUAGE_NONE][0]['value'].'</a>';
                $search_results .= '</td>';
                $search_results .= '<td class="views-field views-align-center">';
                    if (isset($us['field_user_sms_telefoonnummer'][LANGUAGE_NONE])) $search_results .= $us['field_user_sms_telefoonnummer'][LANGUAGE_NONE][0]['value'];
                $search_results .= '</td>';
                $search_results .= '<td class="views-field views-align-center">';
                    if (isset($us['field_user_sms_mobielnummer'][LANGUAGE_NONE])) $search_results .= $us['field_user_sms_mobielnummer'][LANGUAGE_NONE][0]['value'];
                $search_results .= '</td>';
            $search_results .= '</tr>';
        }
    }
    return theme('search-users-by-role-results', array('module' => 'users', 'search_results' => $search_results));
}

/**
 * Search users by their role.
 *
 * @param $role_name
 *   A string reference by rolename.
 * @param $status
 *   An integer set to 1 for only active users, 0 only inactive users.
 * @return array of user ids
 */
function smartschool_users_by_role($role_name, $status = 1) {
	global $user;
	if ($cache = cache_get ( 'smartschool_users_by_role_' . $user->uid )) {
		$uids = $cache->data;
	} else {
		global $base_url;
		$uids = array();
	    $role = user_role_load_by_name($role_name);
	    if ($role){
	        $query = 'SELECT ur.uid '
	               . 'FROM {users_roles} AS ur '
	               . 'INNER JOIN {users} AS u ON u.uid = ur.uid '
	               . 'INNER JOIN {field_data_field_user_sms_voornaam} AS uf ON ur.uid = uf.entity_id '
	               . 'INNER JOIN {field_data_field_user_sms_naam} AS ul ON ur.uid = ul.entity_id '
	               . 'WHERE ur.rid = :rid AND u.status = :status '
	               . 'ORDER BY ul.field_user_sms_naam_value ASC, uf.field_user_sms_voornaam_value ASC';
	        $result = db_query($query, array(':rid' => $role->rid, ':status' => $status));
	        $uids = $result->fetchCol();
	        if (($cnt=count($uids))>10) {
	            $uids = array_slice($uids, 0, 10);
	            $uids[] = '<a class="course" style="text-align: right;" href="'.$base_url.'/search/users-by-role/'.$role->rid.'">'.t('more').'... (+'.($cnt-10).')'.'</a>';
	        }
	    }
	    
	    cache_set ( 'smartschool_users_by_role_' . $user->uid, $uids, 'cache_argus' );
	}
	return $uids;
}

/**
 * Retrieve all content from user by id.
 *
 * @param $uid
 *   An integer for passing the userid.
 * @param $order
 *   A string to determine the order for the query:
 *      - "created ASC|DESC" (order by date created)
 *      - "changed ASC|DESC" (order by date changed)
 *      - "title ASC|DESC" (order by title)
 *      - "type ASC|DESC" (order by content type)
 */
function smartschool_fetch_user_content($uid,$order){
	if ($cache = cache_get ( 'smartschool_fetch_user_content_' . $uid )) {
		$nids = $cache->data;
	} else {
	    $query = 'SELECT nid, title, created, changed, type '
	           . 'FROM node '
	           . 'WHERE uid = :uid '
	           . 'ORDER BY '.$order;
	    $result = db_query($query, array(':uid' => $uid));
	    $nids = $result->fetchAll();
	    if (($cnt=count($nids))>10) {
	        $nids = array_slice($nids, 0, 10);
	        $nids[] = '<div style="text-align: right;"><a href="/admin/content">'.t('more').'... (+'.($cnt-10).')'.'</a></div>';
	    }
	    cache_set ( 'smartschool_fetch_user_content_' . $uid, $nids, 'cache_argus' );
	}
    return $nids;
}
