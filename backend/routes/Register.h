#include "../Route.h"
#include "../User/User.h"
#include <functional>
#include <string>
#include <iostream>

#ifndef REGISTER_H
#define REGISTER_H

using namespace std;

class Register: public Route {
public:
    Register() {}
    string getRouteName() {
        return "/register";
    }
    string getRouteMethod() {
        return "POST";
    }
    void route(std::shared_ptr<Request> request, std::shared_ptr<Response> response, DatabaseController* dbController) {
        string login = request->getHeader("data-login");
        string password = request->getHeader("data-password");
        string name = request->getHeader("data-name");
        string surname = request->getHeader("data-surname");
        User* user = new User(login, password, name, surname);

        try {
            user->saveUserInDb(dbController);
        } catch (sql::SQLException &e) {
            if(e.getErrorCode() == 1062) { //duplicate login
                response->sendErr("login-exists");
            } else {
                response->sendErr("not-known-sql-error");
            }
        }

        response->send("account-created");
    }
};

#endif //REGISTER_H
