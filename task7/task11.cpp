//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number1 = 12, number2 = 24, number3 = 13, number4 = 14, number5 = 154, number6 = 23;

    int max = number1;
    if (max < number2) {
        max = number2;
    }
    if (max < number3) {
        max = number3;
    }
    if (max < number4) {
        max = number4;
    }
    if (max < number5) {
        max = number5;
    }
    if (max < number6) {
        max = number6;
    }

    cout << max << endl;

    return 0;
}
