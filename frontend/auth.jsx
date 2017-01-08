class Auth {
    setLoggedIn(newVal) {
        this.loggedIn = newVal;
    }

    getLoggedIn() {
        return this.loggedIn;
    }

    checkIfLoggedIn() {
        return new Promise(resolve => {
            fetch('/getuserdata', {
                credentials: 'same-origin',
                method: 'GET'
            }).then((response) => {
                if(response.status == 400) {
                    this.loggedIn = false;
                    resolve(false);
                } else if(response.status == 200) {
                    this.loggedIn = true;
                    resolve(true);
                }
            });
        });
    }
};

export default new Auth();