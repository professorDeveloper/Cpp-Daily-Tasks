//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl;
    cout << b << endl;

    //Task2
    int a1 = 1;
    int b2 = 2;
    int c2 = 3;
    int temp;
    temp = a1;
    a1 = b2;
    b2 = c2;
    c2 = temp;
    cout << a1 << endl;
    cout << b2 << endl;
    cout << c2 << endl;
    return 0;
}
