var path = require('path');
var webpack = require('webpack');
console.log(__dirname);
module.exports = {
  context: __dirname,
  entry: [
    'babel-polyfill', 'webpack-hot-middleware/client?path=http://localhost:3002/__webpack_hmr&timeout=20000', './frontend/main.js',
  ],
  output: {
    path: __dirname + '/public',
    filename: 'build/bundle.js',
    publicPath: 'http://localhost:3002/'
  },
  module: {
    loaders: [
      {
        test: /.jsx?$/,
        loader: 'babel-loader',
        exclude: /node_modules/,
        query: {
          presets: ['es2015'],
          plugins: ['transform-decorators-legacy']
        }
      },
      {
        test: /\.scss$/,
        loaders: ["style", "css", 'resolve-url', "sass" ]
      },
      {
        test: /\.css$/,
        loader: "style!css"
      },
      {
        test: /\.(png|jpg|jpeg|gif)$/,
        loader: 'file?name=/build/[name].[ext]'
      }
    ]
  },
  resolve: {
    alias: {vue: 'vue/dist/vue.js'}
  },
  plugins: [
      new webpack.HotModuleReplacementPlugin(),
      new webpack.optimize.OccurenceOrderPlugin(),
      new webpack.NoErrorsPlugin()
  ],
};