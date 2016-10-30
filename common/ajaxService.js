export default {
  get: (url) => new Promise((resolve, reject) => $http.get(url).then(resolve, reject).catch(reject)),
  post: url => {
    console.log(url);
  }
}