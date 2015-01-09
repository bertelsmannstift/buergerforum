(function ($) {

    /**
     * Attach handlers to evaluate the strength of any password fields and to check
     * that its confirmation is correct.
     */
    Drupal.behaviors.validatefields = {
        attach: function (context, settings) {
           // console.log($('#user-register-form);
            console.log(Drupal.settings);
            if (Drupal.settings.RegistrationError && Drupal.settings.RegistrationError.field=='commitee_first_request') {
                if (! $('#'+Drupal.settings.RegistrationError.id+' .class').length) {
                    $('#'+Drupal.settings.RegistrationError.id).append('<label for="commitee_first_request" generated="true" class="error">'+Drupal.settings.RegistrationError.text+'</label>');
                    $('#edit-data-block .select_comitee:checked').attr('checked','');
                }
                $('#messages .messages.error').remove();
            }

            $('#user-register-form #edit-submit', context).once('register-submit', function () {
                var passwordInput = $(this);
               // console.log($(this));
                $('#user-register-form').prepend('<div class="messages-register-form"></div>');
                $(this).click(function() {
                  //  console.log(Drupal.myClientsideValidation.validators);
                    var validators = Drupal.myClientsideValidation.validators;
                    console.log(validators['user-register-form']);
                    console.log(validators['user-register-form'].invalid.objectLength());
                  //  if (validators['user-register-form'].numberOfInvalids()) {
                        $('.messages-register-form').addClass('error').addClass('messages').html(Drupal.t('Required fields'));
                        console.log($('.messages-register-form'));
                  //  } else {
                     //   $('.messages-register-form').removeClass('error messages')
                  //  }
                });
            });//
           /* $('.page-user-register-interests #edit-next', context).once('send_commitee', function () {
                $('#user-register-form').prepend('<div class="messages-register-form"></div>');*/
                $('.page-user-register-interests #edit-next').click(function() {
                    $.each('#edit-commitee-set input[name="commitee_first_request"]', function(i,element) {
                        console.log($(element).attr('checked'));
                      //  alert($(element).attr('checked'));
                    });
                    //  if (validators['user-register-form'].numberOfInvalids()) {
                    $('.messages-register-form').addClass('error').addClass('messages').html(Drupal.t('Required fields'));
                    //  } else {
                    //   $('.messages-register-form').removeClass('error messages')
                    //  }
                });
          /*  });*/
            $('#user-register-form #edit-next', context).once('register-next', function () {
                var passwordInput = $(this);
                // console.log($(this));
              //  $('#user-register-form').prepend('<div class="messages-register-form"></div>');
                $(this).click(function() {
                    //  console.log(Drupal.myClientsideValidation.validators);
                  //alert();
                 //   var validators = Drupal.myClientsideValidation.validators;
                  //  validators.validate();
                    $('.messages-register-form').addClass('error').addClass('messages').html(Drupal.t('Required fields'));
                });
            });
         //   console.log(settings);
            $('.register-fieldset', context).once('registration', function () {
                var firstname=$(this).find('#field-first-name-add-more-wrapper input');
                var lastname=$(this).find('#field-last-name-add-more-wrapper input');
                var dispayedname = $(this).find('#field-displayed-name-add-more-wrapper input');
                $(firstname).focusout(function() {
                    dispayedname.val(firstname.val() + ' ' + lastname.val());
                });
                $(lastname).focusout(function() {
                    dispayedname.val(firstname.val() + ' ' + lastname.val());
                });
            });
        }
    };



})(jQuery);
