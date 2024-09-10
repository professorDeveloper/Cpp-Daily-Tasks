//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int count = 0;
    int sum = 0;
    while (i <= 99) {
        int birlar = i % 10;
        int onlar = i / 10;
        if (birlar * onlar > 12) {
            count++;
            sum += i;
        }
        i = i + 1;
    }

    //Task2
    int a = 100;
    while (a <= 999) {
        int onlar = a / 10 % 10;
        if (onlar == 2 || onlar == 5) {
            cout << a << endl;
        }
        a = a + 1;
    }
}
