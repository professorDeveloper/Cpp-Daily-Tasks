//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

string checkNumber(int number) {
    if (number % 2 == 0) {
        return "Juft Son";
    } else return "Toq Son";
}

int main() {
    //
    int number;
    cout << "Enter a number : ";
    cin >> number;
    if (number != 0) {
        if (number > 0 && number < 10) {
            cout << "Bir xonali" + checkNumber(number);
        } else if (number > 9 && number < 100) {
            cout << "Ikki Xonali " + checkNumber(number);
        } else if (number > 99 && number < 1000) {
            cout << "Uch Xonali " + checkNumber(number);
        } else if (number > 999 && number < 10000) {
            cout << "To`rt xonali" + checkNumber(number);
        }
    } else {
        cout << "0 soni";
    }

    return 0;
}
