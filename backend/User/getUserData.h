#include <string>

#ifndef GETUSERDATA_FUNC_H
#define GETUSERDATA_FUNC_H

using namespace std;

string getUserData(string login, string password, DatabaseController* dbController) {
    sql::ResultSet * queryResult = dbController->execQuery("select * from Users where login=\'"+ login +"\' and password=\'"+ password +"\';");

    queryResult->next();
    return "login:" + queryResult->getString("login") + ",password:" + queryResult->getString("password") + ",firstname:" + queryResult->getString("firstname") + ",lastname:" + queryResult->getString("lastname");
}

#endif //GETUSERDATA_FUNC_H
