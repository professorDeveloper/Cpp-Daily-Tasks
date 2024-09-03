//
// Created by azamov on 9/1/2024.
//
#include <iostream>
using namespace std;

int numberOfToq(int number) {
    // if(number)
}


int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int number2;
    cout << "Enter a number : ";
    cin >> number2;
    int number3;
    cout << "Enter a number : ";
    cin >> number3;

    if (number % 2 == 0 && number2 % 2 == 0) {
        cout << number2 + number << endl;
    } else {
        cout << number2 * number << endl;
    }

    //task2
    if (number % 2 != 0 && number2 % 2 != 0) {
        cout << number2 * number << endl;
    } else {
        cout << number2 + number << endl;
    }
    //task3

    // if(number)

    int count = 0;
    if (number % 2 != 0) {
        count++;
    }
    if (number2 % 2 != 0) {
        count++;
    }
    if (number3 % 2 != 0) {
        count++;
    }
    cout << count << endl;
}
