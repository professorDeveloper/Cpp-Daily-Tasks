//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 123;
    int birlar = number % 10;
    int onlar = number / 10 % 10;
    int yuzlar = number / 100 % 10;

    if (onlar == yuzlar && birlar == onlar) {
        cout << onlar << endl;
    } else cout << birlar << endl;

    return 0;
}
