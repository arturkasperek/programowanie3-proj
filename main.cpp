#include "backend/Server.h"

#include <iostream>
#include <string>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;

int main() {
    //HttpServer server(8080, 1);
    auto server = new Server();

    server->get("/test", []( std::shared_ptr<Request> request, std::shared_ptr<Response> response ) {
        response->openFile("public/index.html");
    });

    /*server->get("/test", [](std::shared_ptr<HttpResponse> response, std::shared_ptr<HttpRequest> request){
        string currencyJSONString = "No to witam ;)";

        *response << "HTTP/1.1 200 OK\r\nContent-Length: " << currencyJSONString.length() << "\r\n\r\n" << currencyJSONString;
    });*/

    sql::Connection *con;
    sql::Driver *driver;

    driver = get_driver_instance();

    con = driver->connect("tcp://127.0.0.1:3306", "root", "kolarz0");
    sql::Statement *stmt;

    stmt = con->createStatement();

    stmt->execute("CREATE DATABASE IF NOT EXISTS dupa" );

    /*server.resource["^/string$"]["GET"]=[](shared_ptr<HttpServer::Response> response, shared_ptr<HttpServer::Request> request) {
        //Retrieve string:
        string content= "hej :)";

        cout << request->header.find("Cookie")->second << endl;

        cout << "321232" << endl;
        *response << "HTTP/1.1 200 OK\r\n"
                  << "Set-Cookie: id=a3fWa; Expires=Wed, 21 Oct 2017 07:28:00 GMT\r\n"
                  << "Content-Length: " << content.length() << "\r\n\r\n" << content;
    };

    thread server_thread([&server](){
        server.start();
    });

    this_thread::sleep_for(chrono::seconds(1));

    server_thread.join();*/

    server->serveStatic("public");
    server->start();
    std::cout << "Hello, World dupa!" << std::endl;
    return 0;
}