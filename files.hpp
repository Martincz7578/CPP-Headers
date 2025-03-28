#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "utility.hpp"

using namespace std;

class files{
    public:
        string read_line(int targetLine, int targetWord, char* fileName){
            ifstream file;

            file.open(fileName);

            string line;

            for(int i = 1; i < targetLine; i++){
                getline(file, line);
            }

            getline(file, line);

            string word;

            utility util;

            vector<string> tokens = util.splitString(line, ' ');
            file.close();

            if (targetWord > 0 && targetWord <= tokens.size()) {
                word = tokens[targetWord - 1];
            } else {
                word = "";
            }

            return word;
        }

        void write(char* fileName, string entry){
            ofstream file;

            file.open(fileName, ios::app);

            file << entry << endl;

            file.close();
        }

        void writeInt(char* fileName, float entry){
            ofstream file;

            file.open(fileName, ios::app);

            file << entry << endl;

            file.close();
        }
};

#endif