#include "Request.h"
#include "Response.h"

#ifndef ROUTE_H
#define ROUTE_H

using namespace std;

class Route {
public:
    virtual void route(std::string route, std::function<void(std::shared_ptr<Request>, std::shared_ptr<Response>)> callback) = 0;
};
#endif //ROUTE_H
