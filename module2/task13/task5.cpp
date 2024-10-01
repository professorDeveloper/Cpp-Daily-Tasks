//
// Created by azamov on 10/1/2024.
//
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string str = "a+d-f-r+";
    string newStr;

    for (int i = 1; i < str.length(); i += 2) {
        newStr += str[i];
    }

    string temp =newStr;
    reverse(newStr.begin(), newStr.end());

    if (temp == newStr) {
        cout << "PDP" << endl;
    } else {
        cout << "ACADEMY" << endl;
    }
}
