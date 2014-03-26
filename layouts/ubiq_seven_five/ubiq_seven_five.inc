<?php

/**
 * Implements hook_panels_layouts()
 */
function ubiq_theme_ubiq_seven_five_panels_layouts() {
  $items['ubiq_seven_five'] = array(
    'title' => t('Ubiq Seven Five'),
    'category' => t('Ubiq Custom'),
    'icon' => 'ubiq_seven_five.png',
    'theme' => 'ubiq_seven_five',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right')
    ),
  );
  return $items;
}

