#include <string>
#include <iostream>
#include <cstring>
#include <functional>

#include "../library/server_http.h"
#include "./Request.h"
#include "GetFile.h"

typedef SimpleWeb::Server<SimpleWeb::HTTP> HttpServer;

#ifndef RESPONSE_H
#define RESPONSE_H

using namespace std;

class Response {
private:
    std::shared_ptr<HttpServer::Response> response;
    std::function<string()> callbackOnReqEnd;
    std::shared_ptr<Request> request;
public:
    Response(std::shared_ptr<HttpServer::Response> pResponse, std::function<string()> pCallbackOnReqEnd, std::shared_ptr<Request> pRequest) {
        response = pResponse;
        callbackOnReqEnd = pCallbackOnReqEnd;
        request = pRequest;
    }

    void send(string content) {
        *response << "HTTP/1.1 200 OK\r\n"
                  << "Set-Cookie: " << request->getSessionSetCookie()
                  << "Content-Length: " << content.length() << "\r\n\r\n" << content;
    }

    void sendErr(string content) {
        *response << "HTTP/1.1 400 OK\r\n"
                  << "Set-Cookie: " << request->getSessionSetCookie()
                  << "Content-Length: " << content.length() << "\r\n\r\n" << content;
    }

    void redirect(string redirectPath) {
        *response << "HTTP/1.1 302 OK\r\n"
                  << "Set-Cookie: " << request->getSessionSetCookie()
                  << "Location: " + redirectPath << "\r\n"
                  << "Content-Length: 0\r\n\r\n";
    }

    void openFile(string fileName) {
        callbackOnReqEnd();
        try {
            string content = GetFile(fileName);
            *response << "HTTP/1.1 200 OK\r\n"
                      << "Content-Length: " << content.length() << "\r\n\r\n" << content;
        } catch(const char* err) {
            *response << "HTTP/1.1 404 Bad Request\r\nContent-Length: " << strlen(err) << "\r\n\r\n" << err;
        }
    }
};

#endif //RESPONSE_H