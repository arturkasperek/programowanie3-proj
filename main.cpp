#include "backend/Server.h"
#include "backend/routes/Register.h"
#include "backend/routes/Login.h"
#include "backend/routes/Logout.h"
#include "backend/routes/GetUserData.h"
#include "backend/routes/GetAllUsers.h"
#include "backend/Env.h"
#include "backend/DatabaseController.h"
#include "backend/initDatabase.h"
#include "backend/Route.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    vector<Route *> routes;
    DatabaseController* databaseController;
    Env* env;

    routes.push_back(new Login());
    routes.push_back(new Register());
    routes.push_back(new Logout());
    routes.push_back(new GetUserData());
    routes.push_back(new GetAllUsers());

    auto server = new Server();

    try {
        env = new Env();
    } catch (string err) {
        cout << "We can't init env of app" << endl;
        cout << err << endl;
        return 1;
    }

    databaseController = new DatabaseController(env->get("DB_PORT"), env->get("DB_LOGIN"), env->get("DB_PASSWORD"));
    initDatabase(databaseController);

    for (Route * route : routes) // access by reference to avoid copying
    {
        server->addRoute(route->getRouteName(), route->getRouteMethod(), [route, &databaseController]( std::shared_ptr<Request> request, std::shared_ptr<Response> response ) {
            route->route(request, response, databaseController);
        });
    }

    server->addRoute("/test", "GET", []( std::shared_ptr<Request> request, std::shared_ptr<Response> response ) {
        response->openFile("public/index.html");
    });

    server->serveStatic("public");
    server->start();

    return 0;
}