//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str = "Hello World";
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    //task2
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'x') {
            str[i] = 'y';
        } else if (str[i] == 'y') {
            str[i] = 'z';
        }
    }
}
