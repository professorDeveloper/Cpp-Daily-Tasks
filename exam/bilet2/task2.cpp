//
// Created by azamov on 9/28/2024.
//
#include <iostream>
using namespace std;
int main() {
    int a =40;
    int b =32;
    int c =12;
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
}