jQuery(document).ready(function() {
    var loc = window.location.pathname.toLowerCase().match(/(\w+)/i);
    switch(loc[0]) {
    case "onedot":
        jQuery('#mainnav #onedot').addClass('active');
        break;
    case "projects":
        jQuery('#mainnav #projects').addClass('active');
        break;
    case "siteindex":
        jQuery('#mainnav #siteindex').addClass('active');
        break;
    case "employee":
        jQuery('#mainnav #employee').addClass('active');
        break;
    case "data":
        jQuery('#mainnav #data').addClass('active');
        break;
    }
});


