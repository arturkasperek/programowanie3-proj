const express = require('express');
const app = express();
var SegfaultHandler = require('segfault-handler');

SegfaultHandler.registerHandler("crash.log");

app.use(express.static('public'));

app.use('*', (req, res) => {
  console.log(__dirname);
  res.sendFile('public/index.html', { root: __dirname + '/../..' });
});

const addon = require('../../build/Debug/addon.node');

//console.log(addon.hello());
console.log(addon.hello());
app.listen(3000, function () {
  console.log('Example app listening on port 3000!');
});