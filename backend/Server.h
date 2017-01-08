#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>
#include <regex>
#include <boost/filesystem.hpp>
#include <functional>

#include "../library/server_http.h"
#include "./Response.h"
#include "./Request.h"
#include "./GetFile.h"

typedef SimpleWeb::Server<SimpleWeb::HTTP> HttpServer;
typedef HttpServer::Response HttpResponse;
typedef HttpServer::Request HttpRequest;

using namespace std;
using namespace boost;

class Server {
private:
    HttpServer * server;
public:
    Server() {
        server = new HttpServer(8080);
    }
    void start() {
        thread server_thread([&server = server]() {
            server->start();
        });

        this_thread::sleep_for(chrono::seconds(1));

        server_thread.join();
    }

    void serveStatic(std::string pathToStatic) {
        std::regex indexRequestRegex("/$");

        server->default_resource["GET"] = [pathToStatic, indexRequestRegex](std::shared_ptr<HttpResponse> response, std::shared_ptr<HttpRequest> request) {
            auto requestPath = request->path;

            if (std::regex_match(requestPath, indexRequestRegex)) {
                requestPath += "index.html";
            }

            auto resourceUrl = pathToStatic + requestPath;

            try {
                string fileContent = GetFile(resourceUrl);
                *response << "HTTP/1.1 200 OK\r\nContent-Length: " << fileContent.length() << "\r\n\r\n" << fileContent;
            } catch (string err) {
                try {
                    string indexFile = GetFile(pathToStatic + "/index.html");
                    *response << "HTTP/1.1 200 OK\r\nContent-Length: " << indexFile.length() << "\r\n\r\n" << indexFile;
                } catch(string err2) {
                    string content = "Could not open path " + request->path;
                    *response << "HTTP/1.1 400 Bad Request\r\nContent-Length: " << content.length() << "\r\n\r\n" << content;
                }
            }
        };
    }

    void addRoute(std::string route, std::string methodName, std::function<void(std::shared_ptr<Request>, std::shared_ptr<Response>)> callback) {
        server->resource["^" + route + "$"][methodName] = [callback](std::shared_ptr<HttpResponse> httpResponse, std::shared_ptr<HttpRequest> httpRequest) {
            std::shared_ptr<Request> request = std::make_shared<Request>(httpRequest);
            std::shared_ptr<Response> response = std::make_shared<Response>(httpResponse, []() {
                cout << "Witam was ;)" << endl;
                return "dupa test";
            }, request);

            callback(request, response);
        };
    }
};