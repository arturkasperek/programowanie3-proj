#include "../Route.h"
#include "../User/User.h"
#include "../User/checkIfUserExists.h"
#include <functional>
#include <string>
#include <iostream>

#ifndef LOGIN_H
#define LOGIN_H

using namespace std;

class Login: public Route {
public:
    Login() {}
    string getRouteName() {
        return "/login";
    }
    string getRouteMethod() {
        return "POST";
    }
    void route(std::shared_ptr<Request> request, std::shared_ptr<Response> response, DatabaseController* dbController) {
        string login = request->getHeader("data-login");
        string password = request->getHeader("data-password");

        if(checkIfUserExists(login, password, dbController)) {
            request->setSessionValue("login", login);
            request->setSessionValue("password", password);
            response->send("user-logged-in");
        } else {
            response->sendErr("bad-credentials");
        }
    }
};

#endif //LOGIN_H
