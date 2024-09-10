//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 50;
    int i =a;
    while (i <= b) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
        i = i + 1;
    }

    //Task2
    int a2 = 7;
    int b2 = 32;
    int i2=a2;
    while (i2 <= b2) {
        if (i2 % 4 == 0 && i2 % 7 == 0) {
            cout << i2 << endl;
        }
        i2 = i2 + 1;
    }
}
