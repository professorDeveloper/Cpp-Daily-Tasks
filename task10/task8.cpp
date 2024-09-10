//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int i = 1;
    while (i <= a) {
        if (i % a == 0) {
            cout << i << endl;
        }
        i++;
    }
    //Task2
    int i2 = 1;
    int count = 0;
    while (i2 <= a) {
        if (i2 % a == 0) {
            count++;
        }
        i2++;
    }

    //Task3
    int i3 = 1;
    int sum = 0;
    while (i3 <= a) {
        if (i3 % a == 0) {
            sum += i3;
        }
        i3++;
    }


}
