#include <string>
#include "../Route.h"
#include "../User/getAllUsers.h"
#include "../User/checkIfUserExists.h"

#ifndef GETALLUSERS_H
#define GETALLUSERS_H
using namespace std;

class GetAllUsers: public Route {
public:
    GetAllUsers() {}
    string getRouteName() {
        return "/getallusers";
    }
    string getRouteMethod() {
        return "GET";
    }
    void route(std::shared_ptr<Request> request, std::shared_ptr<Response> response, DatabaseController* dbController) {
        string login = request->getSessionValue("login");
        string password = request->getSessionValue("password");

        if(checkIfUserExists(login, password, dbController)) {
            response->send(getAllUsers(login, password, dbController));
        } else {
            response->sendErr("not-logged-in");
        }
    }
};
#endif //GETALLUSERS_H
