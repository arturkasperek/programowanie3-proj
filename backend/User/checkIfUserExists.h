#include <string>

#ifndef CHECKIFUSEREXISTS_H
#define CHECKIFUSEREXISTS_H

using namespace std;

bool checkIfUserExists(string login, string password, DatabaseController* dbController) {
    sql::ResultSet * queryResult = dbController->execQuery("select * from Users where login=\'"+ login +"\' and password=\'"+ password +"\';");

    if(queryResult->next()) {
        return true;
    } else {
        return false;
    }
}

#endif //CHECKIFUSEREXISTS_H
