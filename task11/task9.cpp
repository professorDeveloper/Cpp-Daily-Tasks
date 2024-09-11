//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int getCount(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a = 2;

    int count = 0;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "Tub Son" << endl;
    } else {
        cout << "Tub son Emas" << endl;
    }

    //task2

    int b = 37;
    int a2 = 2;
    if (getCount(a2) == 2 && getCount(b) == 2) {
        cout << a2 + b << endl;
    } else {
        cout << a2 * b << endl;
    }

    return 0;
}
