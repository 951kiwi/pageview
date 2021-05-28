function playse(){
    var warning = new Audio('音声/denger/dengerBGM.mp3');
    var voice = new Audio('音声/denger/dengerVOICE.mp3');
    warning.play();
    voice.play();
    navigator.vibrate([200,100,200,100,200,100,200,100,200])
}

$(function() {
    //ページが読み込まれると実行

    //バック不可能
    history.pushState(null,null,null)
    $(window).on('popstate', function(e) {
        if(!e.orininaleevent.state){
            playse();
            history.pushState(null,null,null);
            return;
        }
    })

    $('.modal').modal({dismissible: false})
    $('#alert').modal('open');
    $('#close').click(function(){
        $('#alert').modal('close');
        playse();
    })

    //端末情報取得
    var device = navigator.userAgent.match(/Android:Phone:iPad/);
    if (device == null){
        device = '端末';
    }
    $('#device2').text(device2);
    var device2 = navigator.userAgent.match(/Android:Phone:iPad/);
    if (device2 == null){
        device2 = '端末';
    }
    $('#device2').text(device2);

    //タイマー
    var time = 200;
    $('#timer').text(time + '秒');
    setInterval(function() {
        time--;        
        $('#timer').text(time + '秒');
        if (time <= 0){
            time = 200
        }
    }, 1000);
});
    