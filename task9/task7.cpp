//
// Created by azamov on 9/9/2024.
//
#include <iostream>
using namespace std;;

int main() {
    int number, number2;
    char symbol;
    cout << "Enter a number : ";
    cin >> number;
    cout << "Enter a symbol : ";
    cin >> symbol;
    cout << "Enter a number :";
    cin >> number2;
    switch (symbol) {
        case '+': {
            cout << number + number2 << endl;
            break;
        }
        case '-': {
            cout << number - number2 << endl;
            break;
        }
        case '*': {
            cout << number * number2 << endl;
            break;
        }
        case '/': {
            cout << number / number2 << endl;
            break;
        }
        default: {
            cout << "" << endl;
        }
    }
}
