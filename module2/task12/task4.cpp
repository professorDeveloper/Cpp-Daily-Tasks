//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;

bool checkUnli (char str) {
    string unli ="aeiouAEIOU";
    return unli.find(str) !=string::npos;
}

int main() {
    string str ="hello world";
    for (int i = 0; i < str.length(); i++) {
        if (checkUnli(str[i])) {
            str.erase(i, 1);
        }
    }
    cout << str << endl;
}