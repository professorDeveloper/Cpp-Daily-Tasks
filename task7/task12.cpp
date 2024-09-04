//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Enter a number: ";
    cin >> c;
    cout << "Enter a number: ";
    cin >> d;
    int min = a;
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    if (min > d) {
        min = d;
    }
    cout << min << endl;
}
