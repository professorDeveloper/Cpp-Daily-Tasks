//
// Created by azamov on 9/19/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    return c;
}

int powMe(int a, int b) {
    // a= asosiy
    // b= daraja
    int sum =a;
    for (int i = 1; i < b; i++) {
        sum *= a;
    }
    return sum;
}

int main() {
    char c;
    cout << "Enter a char: ";
    cin >> c;
    cout << toLower(c) << endl;
    cout << pow(2, 4) << endl;
    cout << pow(2, 4) << endl;
    cout << powMe(2, 4) << endl;
}
