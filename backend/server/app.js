const express = require('express');
const app = express();
const webpack = require('webpack');
const config = require('../../webpack.config');

const compiler = webpack(config);

app.use(express.static('public'));

app.use(require('webpack-dev-middleware')(compiler, {
  noInfo: true, publicPath: ''
}));

app.use(require('webpack-hot-middleware')(compiler, {
  log: console.log, path: '/__webpack_hmr', heartbeat: 10 * 1000
}));

app.post('/api/register', (req, res) => {

});

app.use('*', (req, res) => {
  console.log(__dirname);
  res.sendFile('public/index.html', { root: __dirname + '/../..' });
});
//const addon = require('./build/Release/addon');

//console.log(addon.hello());
app.listen(3000, function () {
  console.log('Example app listening on port 3000!');
});