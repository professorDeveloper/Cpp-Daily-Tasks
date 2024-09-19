//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int abs(int a) {
    if (a < 0)
        return a *= -1;
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << abs(-24);
    cout << max(a, b) << endl;
    return 0;
}
