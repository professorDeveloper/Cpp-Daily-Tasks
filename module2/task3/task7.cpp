//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

void getNumbers() {
    for (int i = 100; i <= 999; i++) {
        int num1 = i % 10;
        int num2 = i / 10 % 10;
        int num3 = i / 100;
        if (num1 + num2 + num3 > 20) {
            cout << i << endl;
        }
    }
}

void getNumbers2() {
    for (int i = 100; i <= 999; i++) {
        int num1 = i % 10;
        int num2 = i / 10 % 10;
        int num3 = i / 100;
        if (num1 * num2 * num3 > 40) {
            cout << i << endl;
        }
    }
}

int main () {
    getNumbers();
    getNumbers2();

}
