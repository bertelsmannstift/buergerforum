(function ($) {
    Drupal.behaviors.selectEditors = {
        attach: function (context, settings) {
            $('#field-editors-values', context).once('field-editors-values', function () {
                var deleteEditor = $('a.deleteEditor', this);
                deleteEditor.click(function (event) {
                    $($($(this).parents().get(1)).find('.edit-dialog').toggleClass('hide'));
                    $(this).toggleClass('hide');
                    $(this).closest('.dialog-links').siblings().find('.form-autocomplete').val('');
                });
            });
            $('.form-autocomplete').change(function (event) {
                $(this).closest('.form-type-textfield').siblings().find('.hide').toggleClass('hide');
            });
        }
    }
})(jQuery);