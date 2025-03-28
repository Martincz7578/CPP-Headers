#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class utility {
    public:
        vector<string> splitString(const string& str, char regex) {
            vector<string> tokens;
            string token;
            for (char ch : str) {
                if (ch == regex) {
                    if (!token.empty()) {
                        tokens.push_back(token);
                        token.clear();
                    }
                } else {
                    token += ch;
                }
            }
            if (!token.empty()) {
                tokens.push_back(token);
            }
            return tokens;
        }

        int random(int min, int max) {
            return (rand() % max) + min - 1;
        }
};

#endif