#include <string>
#include "../Route.h"
#include "../User/User.h"

#ifndef LOGOUT_H
#define LOGOUT_H

using namespace std;

class Logout: public Route {
public:
    Logout() {}
    string getRouteName() {
        return "/logout";
    }
    string getRouteMethod() {
        return "GET";
    }
    void route(std::shared_ptr<Request> request, std::shared_ptr<Response> response, DatabaseController* dbController) {
        request->clearSession();
        response->redirect("/");
    }
};

#endif //LOGOUT_H
