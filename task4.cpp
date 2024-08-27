//
// Created by azamov on 8/23/2024.
//

#include <iostream>

using namespace std;
//Task4
int main() {
    //Task1
    float a, b, c, d, e, f, g, h;
    a = 4.2;
    b = 4.1;
    c = 2.5;
    d = 3.5;
    e = 6.1;
    f = 3.5;
    g = 3.5;
    h = 3.5;
    float sum = (a + b + c + d + e + f + g + h) / 8;

    cout << sum << endl;


    //Task2

    int a2 = 4;
    int b2 = 3;

    a2 = a2 + b2;
    b2 = a2 - b2;
    a2 = a2 - b2;

    cout << a2 << endl;
    cout << b2 << endl;


    //Task3

    int minute = 5;

    int second = minute * 60;

    cout << second << endl;


    return 0;
}
