(function ($) {

/**
 * Toggle the visibility of a fieldset using smooth animations.
 */
Drupal.toggleFieldset = function (fieldset) {
  var $fieldset = $(fieldset);
  if ($fieldset.is('.comment-collapsed')) {
    var $content = $('> .fieldset-comment-wrapper', fieldset).hide();
    $fieldset
      .removeClass('comment-collapsed')
      .trigger({ type: 'collapsed', value: false })
      .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Hide'));
    $content.slideDown({
      duration: 'fast',
      easing: 'linear',
      complete: function () {
        Drupal.collapseScrollIntoView(fieldset);
        fieldset.animating = false;
      },
      step: function () {
        // Scroll the fieldset into view.
        Drupal.collapseScrollIntoView(fieldset);
      }
    });
    $fieldset.parents('.ajax-comment-wrapper').find('.proposal-children-comment').show();
    $fieldset.find('.links').show();
    $fieldset.find('.ctools-modal-comment-abuse-modal-style').show();
    $fieldset.find('.comment-count').hide();
  }
  else {
    $fieldset.trigger({ type: 'collapsed', value: true });
    $('> .fieldset-comment-wrapper', fieldset).slideUp('fast', function () {
      $fieldset
        .addClass('comment-collapsed')
        .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Show'));
      fieldset.animating = false;
    });
    $fieldset.parents('.ajax-comment-wrapper').find('.proposal-children-comment').hide();
    $fieldset.find('.links').hide();
    $fieldset.find('.ctools-modal-comment-abuse-modal-style').hide();
    $fieldset.find('.comment-count').show();
  }
};

/**
 * Scroll a given fieldset into view as much as possible.
 */
Drupal.collapseScrollIntoView = function (node) {
  var h = document.documentElement.clientHeight || document.body.clientHeight || 0;
  var offset = document.documentElement.scrollTop || document.body.scrollTop || 0;
  var posY = $(node).offset().top;
  var fudge = 55;
  if (posY + node.offsetHeight + fudge > h + offset) {
    if (node.offsetHeight > h) {
      window.scrollTo(0, posY);
    }
    else {
      window.scrollTo(0, posY + node.offsetHeight - h + fudge);
    }
  }
};

Drupal.behaviors.collapse = {
  attach: function (context, settings) {
    $('fieldset.comment-collapsible', context).once('collapse', function () {
      var $fieldset = $(this);
      // Expand fieldset if there are errors inside, or if it contains an
      // element that is targeted by the URI fragment identifier.
      var anchor = location.hash && location.hash != '#' ? ', ' + location.hash : '';
      if ($fieldset.find('.error' + anchor).length) {
        $fieldset.removeClass('comment-collapsed');
      }

      var summary = $('<span class="summary"></span>');
      $fieldset.
        bind('summaryUpdated', function () {
          var text = $.trim($fieldset.drupalGetSummary());
          summary.html(text ? ' (' + text + ')' : '');
        })
        .trigger('summaryUpdated');

      // Turn the legend into a clickable link, but retain span.fieldset-legend
      // for CSS positioning.
      var $legend = $('> legend .fieldset-comment-legend', this);

      $('<span class="fieldset-legend-prefix element-invisible"></span>')
        .append($fieldset.hasClass('comment-collapsed') ? Drupal.t('Show') : Drupal.t('Hide'))
        .prependTo($legend)
        .after(' ');

      // .wrapInner() does not retain bound events.
      var $link = $('<a class="fieldset-comment-title" href="#"></a>')
        .prepend($legend.contents())
        .appendTo($legend)
        .click(function () {
          /*$('.comment-collapsible').each(function() {
            if ($fieldset.get(0) != $(this).get(0)) {
              if (!$(this).hasClass('comment-collapsed')) {
                $(this).addClass('comment-collapsed');
                $(this).find('.fieldset-comment-wrapper').hide();
                $(this).parents('.ajax-comment-wrapper').find('.proposal-children-comment').hide();
                $(this).find('.comment-count').show();
              }
            }
          });*/
          var fieldset = $fieldset.get(0);
          // Don't animate multiple times.
          if (!fieldset.animating) {
            fieldset.animating = true;
            Drupal.toggleFieldset(fieldset);
          }
          return false;
        });

      $legend.append(summary);
    });
  }
};
  $(document).ready(function() {
    $('.pane-node-comment-form .comment-form #edit-subject-field-und-0-value').val('');
    $('.pane-node-comment-form .comment-form #edit-comment-body-und-0-value').val('');
    $('.comment-collapsed').parents('.ajax-comment-wrapper').find('.proposal-children-comment').hide();
    var hash = window.location.hash;
    if (hash) {
      var cid = hash.substring(hash.indexOf("-")+1);
      $('#comment-wrapper-'+cid).parent('.ajax-comment-wrapper').find('.comment-collapsible').removeClass('comment-collapsed');
      $('#comment-wrapper-'+cid).parent('.ajax-comment-wrapper').find('.proposal-children-comment').show();
      $('#comment-wrapper-'+cid).parent('.ajax-comment-wrapper').find('.comment-count').hide();
      $('#comment-wrapper-'+cid).find('.comment-collapsible').removeClass('comment-collapsed');
      $('#comment-wrapper-'+cid).find('.proposal-children-comment').show();
      $('#comment-wrapper-'+cid).find('.comment-count').hide();
    } else {
      $('.node-type-proposal .ajax-comment-wrapper:first').find('.comment-collapsible').removeClass('comment-collapsed');
      $('.node-type-proposal .ajax-comment-wrapper:first').find('.proposal-children-comment').show();
      $('.node-type-proposal .ajax-comment-wrapper:first').find('.comment-count').hide();
    }
  });

})(jQuery);
