#include <string>
#include "../Route.h"
#include "../User/checkIfUserExists.h"
#include "../User/getUserData.h"

#ifndef GETUSERDATA_H
#define GETUSERDATA_H

using namespace std;

class GetUserData: public Route {
public:
    GetUserData() {}
    string getRouteName() {
        return "/getuserdata";
    }
    string getRouteMethod() {
        return "GET";
    }
    void route(std::shared_ptr<Request> request, std::shared_ptr<Response> response, DatabaseController* dbController) {
        string login = request->getSessionValue("login");
        string password = request->getSessionValue("password");

        if(checkIfUserExists(login, password, dbController)) {
            response->send(getUserData(login, password, dbController));
        } else {
            response->sendErr("not-logged-in");
        }
    }
};

#endif //GETUSERDATA_H
