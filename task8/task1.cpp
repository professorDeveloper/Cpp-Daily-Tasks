//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a number:";
    cin >> a;
    cout << "Enter a number:";
    cin >> b;
    cout << "Enter a number:";
    cin >> c;
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }

    cout << max << endl;

    //task2

    if (a < b && b < c) {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    } else if (b < a && a < c) {
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
    } else if (c < a && a < b) {
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
    } else if (c < b && b < a) {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl;
    } else if (a < c && c < b) {
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;
    }

    main();
    return 0;
}
