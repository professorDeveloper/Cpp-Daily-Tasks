//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 24;
    for (int i = 1; i <= a; i++) {
        cout << i << " " << endl;
    }

    int b = 43;
    for (int i = 1; i <= b; i++) {
        cout << a << " " << endl;
    }
    for (int i = 1; i <= a; i++) {
        cout << b << " " << endl;
    }
}
