const fs = require('fs');
const path = require('path');

const folderPath = './programdata';

// フォルダ内のファイル一覧を取得
const files = fs.readdirSync(folderPath);

// テキストファイルのみをフィルタリング
const textFiles = files.filter(file => path.extname(file).toLowerCase() === '.txt');

// ファイル一覧をJSON形式で保存
fs.writeFileSync('filelist.json', JSON.stringify(textFiles));



// フォルダ内のテキストファイル一覧を取得する関数
function getFileList() {
    // フォルダのパスを指定します（相対パスまたは絶対パス）
    fetch('filelist.json')
      .then(response => response.json())
      .then(data => {
        var fileListElement = document.getElementById('fileList');
        data.forEach(file => {
          var listItem = document.createElement('li');
          listItem.textContent = file;
          fileListElement.appendChild(listItem);
        });
      })
      .catch(error => console.error('Error:', error));

  }