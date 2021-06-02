// Discord.jsモジュールを読み込む
const Discord = require('discord.js');

// 新しいDiscordクライアントを作成
const client = new Discord.Client();

// クライアントの準備ができた際に実行されます
// このイベントはログインした後に１度だけ実行します
client.once('ready', () => {
    console.log('準備完了！');
});

//メッセージ内容取得
client.on('message', message => {
    if (message.content === '!pong') {
        // メッセージが送信されたチャンネルへ「」を送り返す。
        message.channel.send('P3');
    }});



// トークンを使ってDiscordにログイン
client.login('ODQ5MjU0MDk2Nzk5MDA2NzYx.YLYfgw.yqsQSaVjCauKQkNrj47g4IERK9E');