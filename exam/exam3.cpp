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

    if (a < b) {
        swap(a, b);
    }
    if (a<c) {
        swap(a, c);
    }
    if (b < c) {
        swap(b, c);
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}
