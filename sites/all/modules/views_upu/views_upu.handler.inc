<?php
/**
 * @file
 * Views handler for the Views User Profile URL module
 *
 */
class views_upu_user_picture_handler extends views_handler_field_user_picture {

  /**
   * @{inheritdoc}
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['views_upu_output_format'] = array(
      'default' => 0,
    );
    return $options;
  }

  /**
   * @{inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['views_upu_output_format'] = array(
      '#title' => t("Format"),
      '#type' => 'radios',
      '#options' => array(
        0 => t('Rendered'),
        1 => t('Plain URL'),
      ),
      '#default_value' => $this->options['views_upu_output_format'],
    );
  }

  /**
   * @{inheritdoc}
   */
  function render($values) {
    // Simply call original handler when the rendered option is selected.
    if ($this->options['views_upu_output_format'] == 0) {
      return parent::render($values);
    }

    if (!variable_get('user_pictures', 0))
      return '';

    $fid = $this->get_value($values);
    if ($fid) {
      $picture = file_load($fid);
      $uri = $picture->uri;
    }
    else {
      $uri = variable_get('user_picture_default', '');
    }

    if (!file_valid_uri($uri)) {
      return '';
    }

    $style = ($this->options['image_style'] ?
              $this->options['image_style'] :
              variable_get('user_picture_style', ''));

    return image_style_url($style, $uri);
  }
}
