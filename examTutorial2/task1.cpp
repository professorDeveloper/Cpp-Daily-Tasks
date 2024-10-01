//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;

    if (n % 2 == 0) {
        cout << sqrt(n) << endl;
    } else {
        cout << pow(n, 2) << endl;
    }
}
