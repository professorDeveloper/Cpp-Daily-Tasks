//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int main() {
    string s = "s^&4654sds546554454_)_)";
    int numCount = 0;
    int alphaCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            numCount++;
        }else if (isdigit(s[i])) {
            alphaCount++;
        }
    }
    if (numCount < alphaCount) {
        cout << "raqam" << endl;
    }else {
        cout << "harf" << endl;
    }
}
