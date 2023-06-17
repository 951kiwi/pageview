// フォルダ内のテキストファイル一覧を取得する関数
function getFileList() {
    // フォルダのパスを指定します（相対パスまたは絶対パス）
    var folderPath = "programdata";
  
    // XMLHttpRequestオブジェクトを作成します
    var xhr = new XMLHttpRequest();
  
    // フォルダ内のファイル一覧を取得するリクエストを送信します
    xhr.open("GET", folderPath, true);
  
    // レスポンスが返ってきた時の処理
    xhr.onload = function() {
      if (xhr.status === 200) {
        // フォルダ内のファイル一覧を取得します
        var fileList = xhr.responseText.split("\n");
  
        // ファイル一覧を表示します
        var fileListElement = document.getElementById("fileList");
        fileList.forEach(function(file) {
          if (file.endsWith(".txt")) {
            var listItem = document.createElement("li");
            listItem.textContent = file;
            fileListElement.appendChild(listItem);
          }
        });
      }
    };
  
    // リクエストを送信します
    xhr.send();
  }