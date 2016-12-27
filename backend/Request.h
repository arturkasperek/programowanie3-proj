#include <string>
#include <iostream>
#include <cstring>
#include "../library/server_http.h"
#include "./Session.h"

typedef SimpleWeb::Server<SimpleWeb::HTTP> HttpServer;

#ifndef REQUEST_H
#define REQUEST_H

using namespace std;

class Request {
private:
    std::shared_ptr<HttpServer::Request> request;
    Session session;
public:
    Request(std::shared_ptr<HttpServer::Request> pRequest) {
        request = pRequest;

        auto cookie = request->header.find("Cookie");
        if(cookie != request->header.end()) {
            session.parseSessionString(request->header.find("Cookie")->second);
        }
    }
};

#endif //REQUEST_H
