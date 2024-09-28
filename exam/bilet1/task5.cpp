//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "C:";
    cin >> c;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            cout << i << endl;
        }
    }
}
