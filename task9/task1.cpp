//
// Created by azamov on 9/9/2024.
//
#include <iostream>
using namespace std;

int main() {
    int weekend;
    cout << "Please enter your weekend number : ";
    switch (weekend) {
        case 1: {
            cout << "Dushanba" << endl;
            break;
        }
        case 2: {
            cout << "Seshanba   " << endl;
            break;
        }
        case 3: {
            cout << "chorshanba" << endl;
            break;
        }
        case 4: {
            cout << "Payshanba" << endl;
            break;
        }
        case 5: {
            cout << "Juma" << endl;
            break;
        }
        case 6: {
            cout << "Shanba" << endl;
            break;
        }
        case 7: {
            cout << "Yakshanba" << endl;
            break;
        }
        default: {
            cout << "Error" << endl;
        }
    }
}
