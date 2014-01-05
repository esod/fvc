<?php
/**
 * @file
 * custom_nivo_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function custom_nivo_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer nivo slider'.
  $permissions['administer nivo slider'] = array(
    'name' => 'administer nivo slider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nivo_slider',
  );

  return $permissions;
}
