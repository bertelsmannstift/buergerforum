<?php
/**
 * @file
 * bf_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bf_rules_default_rules_configuration() {
  $items = array();
  $items['rules_add_comment_to_proposal'] = entity_import('rules_config', '{ "rules_add_comment_to_proposal" : {
      "LABEL" : "Add comment to Page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_page" : { "bundle" : "comment_node_page" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "comment:author:roles" ],
            "value" : { "value" : { "3" : "3", "4" : "4" } }
          }
        },
        { "data_is_empty" : { "data" : [ "comment:parent:cid" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "comment:node" ] },
            "PROVIDE" : { "variable_added" : { "comment_node" : "Added variable" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "comment:author" ] },
            "PROVIDE" : { "variable_added" : { "comment_author" : "Added variable" } }
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "[comment-node:title]: [comment:title]",
            "message" : "Eine neue Frage wurde gestellt.\\r\\n\\r\\nFragesteller: [comment-author:field-displayed-name]\\r\\nFrage: [comment:title]\\r\\n\\r\\n[comment:body]\\r\\n\\r\\nLink: [comment-node:url]\\r\\n\\r\\n--\\r\\n[site:name]\\r\\n[site:url]"
          }
        }
      ]
    }
  }');
  $items['rules_after_private_message_sending'] = entity_import('rules_config', '{ "rules_after_private_message_sending" : {
      "LABEL" : "After private message sending",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "bf_message" ],
      "ON" : { "new_message_created" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[sender:mail]",
            "subject" : "Gesendet: [subject:value]",
            "message" : "Guten Tag, [sender:name],\\r\\n\\r\\nSie haben folgende Nachricht an [recipient:name] versandt:\\r\\n\\r\\n[message:value]\\r\\n\\r\\n[recipient:name] kann Ihnen nun direkt an Ihre E-Mail Adresse antworten. Falls Sie einen Missbrauch Ihrer Daten vermuten, kontaktieren Sie uns bitte unter [site:mail] .\\r\\n\\r\\nMit freundlichen Gr\\u00fc\\u00dfen\\r\\nvom Serviceteam B\\u00fcrgerForum\\r\\n\\r\\n--\\r\\n[site:name]\\r\\n[site:url]",
            "language" : [ "sender:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_after_private_message_sending_send_to_recipient'] = entity_import('rules_config', '{ "rules_after_private_message_sending_send_to_recipient" : {
      "LABEL" : "After private message sending - send to recipient",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "bf_message" ],
      "ON" : { "new_message_created_send" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "recipient:mail" ],
            "subject" : "[subject:value]",
            "message" : "Guten Tag, [recipient:name],\\r\\n\\r\\n[sender:name] schrieb Ihnen \\u00fcber die B\\u00fcrgerForum-Website folgende Nachricht:\\r\\n\\r\\n[message:value]\\r\\n\\r\\nSie k\\u00f6nnen direkt an [sender:mail] antworten und damit auch Ihre E-Mail-Adresse \\u00fcbermitteln. Falls Sie einen Missbrauch Ihrer Daten vermuten, kontaktieren Sie uns bitte unter [site:mail] .\\r\\n\\r\\nMit freundlichen Gr\\u00fc\\u00dfen\\r\\nvom Serviceteam B\\u00fcrgerForum\\r\\n\\r\\n--\\r\\n[site:name]\\r\\n[site:url]",
            "language" : [ "sender:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_after_saving_new_content_of_type_advpoll'] = entity_import('rules_config', '{ "rules_after_saving_new_content_of_type_advpoll" : {
      "LABEL" : "After saving new content of type advpoll",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--advpoll" : { "bundle" : "advpoll" } },
      "DO" : [ { "redirect" : { "url" : "admin\\/content-view\\/polls" } } ]
    }
  }');
  $items['rules_after_saving_new_content_of_type_info_article'] = entity_import('rules_config', '{ "rules_after_saving_new_content_of_type_info_article" : {
      "LABEL" : "After saving new content of type info_article",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--info_article" : { "bundle" : "info_article" } },
      "DO" : [ { "redirect" : { "url" : "admin\\/content-view\\/info-articles" } } ]
    }
  }');
  $items['rules_after_saving_new_content_of_type_proposal'] = entity_import('rules_config', '{ "rules_after_saving_new_content_of_type_proposal" : {
      "LABEL" : "After saving new content of type proposal",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--proposal" : { "bundle" : "proposal" } },
      "DO" : [ { "redirect" : { "url" : "admin\\/content-view\\/proposals" } } ]
    }
  }');
  $items['rules_after_saving_new_content_of_type_task'] = entity_import('rules_config', '{ "rules_after_saving_new_content_of_type_task" : {
      "LABEL" : "After saving new content of type task",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "nodequeue", "nodequeue_rules" ],
      "ON" : { "node_insert--task" : { "bundle" : "task" } },
      "DO" : [
        { "redirect" : { "url" : "admin\\/content-view\\/tasks" } },
        { "nodequeue_add_action" : { "node" : [ "node" ], "queue" : { "value" : { "3" : "3" } } } }
      ]
    }
  }');
  $items['rules_bf_rules_add_to_nodequeue_committee'] = entity_import('rules_config', '{ "rules_bf_rules_add_to_nodequeue_committee" : {
      "LABEL" : "Add to nodequeue committee",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "nodequeue", "nodequeue_rules", "rules" ],
      "ON" : { "node_insert--committee" : { "bundle" : "committee" } },
      "DO" : [
        { "nodequeue_add_action" : { "node" : [ "node" ], "queue" : { "value" : { "2" : "2" } } } },
        { "redirect" : { "url" : "admin\\/content-view\\/committees" } }
      ]
    }
  }');
  $items['rules_change_editors_of_proposal'] = entity_import('rules_config', '{ "rules_change_editors_of_proposal" : {
      "LABEL" : "Change editors of proposal",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--proposal" : { "bundle" : "proposal" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node-unchanged:field-editors" ],
            "value" : [ "node:field-editors" ]
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Neuer Redakteur: [node:title]",
            "message" : "Die Zuordnung der B\\u00fcrgerredakteure wurde ver\\u00e4ndert.\\r\\n\\r\\nVorschlag: [node:title]\\r\\nJetzt neu zugeordnet: [node:editors-added]\\r\\nNicht mehr zugeordnet: [node:editors-removed]\\r\\n\\r\\nLink: [node:url]\\r\\n\\r\\n--\\r\\n[site:name]\\r\\n[site:url]"
          }
        }
      ]
    }
  }');
  $items['rules_change_proposal_phase'] = entity_import('rules_config', '{ "rules_change_proposal_phase" : {
      "LABEL" : "Change proposal phase",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--proposal" : { "bundle" : "proposal" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:field-phase" ],
            "value" : [ "node-unchanged:field-phase" ]
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Phase of proposal [node:title] was changed from [node-unchanged:field-phase] to [node:field-phase]\\r\\nCheck proposal here [node:url]" } }
      ]
    }
  }');
  $items['rules_new_comment_abuse'] = entity_import('rules_config', '{ "rules_new_comment_abuse" : {
      "LABEL" : "New comment abuse",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "bf_comment" ],
      "ON" : { "comment_abuse_created" : [] },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "comment:author" ] },
            "PROVIDE" : { "variable_added" : { "comment_author" : "Comment Author" } }
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Meldung: [abuse:value]",
            "message" : "Ein Beitrag wurde gemeldet.\\r\\n\\r\\nGemeldet von: [user-abuse:field-displayed-name]\\r\\nGrund: [abuse:value]\\r\\n\\r\\nBeitragsverfasser: [comment-author:field-displayed-name]\\r\\nBeitrag: [comment:title]\\r\\n\\r\\n[comment:body]\\r\\n\\r\\nLink: [comment:url]\\r\\n--\\r\\n[site:name]\\r\\n[site:url]"
          }
        },
        { "mail" : {
            "to" : [ "user-abuse:mail" ],
            "subject" : "Meldung: [abuse:value]",
            "message" : "Ein Beitrag wurde gemeldet.\\r\\n\\r\\nGemeldet von: [user-abuse:field-displayed-name]\\r\\nGrund: [abuse:value]\\r\\n\\r\\nBeitragsverfasser: [comment-author:field-displayed-name]\\r\\nBeitrag: [comment:title]\\r\\n\\r\\n[comment:body]\\r\\n\\r\\nLink: [comment:url]\\r\\n--\\r\\n[site:name]\\r\\n[site:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_user_register'] = entity_import('rules_config', '{ "rules_user_register" : {
      "LABEL" : "User register",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "user_send_account_email" : {
            "account" : [ "account" ],
            "email_type" : "register_no_approval_required"
          }
        }
      ]
    }
  }');
  return $items;
}
