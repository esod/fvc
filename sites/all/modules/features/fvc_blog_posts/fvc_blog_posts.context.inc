<?php
/**
 * @file
 * fvc_blog_posts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fvc_blog_posts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_blocks';
  $context->description = 'Placement for blog block';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Placement for blog block');
  $export['blog_blocks'] = $context;

  return $export;
}
