//
// Created by azamov on 9/26/2024.
//
#include <iostream>
using namespace std;


string extractC(string s, char c) {
    string str;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            str += c;
        }
        str += s[i];
    }
    return str;
}

int main() {
    string s = "hello c plus plus";

    cout << extractC(s, 'c') << endl;
}
