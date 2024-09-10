//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int sugarKg = 7000;
    int i = 3;
    while (i <= 60) {
        cout << i << "kg Sugar :" << sugarKg * i << endl;
        ++i;
    }

    //Task2
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    int i2 = 23;
    while (i2 <= n) {
        if (i2 % 3 != 0) {
            cout << i2 << endl;
        }
    }

    return 0;
}
