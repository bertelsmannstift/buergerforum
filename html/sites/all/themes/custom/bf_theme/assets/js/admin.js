jQuery(document).ready(function() {
  jQuery('#edit-field-task-type-und').change(function() {
    if (jQuery(this).val() != 'group task') {
      jQuery('.link-field-url').hide();
    } else {
      jQuery('.link-field-url').show();
    }
  });
});