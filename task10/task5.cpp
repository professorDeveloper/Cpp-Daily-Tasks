//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int i = 100;
    while (i <= 999) {
        int birliklar = i % 10;
        int onlar = i / 10 % 10;
        int yuzlar = i / 100;
        int checkRes = onlar + birliklar + yuzlar;
        if (checkRes > 20) {
            cout << i << endl;
        }
        i = i + 1;
    }

    ///Task2
    int a = 100;
    while (a <= 999) {
        int birliklar = a % 10;
        int yuzlar = a / 100;
        if (birliklar == yuzlar) {
            cout << a << endl;
        }
        ++a;
    }
}
