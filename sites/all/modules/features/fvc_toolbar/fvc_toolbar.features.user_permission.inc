<?php
/**
 * @file
 * fvc_toolbar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fvc_toolbar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcut',
  );

  return $permissions;
}
