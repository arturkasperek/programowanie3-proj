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

    string getSessionSetCookie() {
        string sessionSetCookie = "session=";

        for(auto sessionPair : session) {
            sessionSetCookie += sessionPair.first + ":" + sessionPair.second + ",";
        }

        return sessionSetCookie + "; Expires=Wed, 21 Oct 2017 07:28:00 GMT\r\n";
    }

    string getValue(string key) {
        auto value = session.find(key);
        if(value != session.end()) {
            return value->second;
        } else {
            return "";
        }
    }

    void setValue(string key, string value) {
        session[key] = value;
    }

    void clearSession() {
        session.clear();
    }
};

#endif //SESSION_H
