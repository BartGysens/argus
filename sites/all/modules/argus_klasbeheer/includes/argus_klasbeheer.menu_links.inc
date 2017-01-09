<?php
/**
 * Implements hook_menu_default_menu_links().
 */
function _argus_klasbeheer_installed_menu_links() {
    $menu_links = array();

    $menu_links['menu-modules_klasbeheer:klassen/overzicht'] = array(
        'menu_name' => 'navigation',
        'link_path' => 'klassen/overzicht',
        'router_path' => 'klassen/overzicht',
        'link_title' => 'Klassen',
        'options' => array(
            'attributes' => array(
                'title' => 'Overzicht van alle klassen.',
            ),
            'alter' => TRUE,
            'identifier' => 'navigation_klasbeheer:klassen/overzicht',
        ),
        'module' => 'system',
        'hidden' => 0,
        'external' => 0,
        'has_children' => 0,
        'expanded' => 0,
        'weight' => 0,
        'customized' => 0,
        'parent_identifier' => 'navigation_:klassen',
    );

    $menu_links['menu-modules_klasbeheer:klassen/ktt'] = array(
        'menu_name' => 'navigation',
        'link_path' => 'klassen/ktt',
        'router_path' => 'klassen/ktt',
        'link_title' => 'Klastitularissen',
        'options' => array(
            'attributes' => array(
                'title' => 'Overzicht van alle klas- en hulpklastitularissen.',
            ),
            'alter' => TRUE,
            'identifier' => 'navigation_klasbeheer:klassen/ktt',
        ),
        'module' => 'system',
        'hidden' => 0,
        'external' => 0,
        'has_children' => 0,
        'expanded' => 0,
        'weight' => 0,
        'customized' => 0,
        'parent_identifier' => 'navigation_:klassen',
    );
    
    $menu_links['navigation_klas:node/add/klas'] = array(
        'menu_name' => 'navigation',
        'link_path' => 'node/add/klas',
        'router_path' => 'node/add/klas',
        'link_title' => 'Klas',
        'options' => array(
            'attributes' => array(
                'title' => 'Beheer de <em>klassen</em>.',
            ),
            'alter' => TRUE,
            'identifier' => 'navigation_klas:node/add/klas',
        ),
        'module' => 'system',
        'hidden' => 0,
        'external' => 0,
        'has_children' => 0,
        'expanded' => 0,
        'weight' => -44,
        'customized' => 1,
        'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
    );
    
    // Translatables
    // Included for use with string extractors like potx.
    t('Klas');
    t('Klassen');
    t('Klassenbeheer');
    
    return $menu_links;
}
