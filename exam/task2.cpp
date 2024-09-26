//
// Created by azamov on 9/25/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d;
    a = 24.4;
    b = 32.1;
    c = 32.6;
    d = 32.9;

    int min = min(a, min(b, min(c, d)));
    int max = max(a, max(b, max(c, d)));

    cout << min + max << endl;
}
