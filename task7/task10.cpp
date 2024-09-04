//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 121;
    int birlar = number % 10;
    int onlar = number / 10 % 10;
    int yuzlar = number / 100 % 10;

    if (birlar == yuzlar) {
        cout << birlar + onlar + yuzlar << endl;
    } else cout << birlar * onlar * yuzlar << endl;

    return 0;
}
