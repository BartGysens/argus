<?php

/**
* @file bugsnag.admin.inc
*/


/**
* Administration form callback for Bugsnag settings.
*/
function bugsnag_admin_form($form, &$form_state)
{
    $form = [];

    $form['api'] = [
        '#type' => 'fieldset',
        '#title' => t('API Settings'),
    ];

    $form['api']['bugsnag_apikey'] = [
        '#type' => 'textfield',
        '#required' => true,
        '#title' => t('API key'),
        '#description' => t('Bugsnag API key for the application.'),
        '#default_value' => variable_get('bugsnag_apikey', ''),
    ];

    $form['bugsnag_release_stage'] = [
        '#type' => 'textfield',
        '#title' => t('Release Stage'),
        '#description' => t('eg. development or production.'),
        '#default_value' => variable_get('bugsnag_release_stage'),
    ];

    if (isset($_ENV) && !empty($_ENV)) {
        $form['bugsnag_send_environment'] = [
            '#type' => 'checkbox',
            '#title' => t('Send Enviroment Details'),
            '#description' => t('Set whether Bugsnag should send $_ENV with each error.'),
            '#default_value' => variable_get('bugsnag_send_environment'),
        ];
    }

    return system_settings_form($form);
}
