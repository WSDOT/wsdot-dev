(function($){
  Drupal.behaviors.CrazyEgg = {
    attach: function (context,settings){
	  setTimeout(function(){var a=document.createElement("script");
	  var b=document.getElementsByTagName("script")[0];
	  a.src=document.location.protocol+"//script.crazyegg.com/pages/scripts/0032/9349.js?"+Math.floor(new Date().getTime()/3600000);
	  a.async=true;a.type="text/javascript";b.parentNode.insertBefore(a,b)},1);
	}
  };	
	
  Drupal.behaviors.YouTubePlayer = {
    attach: function (context, settings) {
      var v = document.getElementsByClassName("youtube-player");
      for (var n = 0; n < v.length; n++) {
	    var temp_id = v[n].getElementsByTagName("div")[0].textContent;
	    v[n].setAttribute("data-id", temp_id.trim());
	    v[n].innerHTML = "";
	    temp_id = "";
	    var p = document.createElement("div");
        if (v[n].dataset !== undefined) {
          p.innerHTML = createThumb(v[n].dataset.id);
        } else {
	      p.innerHTML = createThumb(v[n].getAttribute("data-id")); // For IE 10
        }
	    p.onclick = createIframe;
		v[n].appendChild(p);
      }
    }
  };
})(jQuery);

function createThumb(id) {
  return '<img class="youtube-thumb" src="//i.ytimg.com/vi/' + id + '/hqdefault.jpg"><div class="play-button"></div>';
}

function createIframe() {
  var ytPlayers = document.getElementsByClassName("youtube-iframe");
  var i;
  for(i=0;i<ytPlayers.length;i++){
    ytPlayers[i].contentWindow.postMessage('{"event":"command","func":"pauseVideo","args":""}', '*');
  }
  var iframe = document.createElement("iframe");
  var videoId;
  if (this.parentNode.dataset !== undefined) {
    videoId = this.parentNode.dataset.id;
  } else {
    videoId = this.parentNode.getAttribute("data-id"); // For IE 10
  }
  iframe.setAttribute("src", "//www.youtube.com/embed/" + videoId + "?autoplay=1&autohide=2&border=0&wmode=opaque&enablejsapi=1&controls=0&showinfo=0");
  iframe.setAttribute("frameborder", "0");
  iframe.setAttribute("class", "youtube-iframe");
  this.parentNode.replaceChild(iframe, this);
}
