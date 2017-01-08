import React from 'react';
import {render} from 'react-dom';
import { Router, Route, Link, browserHistory } from 'react-router';
import Dashboard from './components/Dashboard.jsx';
import Login from './components/Login.jsx';
import Register from './components/Register.jsx';
import Enter from './components/Enter.jsx';
import auth from './auth.jsx';
require("babel-polyfill");
require('./styles/index.scss');

const checkIfLoggedIn = (nextState, replace, callback) => {
    var loggedIn = auth.getLoggedIn();
    console.log('321');

    if(loggedIn == undefined) {
        auth.checkIfLoggedIn().then(loggedIn => {
            if(!loggedIn) {
                replace(`/enter`);
            }
            callback();
        });
    } else {
        if(!loggedIn) {
            replace(`/enter`);
        }
        callback();
    }
};

render((
    <div className="container">
        <a href="/">
            <img className="app-image" src="/people.png"></img>
        </a>
        <div className="app-title">
            <h3>Facebook</h3>
            <span>Dwa zero</span>
        </div>
        <Router history={browserHistory}>
            <Route path="/" component={Dashboard} onEnter={checkIfLoggedIn} />
            <Route path="enter" component={Enter}/>
            <Route path="login" component={Login}/>
            <Route path="register" component={Register} />
        </Router>
    </div>
), document.getElementById('app'));