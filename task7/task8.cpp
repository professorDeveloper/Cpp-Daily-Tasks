//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 23;
    int onlar = number / 10;
    int birlar = number % 10;

    if (onlar == birlar) {
        cout << birlar << endl;
    } else cout << onlar << endl;

    return 0;
}
