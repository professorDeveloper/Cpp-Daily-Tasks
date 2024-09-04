//
// Created by azamov on 9/3/2024.
//
#include <iostream>
using namespace std;

bool chekNum(int number) {
    if (number > 9 && number < 100) {
        return true;
    }
    return false;
}

int main() {
    int number1, number2, number3, number4, number5;
    cout << "Enter the first number:";
    cin >> number1;
    cout << "Enter the second number:";
    cin >> number2;
    cout << "Enter the third number:";
    cin >> number3;
    cout << "Enter the fourth number:";
    cin >> number4;
    cout << "Enter the fifth number:";
    cin >> number5;

    int countMusbat = (number1 > 0) + (number2 > 0) + (number3 > 0) + (number4 > 0) + (number5 > 0);

    // Calculate the sum of positive integers
    int sumMusbat = (number1 > 0 ? number1 : 0) +
                    (number2 > 0 ? number2 : 0) +
                    (number3 > 0 ? number3 : 0) +
                    (number4 > 0 ? number4 : 0) +
                    (number5 > 0 ? number5 : 0);

    cout << sumMusbat << endl;

    cout << countMusbat << endl;

    //task2

    int countTwo = 0;
    if (chekNum(number1)) {
        countTwo ++;
    }
    if (chekNum(number2)) {
        countTwo ++;
    }
    if (chekNum(number3)) {
        countTwo ++;

    }
    if (chekNum(number4)) {
        countTwo ++;
    }
    if (chekNum(number5)) {
        countTwo ++;
    }
    cout << countTwo << endl;

    return 0;
}
