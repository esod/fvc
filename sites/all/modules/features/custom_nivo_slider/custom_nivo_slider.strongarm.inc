<?php
/**
 * @file
 * custom_nivo_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function custom_nivo_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_animation_speed';
  $strongarm->value = '500';
  $export['nivo_slider_animation_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_banner_html_captions';
  $strongarm->value = '';
  $export['nivo_slider_banner_html_captions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_banner_settings';
  $strongarm->value = array(
    0 => array(
      'weight' => '-10',
      'published' => 1,
      'delete' => 0,
      'fid' => '13',
      'title' => '',
      'description' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'url' => '',
      'visibility' => '<front>',
      'transition' => '',
    ),
    1 => array(
      'weight' => '-9',
      'published' => 1,
      'delete' => 0,
      'fid' => '15',
      'title' => '',
      'description' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'url' => '',
      'visibility' => '<front>',
      'transition' => '',
    ),
    2 => array(
      'weight' => '-8',
      'published' => 1,
      'delete' => 0,
      'fid' => '17',
      'title' => '',
      'description' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'url' => '',
      'visibility' => '<front>',
      'transition' => '',
    ),
    3 => array(
      'weight' => '-7',
      'published' => 1,
      'delete' => 0,
      'fid' => '19',
      'title' => '',
      'description' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'url' => '',
      'visibility' => '<front>',
      'transition' => '',
    ),
  );
  $export['nivo_slider_banner_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_box_columns';
  $strongarm->value = '8';
  $export['nivo_slider_box_columns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_box_rows';
  $strongarm->value = '4';
  $export['nivo_slider_box_rows'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_control_navigation';
  $strongarm->value = 1;
  $export['nivo_slider_control_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_control_nav_thumbs';
  $strongarm->value = 0;
  $export['nivo_slider_control_nav_thumbs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_directional_navigation';
  $strongarm->value = 1;
  $export['nivo_slider_directional_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_effect';
  $strongarm->value = 'sliceUpDownLeft';
  $export['nivo_slider_effect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_image_style';
  $strongarm->value = 0;
  $export['nivo_slider_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_image_style_slide';
  $strongarm->value = 'large';
  $export['nivo_slider_image_style_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_image_style_thumb';
  $strongarm->value = 'thumbnail';
  $export['nivo_slider_image_style_thumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_manual_advance';
  $strongarm->value = 0;
  $export['nivo_slider_manual_advance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_next_text';
  $strongarm->value = 'Next';
  $export['nivo_slider_next_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_pause_on_hover';
  $strongarm->value = 1;
  $export['nivo_slider_pause_on_hover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_pause_time';
  $strongarm->value = '5000';
  $export['nivo_slider_pause_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_previous_text';
  $strongarm->value = 'Prev';
  $export['nivo_slider_previous_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_random_start';
  $strongarm->value = 0;
  $export['nivo_slider_random_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_slices';
  $strongarm->value = '15';
  $export['nivo_slider_slices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_start_slide';
  $strongarm->value = '0';
  $export['nivo_slider_start_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nivo_slider_theme';
  $strongarm->value = 'default';
  $export['nivo_slider_theme'] = $strongarm;

  return $export;
}
