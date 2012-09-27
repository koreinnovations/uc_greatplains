<?php

function uc_greatplains_admin_settings_form() {
  $form = array();
  
  $form['uc_greatplains_storage_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Filesystem directory to store serialized orders for GreatPlains'),
      '#default_value' => variable_get('uc_greatplains_storage_path', ''),
  );
  
  return system_settings_form($form);
}