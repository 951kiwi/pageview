//画面サイズの取得
getScreenSize();
//ウィンドウサイズの取得
getWindowSize();

//画面サイズを取得する
function getScreenSize() {
	var s = "横幅 = " + window.parent.screen.width + " / 高さ = " + window.parent.screen.height;
	document.getElementById("ScrSize").innerHTML = s;
}

//ウィンドウサイズを取得する
function getWindowSize() {
	var sW,sH,s;
	sW = window.innerWidth;
	sH = window.innerHeight;

	s = "横幅 = " + sW + " / 高さ = " + sH;
 
	document.getElementById("WinSize").innerHTML = s;
}
</script>