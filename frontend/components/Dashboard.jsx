import React from 'react';

export default class Dashboard extends React.Component {
    constructor() {
        super();
        this.state = {
            users: []
        }

        this.getAllUsers();
    }

    logout() {
        fetch('/logout', {
            credentials: 'same-origin',
            method: 'GET'
        }).then((response) => {
            this.props.router.push('enter');
        });
    }

    getAllUsers() {
        fetch('/getallusers', {
            credentials: 'same-origin',
            method: 'GET'
        }).then((response) => {
            return response.text();
        }).then(response => {
            const users = response.split(';').filter(con => con).map(user => {
                var splittedUser = user.split(',');

                return {
                    [splittedUser[0].split(':')[0]]: splittedUser[0].split(':')[1],
                    [splittedUser[1].split(':')[0]]: splittedUser[1].split(':')[1],
                };
            });
            this.setState({
                ...this.state,
                users
            });
        });
    }

    render () {
        return <div className="dashboard-component">
            <div className="logout">
                <button onClick={this.logout.bind(this)}>Logout</button>
            </div>
            <div className="users">
                {this.state.users.map((user, index) => {
                    return <div className="user" key={index}>
                        <img src="/user.png"></img>
                        <span>Name: {user.firstname}</span><br/>
                        <span>Surname: {user.lastname}</span>
                    </div>
                })}
            </div>
        </div>;
    }
}