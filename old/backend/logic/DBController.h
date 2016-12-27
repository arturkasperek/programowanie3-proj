#include <mysql_connection.h>
#include <driver.h>
#include <exception.h>
#include <resultset.h>
#include <statement.h>

#include <string>

using namespace std;

struct Field {
    string name;
    string type;
    string size;
    bool notNull;
};

class DBConnection {
private:
    sql::Connection *con;
public:
    DBConnection() {
        sql::Driver *driver;

        driver = get_driver_instance();

        con = driver->connect("tcp://127.0.0.1:3306", "root", "strangehat");
    }
    sql::Connection* getConnection() {
        return con;
    }
};

class DBController {
private:
    sql::Connection *con;
    sql::Statement *stmt;
public:
    DBController(string dbName, string collectionName) {
        auto dbCon = new DBConnection();
        con = dbCon->getConnection();

        stmt = con->createStatement();
        /*stmt = con->createStatement();
        stmt->execute("CREATE DATABASE IF NOT EXISTS pokerApp");
        con->setSchema("pokerApp");
        stmt->execute("CREATE TABLE IF NOT EXISTS users(id INT)");*/
    }

    void initDatabase(string dbName) {
        stmt->execute("CREATE DATABASE IF NOT EXISTS " + dbName );
        //stmt->execute("CREATE TABLE IF NOT EXISTS users(id INT)");
    }

    void initTable(string tableName, Field* schema) {
        stmt->execute("CREATE TABLE IF NOT EXISTS users(id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY, firstname VARCHAR(30) NOT NULL)");
    }

    void switchToDb(string dbName) {
        con->setSchema(dbName);
    }

    void insert(string key, string value) {
        /*cout << key << value;
        auto document = bsoncxx::builder::stream::document{};
        document << key << value;

        std::vector<bsoncxx::document::value> documents;
        for(int i = 0; i < 100; i++) {
            documents.push_back(
              bsoncxx::builder::stream::document{} << "i" << i << bsoncxx::builder::stream::finalize);
        }
        collectionConnection.insert_many(documents);*/
    }
};