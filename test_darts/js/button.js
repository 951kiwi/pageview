const startbutton = document.getElementById('startbutton');
const settingbutton = document.getElementById('settingbutton');
const scorebutton = document.getElementById('scorebutton');
const nbutton = document.getElementById('nbutton');
const divClick = () => {
  alert('ゲームがスタートされます');
};
const settingClick = () => {
  alert('設定画面に移動します');
};
const nClick = () => {
  alert('？？？がスタートされます');
};
const scoreClick = () => {
  alert('スコアが表示されます');
};
startbutton.addEventListener('click', divClick);
settingbutton.addEventListener('click', settingClick);
nbutton.addEventListener('click', nClick);
scorebutton.addEventListener('click', scoreClick);