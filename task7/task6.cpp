//
// Created by azamov on 9/2/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 1234;
    int count = 0;
    int birlar = number % 10;
    int onlar = number / 10 % 10;
    int yuzlar = number / 100 % 10;
    int minglar = number / 1000 % 10;
    if (birlar % 2 == 0) {
        count++;
    }
    if (onlar % 2 == 0) {
        count++;
    }
    if (yuzlar % 2 == 0) {
        count++;
    }
    if (minglar % 2 == 0) {
        count++;
    }
    cout << count << endl;
    //task2
    int number1, number2, number3, number4, number5;
    int count2 = 0;
    number1 = 24;
    number2 = 3;
    number3 = 42;
    number4 = 41;
    number5 = 56;

    if (number1 % 2 == 0) {
        count2++;
    }
    if (number2 % 2 == 0) {
        count2++;
    }
    if (number3 % 2 == 0) {
        count2++;
    }
    if (number4 % 2 == 0) {
        count2++;
    }
    if (number5 % 2 == 0) {
        count2++;
    }
    cout << count2 << endl;

    //task3
    int count3=0;
    if (number1>0) {
        count3++;
    }
    if (number2>0) {
        count3++;
    }
    if (number3>0) {
        count3++;
    }
    if (number4>0) {
        count3++;
    }
    if (number5>0) {
        count3++;
    }
    cout << count3 << endl;


    return 0;
}
