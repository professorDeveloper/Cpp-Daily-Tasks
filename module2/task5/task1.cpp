//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;


int main() {
    int number[] = {221, 23, 241, 251, 99, 33, 1132, 444, 244};
    int sizeNum = size(number);
    int counter = 0;
    for (int i = 0; i < sizeNum; i++) {
        if (number[i] > 99 && number[i] < 999) {
            counter++;
        }
    }

    //Task2
    int number2[] = {221, 23, 241, 251, 99, 33, 1132, 444, 244};
    int count2 = 0;
    int sizeNum2 = size(number2);
    for (int i = 0; i < sizeNum2; i++) {
        if (number2[i] % 2 == 0) {
            count2++;
        }
    }

    //Task3
    int number3[] = {221, 23, 241, 251, 99, 33, 1132, 444, 244};
    int count3 = 0;
    int sizeNum3 = sizeof(number3) / sizeof(number3[0]);
    for (int i = 0; i < sizeNum3; i++) {
        if (number3[i] % 2 != 0) count3++;
    }
}
