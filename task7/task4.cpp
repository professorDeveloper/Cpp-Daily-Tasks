//
// Created by azamov on 9/1/2024.
//

#include  <iostream>
using namespace std;

bool checkNumber(int number) {
    return number > 9 && number < 100;
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int number2;
    cout << "Enter a number : ";
    cin >> number2;
    if (number2 > number) {
        cout << number2 << endl;
    } else {
        cout << number << endl;
    }

    //task2
    if (number > number2) {
        cout << number2 << endl;
    } else {
        cout << number << endl;
    }
    //task3
    if (checkNumber(number) && checkNumber(number2)) {
        cout << number + number2 << endl;
    } else {
        cout << number * number2 << endl;
    }
}
