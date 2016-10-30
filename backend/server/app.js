const express = require('express');
const http = require('http');
const request = require('request');
const app = express();

app.use(express.static('public'));

app.post('/api/register', (req, res) => {

});

app.use('/__webpack_hmr', (req, res) => {
  req.pipe('localhost:3002/__webpack_hmr').pipe(res);
});

app.get('/build.js', (routeReq, routeRes) => {
  http.get({
    hostname: 'localhost',
    port: 3002,
    path: '/build/bundle.js',
    agent: false
  }, (res) => {
    var buildScript = '';

    res.on('data', function (chunk) {
      buildScript += chunk;
    });

    res.on('end', function () {
      routeRes.header("Content-Type", "text/javascript");
      routeRes.send(buildScript);
    });
  });
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