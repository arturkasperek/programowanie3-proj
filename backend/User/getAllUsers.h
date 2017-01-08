#include <string>

#ifndef GETALLUSERS_FUNC_H
#define GETALLUSERS_FUNC_H

using namespace std;

string getAllUsers(string login, string password, DatabaseController* dbController) {
    sql::ResultSet * queryResult = dbController->execQuery("select * from Users;");
    string users = "";

    while (queryResult->next()) {
        users += "firstname:" + queryResult->getString("firstname") + ",lastname:" + queryResult->getString("lastname") + ";";
    }
    return users;
}

#endif //GETALLUSERS_FUNC_H
