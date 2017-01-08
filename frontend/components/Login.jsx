import React from 'react';
import auth from '../auth.jsx';

export default class Login extends React.Component {
    constructor() {
        super();
        this.state = {
            login: '',
            password: '',
            correctData: true,
        };
    }

    login() {
        fetch('/login', {
            credentials: 'same-origin',
            method: 'POST',
            headers: {
                'data-login': this.state.login,
                'data-password': this.state.password
            }
        }).then((response) => {
            if(response.status == 400) {
                this.setState({...this.state,
                    correctData: false
                });
            } else if(response.status == 200) {
                auth.setLoggedIn(true);
                this.props.router.push('/');
            } else {
                console.log('diffrent error');
            }
        });
    }

    updateField (newValue, fieldName) {
        this.setState({...this.state,
            [fieldName]: newValue
        });
    }

    render () {
        return <div className="login-component">
            <div className="login-form">
                <div className="form-group">
                    <label htmlFor="login">Login </label>
                    <input value={this.state.login} onChange={(e) => this.updateField(e.target.value, 'login')} type="text" id="login" />
                </div>
                <div className="form-group">
                    <label htmlFor="password">Password </label>
                    <input value={this.state.password} onChange={(e) => this.updateField(e.target.value, 'password')} type="password" id="password" /> <br />
                </div>
                <div className="form-group">
                    { !this.state.correctData ? <span className="form-err-message">Not correct data!</span> : ''}
                </div>
                <div className="submit">
                    <button onClick={this.login.bind(this)}>Login</button>
                </div>
            </div>
        </div>;
    }
}