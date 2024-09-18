#include <iostream>
using namespace std;
//
// Created by azamov on 9/18/2024.
//
void getToqNumber() {
    for (int i = 10; i <= 99; i++) {
        int num1 = i % 10;
        int num2 = i / 10;
        if (num1 % 2 != 0 && num2 % 2 != 0) {
            cout << i << endl;
        }
    }
}

void getToqNumber2() {
    for (int i = 100; i <= 999; i++) {
        int num1 = i % 10;
        int num2 = i / 10 % 10;
        int num3 = i / 100;
        if (num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0) {
            cout << i << endl;
        }
    }
}
int main () {
    getToqNumber();
    getToqNumber2();

}