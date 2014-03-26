<?php

/**
 * Implements hook_panels_layouts()
 */
function ubiq_theme_ubiq_four_eight_panels_layouts() {
  $items['ubiq_four_eight'] = array(
    'title' => t('Ubiq Four Eight'),
    'category' => t('Ubiq Custom'),
    'icon' => 'ubiq_four_eight.png',
    'theme' => 'ubiq_four_eight',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right')
    ),
  );
  return $items;
}

