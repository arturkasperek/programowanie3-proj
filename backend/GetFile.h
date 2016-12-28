#include <string>
#include <fstream>

using namespace std;

#ifndef GETFILE_H
#define GETFILE_H

string GetFile(string fileName) {
    ifstream resourceStream(fileName.c_str());

    if (resourceStream.good()) {
        std::stringstream buffer;
        string content;

        buffer << resourceStream.rdbuf();
        content = buffer.str();
        return content;
    }
    else {
        throw "'" + fileName + "' file not exists";
    }
}

#endif //GETFILE_H
