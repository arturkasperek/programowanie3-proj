#include "../Route.h"
#include <functional>

#ifndef REGISTER_H
#define REGISTER_H

using namespace std;

class Register: public Route {
    void route(std::string route, std::function<void(std::shared_ptr<Request>, std::shared_ptr<Response>)> callback) {

    }
};

#endif //REGISTER_H
