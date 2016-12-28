#include "GetFile.h"
#include <iostream>
#include <regex>
#include <sstream>

#ifndef ENV_H
#define ENV_H

using namespace std;

class Env {
private:
    std::map<string, string> envMap;
public:
    Env() {
        string envString = GetFile(".env");
        std::stringstream ss(envString);
        string pair;

        while(std::getline(ss, pair,'\n')){
            if(pair.length()) {
                std::smatch matches;
                regex_search( pair, matches, std::regex("(.*?)=(.*?)$") );

                envMap[matches.str(1)] = matches.str(2);
            }
        }
    }

    string get(string key) {
        return envMap[key];
    }
};

#endif //ENV_H
