//
// Created by azamov on 9/18/2024.
//
#include <cmath>
#include <iostream>
using namespace std;

void getNumberToq() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}


void getSqrtNumber(int n) {
    for (int i = 1; i <= n; i++) {
        cout  << i << ": " << sqrt(i) << endl;
    }
}

int main() {
    getNumberToq();
    getSqrtNumber(100);
}