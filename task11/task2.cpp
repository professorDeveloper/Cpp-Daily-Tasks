//
// Created by azamov on 9/11/2024.
//#include <iostream>
#include <iostream>
using namespace std;

int main() {
    for (int i = 11; i <= 88; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    for (int i = 12; i <= 25; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    for (int i = 15; i <= 88; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
    for (int i = 99; i >= 10; i--) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}
