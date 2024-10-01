//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

string replaceAtFirst(string s) {
    string newStr = s.substr(s.length() / 2);
    s.erase(s.length() / 2);
    s.insert(0, newStr);
    return s;
}

int main() {
    string str = "maktab";
    cout << replaceAtFirst(str) << endl;
}
