<?php

/**
 * @file
 * Default theme implementation for displaying search results.
 *
 * This template collects each invocation of theme_search_result(). This and
 * the child template are dependent to one another sharing the markup for
 * definition lists.
 *
 * Note that modules may implement their own search type and theme function
 * completely bypassing this template.
 *
 * Available variables:
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 *
 *
 * @see template_preprocess_search_results()
 *
 * @ingroup themeable
 */
?>
<?php if ($search_results): ?>
    <h2><?php print t('Search results');?></h2>
    <table class="views-table">
        <thead>
            <tr>
                <th class="views-field views-align-center"><?php print t('Nr.'); ?></th>
                <th class="views-field views-align-center"><?php print t('Naam'); ?></th>
                <th class="views-field views-align-center"><?php print t('Email'); ?></th>
                <th class="views-field views-align-center"><?php print t('Telefoon'); ?></th>
                <th class="views-field views-align-center"><?php print t('GSM'); ?></th>
            </tr>
        </thead>
        <tbody><?php print $search_results; ?></tbody>
    </table>
<?php else : ?>
    <h2><?php print t('Your search yielded no results');?></h2>
    <?php print search_help('search#noresults', drupal_help_arg()); ?>
<?php endif; ?>
