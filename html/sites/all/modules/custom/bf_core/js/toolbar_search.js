(function($) {

  Drupal.behaviors.toolbar_search = {
    attach: function(context, settings) {
      var $form = $('.toolbar-search');
      var $dropdown = $form.find('.dropdown-menu');
      if ($form.length) {
        $dropdown.click(function(e) {
          e.stopPropagation();
        });
      }
    }
  };
})(jQuery);
