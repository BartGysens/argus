<?php
/*
 * Copyright (C) 2016 bartgysens
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
 * Contains all prepocessor instructions for generating user profile pages
 */

drupal_add_js(drupal_get_path('module', 'argus_gebruikers').'/js/user-profile.js');

drupal_add_css(drupal_get_path('module', 'argus_gebruikers').'/css/user_profile.css');

$today = new DateTime('NOW');

$account = $variables['elements']['#account'];
$accountArray = (array) $account;
$variables['account'] = $account;

$uid = $account->uid;
$variables['user_id'] = $uid;

$variables['roles'] = $account->roles;
sort($variables['roles']);


/**
 * -----------------------------------------------------------------------------
 * Data about ...
 * -----------------------------------------------------------------------------
 */



// Preprocess fields.
if ($_SERVER['HTTP_HOST'] == 'localhost'){
	dpm($variables);
	print theme('status_messages');
}
field_attach_preprocess('user', $account, $variables['elements'], $variables);
