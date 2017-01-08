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
            session.parseSessionString(cookie->second);
        }
    }

    string getHeader(string headerName) {
        auto header = request->header.find(headerName);
        if(header != request->header.end()) {
            return header->second;
        } else {
            return "";
        }
    }

    string getSessionValue(string key) {
        return  session.getValue(key);
    }

    string getSessionSetCookie() {
        return session.getSessionSetCookie();
    }

    void clearSession() {
        session.clearSession();
    }

    void setSessionValue(string key, string value) {
        session.setValue(key, value);
    }
};

#endif //REQUEST_H
