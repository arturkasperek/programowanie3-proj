#include <string>
#include <fstream>

using namespace std;

#ifndef GETFILE_H
#define GETFILE_H

string GetFile(string fileName) {
    ifstream resourceStream(fileName.c_str());

    cout << "no ti " << fileName << endl;
    if (resourceStream.good()) {
        std::stringstream buffer;
        string content;

        buffer << resourceStream.rdbuf();
        content = buffer.str();
        return content;
    }
    else {
        throw "File not exists";
    }
}

#endif //GETFILE_H
