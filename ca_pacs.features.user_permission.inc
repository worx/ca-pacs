<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_pacs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_pacs content
  $permissions['create ca_pacs content'] = array(
    'name' => 'create ca_pacs content',
    'roles' => array(
      '0' => 'pacs administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete any ca_pacs content
  $permissions['delete any ca_pacs content'] = array(
    'name' => 'delete any ca_pacs content',
    'roles' => array(
      '0' => 'pacs administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete own ca_pacs content
  $permissions['delete own ca_pacs content'] = array(
    'name' => 'delete own ca_pacs content',
    'roles' => array(
      '0' => 'pacs administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit any ca_pacs content
  $permissions['edit any ca_pacs content'] = array(
    'name' => 'edit any ca_pacs content',
    'roles' => array(
      '0' => 'pacs administrator',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit own ca_pacs content
  $permissions['edit own ca_pacs content'] = array(
    'name' => 'edit own ca_pacs content',
    'roles' => array(
      '0' => 'pacs administrator',
      '1' => 'webmaster',
    ),
  );

  return $permissions;
}
