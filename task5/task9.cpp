//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int x = 2;
    int x2 = x * x; // 1. x^2
    int x3 = x2 * x; // 2. x^3
    int x6 = x3 * x3; // 3. x^6
    int x12 = x6 * x6; // 4. x^12
    cout << x12 * x3 << endl;
    cout << pow(x, 15) << endl; //For check

    return 0;
}
