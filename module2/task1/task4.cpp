//
// Created by azamov on 9/16/2024.
//
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    char lastC = s[s.length() - 2];
    s[s.length() - 2] = s[s.length() - 1];
    s[s.length() - 1] = lastC;

    //
    cout << isalpha(s[0]) ? "PDP" : "ACADEMY" << endl;


    //task3
    cout << isdigit(s[0]) ? "PDP" : "ACADEMY" << endl;
}
