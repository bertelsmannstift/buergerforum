(function ($) {

    /**
     * Attach handlers to evaluate the strength of commitee radio fields and to check
     * that its confirmation is correct.
     */
    Drupal.behaviors.dependentSelect = {
        attach: function (context, settings) {
            $('#user-register-form', context).once('register-form', function () {
                var select_comitees = $('input.select_comitee', this);
                var selectIndex = 0;
                var selectIndexOption = 0;
                select_comitees.change(function (event) {
                    var selectIndex = $($(this).parents().get(2)).index();
                    var selectIndexOption = $($(this).parent()).index();
                    var othetComiteeSelect = $($('.fieldset-wrapper>.form-type-radios')).eq(2 - selectIndex).find('input:checked');
                    console.log($(othetComiteeSelect.parent()).index());
                    if (selectIndexOption == $(othetComiteeSelect.parent()).index()) {
                        event.preventDefault();
                        if ($(this).is(':checked')) {
                            $(this).attr('checked', false);
                        }
                    }
                });
            });
        }
    };


})(jQuery);
