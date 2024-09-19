//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

int main() {
    char c;
    cout << "Enter a char:";
    cin >> c;
    cout << isDigit(c) << endl;
    cout << isLower(c) << endl;

}
