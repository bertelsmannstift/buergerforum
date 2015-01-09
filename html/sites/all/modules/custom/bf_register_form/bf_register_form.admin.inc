<?php

/**
 * @file
 * Function statistics for the bf_register_form module.
 */

function bf_register_form_statistics() {
  $variables = array();
  $countMembersAll = bf_core_count_members_forum();
  $listCommitee = bf_core_comitee_list();
  $places_for_committe = bf_core_places_for_committee();
  $reservedPlace = not_zero(bf_core_count_members_forum(TRUE));
  $countMembersAddition = variable_get('bf_count_members_all', 300) - variable_get('bf_count_members_form', 300);
  $countMembersFree = variable_get('bf_count_members_all', 300) - $countMembersAll - $reservedPlace;
  $variables['header'] = array('', t('Total'), t('Reserved'), t('Free'));
  $variables['rows'][] = array(
    t('Places'),
    variable_get('bf_count_members_all', 300),
    $countMembersAll + $reservedPlace,
    not_zero($countMembersFree)
  );
  $variables['rows'][] = array(
    t('Members'),
    variable_get('bf_count_members_form', 300),
    $countMembersAll,
    not_zero(variable_get('bf_count_members_form', 300) - ($countMembersAll))
  );

  $variables['rows'][] = array(
    t('Additional Members'),
    $countMembersAddition,
    $reservedPlace,
    $countMembersAddition - $reservedPlace
  );
  $variables['rows'][] = array('', '', '', '');
  $variables['rows'][] = array(t('Number of committees'), '', '', count($listCommitee));
  $tableTop = theme('table', $variables);
  $tableMiddle = '';

  foreach ($listCommitee as $itemCommitee) {
    $variables['rows'] = array();
    $variables['header'] = array(
      $itemCommitee->title,
      '%',
      '',
      t('Members'),
      t('Free'),
      t('Add. Members'),
      t('Free')
    );
    $addPlace = $places_for_committe['members_all'] - $places_for_committe['members_form'];
    $reservedPlace = not_zero(bf_core_count_members_for_comitee($itemCommitee->nid, 'Participant', TRUE));

    $variables['rows'][] = array(
      t('Total'),
      '',
      t('Max'),
      $places_for_committe['members_form'],
      array(
        'data'  => not_zero($places_for_committe['members_form'] - bf_core_count_members_for_comitee
        ($itemCommitee->nid)),
        'align' => 'center'
      ),
      ceil(not_zero($addPlace)),
      ceil(not_zero($addPlace - $reservedPlace))
    );

    $variables['rows'][] = array(
      '',
      '',
      t('Reserved'),
      bf_core_count_members_for_comitee($itemCommitee->nid), /*'',*/
      '',
      ceil($reservedPlace),
      ''
    );
    $criterianData = bf_register_form_check_param('Male', 'field_sex', 'Male', $itemCommitee->nid, TRUE);
    $addPlaceCriteria = $addPlace * $criterianData['procent'] / 100;
    $reservedPlaceCriteria = not_zero($criterianData['addition_place_occuped']);
    $variables['rows'][] = array(
      t('Man'),
      ($criterianData['procent']),
      t('Max'),
      $criterianData['all_place'],
      array(
        'data'  => not_zero($criterianData['all_place'] - $criterianData['occupied_place']),
        'align' => 'center'
      ),
      ceil(not_zero($addPlaceCriteria)),
      ceil(not_zero($addPlaceCriteria - $reservedPlaceCriteria))
    );
    $variables['rows'][] = array(
      '',
      '',
      t('Reserved'),
      not_zero($criterianData['occupied_place']),
      '',
      $reservedPlaceCriteria,
      ''
    );
    $criterianData = bf_register_form_check_param('Female', 'field_sex', 'Female', $itemCommitee->nid, TRUE);
    $addPlaceCriteria = $addPlace * $criterianData['procent'] / 100;
    $reservedPlaceCriteria = not_zero($criterianData['addition_place_occuped']);
    $variables['rows'][] = array(
      t('Woman'),
      ($criterianData['procent']),
      t('Max'),
      $criterianData['all_place'],
      array(
        'data'  => not_zero($criterianData['all_place'] - not_zero($criterianData['occupied_place'])),
        'align' => 'center'
      ),
      ceil(not_zero($addPlaceCriteria)),
      ceil(not_zero($addPlaceCriteria - $reservedPlaceCriteria))
    );
    $variables['rows'][] = array(
      '',
      '',
      t('Reserved'),
      not_zero($criterianData['occupied_place']), /*'',*/
      '',
      ceil(not_zero($reservedPlaceCriteria)),
      ''
    );

    $groups = field_group_read_groups(array(
      'name'      => 'user',
      'bundle'    => 'user',
      'view_mode' => 'full'
    ));
    //params
    foreach ($groups['user']['user']['form']['group_extparam']->children as $extparam) {
      $all_fields_info = field_info_fields();
      if (!isset($all_fields_info[$extparam])) {
        continue;
      }
      $allowed_values = list_allowed_values($all_fields_info[$extparam]);
      foreach ($allowed_values as $key => $value) {
        $criterianData = bf_register_form_check_param($key, $extparam, $value, $itemCommitee->nid, TRUE);
        $addPlaceCriteria = $addPlace * $criterianData['procent'] / 100;
        $reservedPlaceCriteria = not_zero($criterianData['addition_place_occuped']);
        $variables['rows'][] = array(
          $value,
          ($criterianData['procent']),
          t('Max'),
          $criterianData['all_place'],
          array(
            'data'  => not_zero($criterianData['all_place'] -
              not_zero($criterianData['occupied_place'])),
            'align' => 'center'
          ),
          ceil(not_zero($addPlaceCriteria)),
          ceil(not_zero($addPlaceCriteria - $reservedPlaceCriteria))
        );
        $variables['rows'][] = array(
          '',
          '',
          t('Reserved'),
          not_zero($criterianData['occupied_place']), /* '',*/
          '',
          ceil(not_zero($reservedPlaceCriteria)),
          ''
        );
      }
    }
    $tableMiddle .= theme('table', $variables);
  }
  return $tableTop . $tableMiddle;
}

function bf_register_form_statistics_invitations_sent() {
  $variables = array();
  $invites = bf_register_form_get_invites_data();
  $variables['header'] = array(t('Mail'), t('Invite sent date'), t('Registration'), t('Date of registration'));
  $count_register_user = 0;
  foreach ($invites as $invite) {
    $date_register = bf_register_form_check_invite_is_member($invite->email);
    if ($date_register) {
      $status_registration = t('Yes');
      $count_register_user++;
    }
    else {
      $status_registration = t('No');
    }

    $variables['rows'][] = array(
      $invite->email,
      $invite->date_send ? date('d.m.Y H:i:s', $invite->date_send) : '',
      $status_registration,
      $date_register ? date('d.m.Y H:i:s', reset($date_register)) : t('No')
    );
  }
  $variables['rows'][] = array('', '', '', '');
  $variables['rows'][] = array('<strong>' . t('Invitations sent') . '</strong>', '', '',
    '<strong>' . count($invites) . '</strong>');
  $variables['rows'][] = array('<strong>' . t('Subsequent registrations') . '</strong>', '', '',
    '<strong>' . $count_register_user . '</strong>');
  $tableTop = theme('table', $variables);
  return $tableTop;
}

/**
 * Get invites data.
 */
function bf_register_form_get_invites_mails() {
  $query = db_select('bf_invite', 'i');
  $query->fields('i', array('email'));
  $query->condition('i.status', 1);
  $result = $query
    ->execute()
    ->fetchCol();
  return $result;
}

/**
 * Get invites data.
 */
function bf_register_form_get_invites_data() {
  $query = db_select('bf_invite', 'i');
  $query->fields('i', array('date_send', 'status', 'email'));
  $query->condition('i.status', 1);
  $query->orderBy('date_send', 'DESC');
  $result = $query->distinct('email')
    ->execute()
    ->fetchAllAssoc('email');
  return $result;
}

/**
 * Check invite is register user.
 */
function bf_register_form_check_invite_is_member($email) {
  $query = db_select('users', 'u');
  $query->fields('u', array('created'));
  $query->condition('u.mail', $email);
  $result = $query
    ->execute()
    ->fetchCol();
  return $result;
}

/**
 * Function check not zero number
 *
 * @return
 *    int
 */
function not_zero($Item) {
  if ($Item < 0) {
    return 0;
  }
  else {
    return $Item;
  }
}
