//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int i = 10;
    while (i <= 50) {
        if (i % 2 != 0) {
            cout << "Toq Sonlar" << i << endl;
        }
        ++i;
    }
    int n = 120;
    while (n <= 250) {
        if (n % 2 == 0) {
            cout << "Juft Sonlar" << n << endl;
        }
        ++n;
    }

    int a = 100;
    while (a >= 50) {
        if (a % 2 != 0) {
            cout << "Toq Sonlar" << a << endl;
        }
        --a;
    }

    int b = 80;
    while (b >= 20) {
        if (b % 2 == 0) {
            cout << "Juft Sonlar" << b << endl;
        }
        --b;
    }
}
