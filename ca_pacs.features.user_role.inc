<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_pacs_user_default_roles() {
  $roles = array();

  // Exported role: pacs administrator
  $roles['pacs administrator'] = array(
    'name' => 'pacs administrator',
  );

  return $roles;
}
