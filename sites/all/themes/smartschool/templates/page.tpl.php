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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file
 * Set template for single page.
 *
 * change forwarding as suggested
 */
$url = $_SERVER ['REQUEST_URI'];
if (! user_is_logged_in () && ! stristr ( $url, 'user/login' )) {
	header ( 'Location: ' . base_path () . drupal_get_path_alias ( 'user/login' ) . '?destination=' . $url );
	exit ();
}

// include 'page--fixed-layout.tpl.php';
include 'page--responsive-layout.tpl.php';
