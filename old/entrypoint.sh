#!/bin/bash
echo 'entrypoint started'
/etc/init.d/mysql restart
curl localhost:27017
export LD_LIBRARY_PATH=/usr/local/lib
npm install
npm rebuild node-sass
npm run dev