//
// Created by azamov on 9/11/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double kg1 = 2400;

    for (double i = 1.1; i <= 2.1; i += 0.1) {
        cout << i << endl;
        cout << i * kg1 << endl;
    }


    int n = 1280;
    //task2
    for (int i = 1; i <= n; i++) {
        cout << sqrt(i) << endl;
    }
}
