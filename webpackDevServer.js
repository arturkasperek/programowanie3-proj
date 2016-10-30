const express = require('express');
const app = express();
const webpack = require('webpack');
const config = require('./webpack.config');

const compiler = webpack(config);

app.use(express.static('public'));

app.use(require('webpack-dev-middleware')(compiler, {
  noInfo: true, publicPath: ''
}));

app.use(require('webpack-hot-middleware')(compiler, {
  log: console.log, path: '/__webpack_hmr', heartbeat: 10 * 1000
}));

app.listen(3002, function () {
  console.log('Webpack dev server listen on 3002');
});