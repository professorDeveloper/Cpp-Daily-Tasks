//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a ;
    int b ;
    int c ;
    cout <<"a:";
    cin >> a;
    cout << "b:" ;
    cin >> b;
    cout << "c:" ;
    cin >> c;

    if (a < b) {
        swap(a, b);
    }
    if (a < c) {
        swap(a, c);
    }
    if (b < c) {
        swap(b, c);
    }
}
