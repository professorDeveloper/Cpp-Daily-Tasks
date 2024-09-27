//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

string withoutString(string str, string str2) {
    string s;
    for (int i = 0; i < str.length(); i++) {
        s = str.substr(i, str2.length());
        if(s==str2) {
            str.erase(i, str2.length());
        }
    }
    return str;
}

int main() {
    cout << withoutString("Hello there", "llo") << endl;
}
