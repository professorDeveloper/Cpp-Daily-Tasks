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
            cout << "Bir " << endl;
            break;
        }
        case 2: {
            cout << "Ikki" << endl;
            break;
        }
        case 3: {
            cout << "Uch" << endl;
            break;
        }
        case 4: {
            cout << "To`rt" << endl;
            break;
        }
        case 5: {
            cout << "Besh" << endl;
            break;
        }
        case 6: {
            cout << "Olti" << endl;
        }
        case 7: {
            cout << "Yetti" << endl;
        }
        case 8: {
            cout << "Sakkiz" << endl;
        }
        case 9: {
            cout << "To`qqiz" << endl;
        }
        default: {
            cout << "Error" << endl;
        }
    }
}
