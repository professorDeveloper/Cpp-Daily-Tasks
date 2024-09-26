//
// Created by azamov on 9/26/2024.
//
#include <iostream>
using namespace std;

string deFront(string str) {
    if (str[0] == 'a' || str[1] == 'b') {
        return str;
    }

    return str.substr(2 , str.length());
}

int main() {
    cout << deFront("hello") << endl;
    cout << deFront("java") << endl;
    cout << deFront("away") << endl;
}
