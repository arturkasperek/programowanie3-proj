import React from 'react';
import { Link } from 'react-router';

export default class Enter extends React.Component {
    render () {
        return <div className="enter-component">
            <Link to='login'>
                <button>Login</button>
            </Link>
            <Link to='register'>
                <button>Register</button>
            </Link>
        </div>;
    }
}