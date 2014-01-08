<?php

class TfaRecoveryCode extends TfaPlugin {

  public function getForm($form) {
    $form['recover'] = array(
      '#type' => 'textfield',
      '#title' => t('Enter one of your recovery codes'),
      '#required' => TRUE,
      '#description' => t('These recovery codes were generated when you first setup TFA.'),
    );
    $form['login'] = array(
      '#type' => 'submit',
      '#value' => t('Submit'),
    );
    return $form;
  }

  public function validate($code) {
    return $code === 'FAILSAFE';
  }
}