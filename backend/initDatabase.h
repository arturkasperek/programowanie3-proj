#include <string>
#include "./DatabaseController.h"

#ifndef INITDATABASE_H
#define INITDATABASE_H

using namespace std;

void initDatabase(DatabaseController* databaseController) {
    string dbName = "dupa2";
    databaseController->execResultLessQuery("CREATE DATABASE IF NOT EXISTS " + dbName);
    databaseController->execResultLessQuery("use " + dbName);
    databaseController->execResultLessQuery("CREATE TABLE IF NOT EXISTS Users (id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY, login VARCHAR(30) NOT NULL UNIQUE, password VARCHAR(30) NOT NULL, firstname VARCHAR(30) NOT NULL, lastname VARCHAR(30) NOT NULL)");
}
#endif //INITDATABASE_H
