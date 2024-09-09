//
// Created by azamov on 9/9/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;
    switch (number) {
        case 1:
        case 2:
        case 3: {
            cout << "Qish" << endl;
            break;
        }
        case 4:
        case 5:
        case 6: {
            cout << "Bahor" << endl;
            break;
        }
        case 7:
        case 8:
        case 9: {
            cout << "Yoz" << endl;
            break;
        }
        case 10:
        case 11:
        case 12: {
            cout << "Kuz" << endl;

            break;
        }
        default: {
            cout << "Error" << endl;
        }
    }
}
