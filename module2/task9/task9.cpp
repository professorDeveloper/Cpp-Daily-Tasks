//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

bool sameStarChar(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '*') {
            if (str[i - 1] == str[i + 1]) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    string str;
    cin >> str;
    if (sameStarChar(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
