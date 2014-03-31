<?php

/**
 * Implements hook_panels_layouts()
 */
function ubiq_theme_ubiq_home_panels_layouts() {
  $items['ubiq_home'] = array(
    'title' => t('Home Page Layout'),
    'category' => t('Ubiq Custom'),
    'icon' => 'ubiq_home.png',
    'theme' => 'ubiq_home',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'bottom' => t('Bottom'),
      'testimonial_left' => t('Testimonial Left'),
      'testimonial_right' => t('Testimonial Right')
    ),
  );
  return $items;
}

