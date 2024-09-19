//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;

bool isUpperCase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    }
    return ch;
}
int main () {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << toUpperCase(ch);
    return 0;
}