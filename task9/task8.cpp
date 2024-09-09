//
// Created by azamov on 9/9/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    switch (number) {
        case 1: {
            cout << "Qish" << endl;
        }
        case 2: {
            cout << "Bahor" << endl;
        }
        case 3: {
            cout << "Yoz" << endl;
        }
        case 4: {
            cout << "Kuz" << endl;
        }
        default: {
            cout << "Invalid Input" << endl;
        }
    }
}
