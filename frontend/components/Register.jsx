import React from 'react';

export default class Register extends React.Component {
    constructor() {
        super();
        this.state = {
            login: '',
            name: '',
            surname: '',
            password: '',
            correctData: true,
        };
    }

    register() {
        fetch('/register', {
            credentials: 'same-origin',
            method: 'POST',
            headers: {
                'data-login': this.state.login,
                'data-password': this.state.password,
                'data-name': this.state.name,
                'data-surname': this.state.surname
            }
        }).then((response) => {
            if(response.status == 400) {
                this.setState({...this.state,
                    correctData: false
                });
            } else if(response.status == 200) {
                this.props.router.push('login');
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
        return <div className="register-component">
            <div className="register-form">
                <div className="form-group">
                    <label htmlFor="login">Login </label>
                    <input value={this.state.login} onChange={(e) => this.updateField(e.target.value, 'login')} type="text" id="login" />
                </div>
                <div className="form-group">
                    <label htmlFor="name">Name </label>
                    <input value={this.state.name} onChange={(e) => this.updateField(e.target.value, 'name')} type="text" id="name" />
                </div>
                <div className="form-group">
                    <label htmlFor="surname">Surname </label>
                    <input value={this.state.surname} onChange={(e) => this.updateField(e.target.value, 'surname')} type="text" id="surname" />
                </div>
                <div className="form-group">
                    <label htmlFor="password">Password </label>
                    <input value={this.state.password} onChange={(e) => this.updateField(e.target.value, 'password')} type="password" id="password" /> <br />
                </div>
                <div className="form-group">
                    { !this.state.correctData ? <span className="form-err-message">Not correct data!</span> : ''}
                </div>
                <div className="submit">
                    <button onClick={this.register.bind(this)}>Register</button>
                </div>
            </div>
        </div>;
    }
}