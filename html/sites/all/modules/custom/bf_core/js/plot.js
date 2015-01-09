(function ($) {

    /**
     * Attach handlers to evaluate the strength of any password fields and to check
     * that its confirmation is correct.
     */
    Drupal.behaviors.renderPlot = {
        attach: function (context, settings) {
            if (settings.advpoll_nid && settings.advpoll_nid.nid) {
                var exit=false;
                var plot = $('#node-'+settings.advpoll_nid.nid + ' #plot-'+settings.advpoll_nid.nid);
                if ($('#node-'+settings.advpoll_nid.nid + ' input[name="op"]').val()=='Vote') {
                    if (plot.length) {
                        plot.remove();
                        exit = true;
                    }
                }
                    if (exit) return;
                var prefix = Drupal.settings.basePath;
                if (prefix=='/') {
                    prefix='';
                }
                if (plot.length) {
                    plot.attr('src',plot.attr('src'));
                    settings.advpoll_nid.reload = false;

                } else if ($('#node-'+settings.advpoll_nid.nid + ' input[name="op"]').val()!='Vote') {
                    $('#node-'+settings.advpoll_nid.nid).append('<img class="plot" id="plot-'+settings.advpoll_nid.nid+'" src="'+prefix+'/pollpic/'+settings.advpoll_nid.nid+'/100/100" />')
                }
            } else if (settings.advpoll_deletenid && settings.advpoll_deletenid.nid) {
                var plot = $('#node-'+settings.advpoll_deletenid.nid + ' #plot-'+settings.advpoll_deletenid.nid);
                if (plot.length) {
                    plot.remove();
                }
            }
        }
    };
})(jQuery);
