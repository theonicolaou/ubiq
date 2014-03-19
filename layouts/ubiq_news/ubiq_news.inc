<?php

/**
 * Implements hook_panels_layouts()
 */
function ubiq_theme_ubiq_news_panels_layouts() {
  $items['ubiq_news'] = array(
    'title' => t('News Page Layout'),
    'category' => t('Ubiq Custom'),
    'icon' => 'ubiq_news.png',
    'theme' => 'ubiq_news',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'bottom' => t('Bottom')
    ),
  );
  return $items;
}

