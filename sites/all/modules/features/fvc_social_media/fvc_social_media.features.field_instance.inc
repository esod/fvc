<?php
/**
 * @file
 * fvc_social_media.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fvc_social_media_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-blog_post-field_youtube_video'
  $field_instances['node-blog_post-field_youtube_video'] = array(
    'bundle' => 'blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the YouTube URL. Valid URL formats include: http://www.youtube.com/watch?v=1SqBdS0XkV4 and http://youtu.be/1SqBdS0XkV4',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'youtube_autoplay' => 0,
          'youtube_height' => '',
          'youtube_size' => '420x315',
          'youtube_width' => '',
        ),
        'type' => 'youtube_video',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_youtube_video',
    'label' => 'YouTube Video',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'youtube',
      'settings' => array(),
      'type' => 'youtube',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter the YouTube URL. Valid URL formats include: http://www.youtube.com/watch?v=1SqBdS0XkV4 and http://youtu.be/1SqBdS0XkV4');
  t('YouTube Video');

  return $field_instances;
}
