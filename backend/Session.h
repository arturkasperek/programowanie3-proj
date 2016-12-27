#include <string>
#include <sstream>
#include <vector>
#include <regex>
#include <iostream>
#include <map>

#ifndef SESSION_H
#define SESSION_H

using namespace std;

class Session {
private:
    std::map<string, string> session;
public:
    void parseSessionString(string cookieStr) {
        string sessionStr;
        std::smatch matches;

        regex_search ( cookieStr, matches, std::regex("session=(.*?)(;|$)") );
        sessionStr = matches.str(1);
        if(sessionStr.length()) {
            string pair;
            istringstream pairsStream(sessionStr);

            while (getline(pairsStream, pair, ',')) {
                std::smatch pairMatches;
                regex_search ( pair, pairMatches, std::regex("(.*?):(.*?)$") );
                session[pairMatches.str(1)] = pairMatches.str(2);
                cout << "haaa, " << pairMatches.str(1) << " " << pairMatches.str(2) << endl;
            }
        }

        cout << "Nie okej" << endl;
    }
};

#endif //SESSION_H
