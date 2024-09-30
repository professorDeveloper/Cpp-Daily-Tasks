//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;

string checkAndReplaceCpp(string str, const string &findSTr) {
    string tempStr;
    string insertStr="is c++ powerful? ";
    for (int i = 0; i < str.length(); i++) {
        tempStr = str.substr(i, findSTr.length());
        if (tempStr == findSTr) {
            str.insert(i, insertStr);
            i+=insertStr.length();
        }
    }
    return str;
}

int main() {
    string str =" Hello c++ World";
    cout << checkAndReplaceCpp(str, "c++");
}
