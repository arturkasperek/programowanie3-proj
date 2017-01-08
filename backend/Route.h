#include <string>
#include "Request.h"
#include "Response.h"
#include "DatabaseController.h"

#ifndef ROUTE_H
#define ROUTE_H

using namespace std;

class Route {
public:
    virtual string getRouteName() = 0;
    virtual string getRouteMethod() = 0;
    virtual void route(std::shared_ptr<Request> request, std::shared_ptr<Response> response, DatabaseController* dbController) = 0;
};
#endif //ROUTE_H
