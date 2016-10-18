#!/bin/bash
echo 'entrypoint started'
export LD_LIBRARY_PATH=/usr/local/lib
npm install
npm run build-logic
node app.js
