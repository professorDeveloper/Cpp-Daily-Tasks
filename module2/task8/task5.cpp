//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;

string theEnd(string str, bool b) {
    string out;
    if (b) {
        out = str[0];
    } else {
        out = str[str.length()-1];
    }
    return out;
}

int main() {
    string str;
    cout << theEnd("helloi",true);
}
