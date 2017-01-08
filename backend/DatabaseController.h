#include <string>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

using namespace std;

class DatabaseController {
private:
    sql::Statement *stmt;
public:
    DatabaseController(string dbPort, string login, string password) {
        sql::Connection *con;
        sql::Driver *driver;

        driver = get_driver_instance();

        con = driver->connect("tcp://127.0.0.1:" + dbPort, login, password);

        stmt = con->createStatement();
    }

    bool execResultLessQuery(string query) {
        return stmt->execute(query);
    }

    sql::ResultSet* execQuery(string query) {
        return stmt->executeQuery( query );
    }
};
#endif //DATABASECONTROLLER_H
