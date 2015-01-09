(function ($) {
  Drupal.behaviors.bf_comment = {
    attach: function (context, settings) {
      $(".node-type-proposal .field-type-image label").bind('click', function(e) {
        $(".node-type-proposal .field-type-image .form-file").show('slow');
        $(".node-type-proposal .field-type-image #edit-field-comment-image-und-0-upload-button").show('slow');
        $(".node-type-proposal .field-type-image .description").show('slow');
      });
    }
  };
}(jQuery));
