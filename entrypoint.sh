#!/bin/bash
echo 'entrypoint started'
mongod --fork --logpath /var/log/mongod.log
curl localhost:27017
export LD_LIBRARY_PATH=/usr/local/lib
#npm install
npm rebuild node-sass
npm run build-logic
node backend/server/app.js
