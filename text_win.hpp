#ifndef TEXT_HPP
#define TEXT_HPP

#include <string>
#include <vector>
#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

class text {
    public:
        void hackLetter(char ch, int l_delay) {
            for(int i = 0; i <= (int)ch; i++){
                this_thread::sleep_for(chrono::milliseconds(l_delay));
                cout << (char)i << endl;
            }
        }

        void hackText(string txt, int l_delay, int w_delay) {
            string::iterator it = txt.begin();
            string last = "";
            do{
                char ch = *it;
                for(int i = 32; i <= (int)ch; i++){
                    this_thread::sleep_for(chrono::milliseconds(l_delay));
                    cout << last << (char)i << endl;
                }
                this_thread::sleep_for(chrono::milliseconds(w_delay));
                last += ch;
                it++;
            }while(it != txt.end());
        }

        void loadLetter(char ch, int l_delay, int retries){
            for(int i = 0; i <= retries; i++){
                this_thread::sleep_for(chrono::milliseconds(l_delay));
                system("cls");
                cout << "\\" << endl;
                this_thread::sleep_for(chrono::milliseconds(l_delay));
                system("cls");
                cout << "|" << endl;
                this_thread::sleep_for(chrono::milliseconds(l_delay));
                system("cls");
                cout << "/" << endl;
                this_thread::sleep_for(chrono::milliseconds(l_delay));
                system("cls");
                cout << "-" << endl;
            }
            system("cls");
            cout << ch << endl;
        }

        void loadText(string txt, int l_delay, int w_delay, int retries){
            string::iterator it = txt.begin();
            string last = "";
            do{
                char ch = *it;
                for(int i = 0; i <= retries; i++){
                    this_thread::sleep_for(chrono::milliseconds(l_delay));
                    system("cls");
                    cout << last << "\\" << endl;
                    this_thread::sleep_for(chrono::milliseconds(l_delay));
                    system("cls");
                    cout << last << "|" << endl;
                    this_thread::sleep_for(chrono::milliseconds(l_delay));
                    system("cls");
                    cout << last << "/" << endl;
                    this_thread::sleep_for(chrono::milliseconds(l_delay));
                    system("cls");
                    cout << last << "-" << endl;
                }
                this_thread::sleep_for(chrono::milliseconds(w_delay));
                last += ch;
                it++;
            }while(it != txt.end());
        }
};

#endif