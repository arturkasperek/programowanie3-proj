#include <string>
#include "../DatabaseController.h"
#ifndef USER_H
#define USER_H

using namespace std;

class User {
private:
    string login;
    string password;
    string name;
    string surname;
public:
    User(string login, string password, string name, string surname) {
        this->login = login;
        this->password = password;
        this->name = name;
        this->surname = surname;
    }

    void saveUserInDb(DatabaseController* databaseController) {
        databaseController->execResultLessQuery("insert into Users (login,password,firstname,lastname) values (\""+ login + "\",\""+ password +"\",\""+ name +"\",\""+ surname +"\");");
    }
};
#endif //USER_H
