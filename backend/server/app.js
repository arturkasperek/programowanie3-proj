const express = require('express');
const app = express();

app.use(express.static('public'));

app.use('*', (req, res) => {
  console.log(__dirname);
  res.sendFile('public/index.html', { root: __dirname + '/../..' });
});

//const addon = require('./build/Release/addon');

//console.log(addon.hello());
app.listen(3000, function () {
  console.log('Example app listening on port 3000!');
});