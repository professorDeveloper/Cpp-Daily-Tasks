//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    int kg1 = 4000;
    for (int i = 13; i <= 60; i++) {
        cout << i << " kg Shakar :" << i * kg1 << endl;
    }

    //task2
    int n = 244;
    for (int i = 35; i <= n; i++) {
        if (i % 3 != 0) {
            cout << i << endl;
        }
    }
}
