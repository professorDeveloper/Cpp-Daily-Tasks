//
// Created by azamov on 9/9/2024.
//
#include <iostream>
using namespace std;

void getBirlar(int number) {
    switch (number) {
        case 1: {
            cout << "Bir ";
            break;
        }
        case 2: {
            cout << "Ikki";
            break;
        }
        case 3: {
            cout << "Uch";
            break;
        }
        case 4: {
            cout << "To`rt";
            break;
        }
        case 5: {
            cout << "Besh";
            break;
        }
        case 6: {
            cout << "Olti";
        }
        case 7: {
            cout << "Yetti";
        }
        case 8: {
            cout << "Sakkiz";
        }
        case 9: {
            cout << "To`qqiz";
        }
        default: {
            cout << " " << endl;
        }
    }
}

void getOnlar(int number) {
    switch (number) {
        case 1: {
            cout << "O`n ";
            break;
        }
        case 2: {
            cout << "Yigirma ";
            break;
        }
        case 3: {
            cout << "O`ttiz ";
            break;
        }
        case 4: {
            cout << "Qirq ";
            break;
        }
        case 5: {
            cout << "Ellik ";
            break;
        }
        case 6: {
            cout << "Oltmish ";
        }
        case 7: {
            cout << "Yetmish ";
        }

        case 8: {
            cout << "Sakson ";
        }
        case 9: {
            cout << "To`qson ";
        }
        default: {
            cout << " " << endl;
        }
    }
}


int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 9 && number < 100) {
        int birlar = number % 10;
        int onlar = number / 10;
        getOnlar(onlar);
        getBirlar(birlar);
    } else {
        cout << "Invalid Input";
    }
    return 0;
}
