//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

bool checkTub(int a) {
    int i = 1;
    int count = 0;
    while (i <= a) {
        if (a % i == 0) {
            count++;
        }
        i++;
    }
    if (count == 2) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int i = 1;
    int count = 0;
    while (i <= a) {
        if (a % i == 0) {
            count++;
        }
        i++;
    }
    if (count == 2) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }


    int a2, b2;
    cout << "Enter a number: ";
    cin >> a2;
    cout << "Enter a number: ";
    cin >> b2;


    if (checkTub(a2) && checkTub(b2)) {
        cout << a2 + b2 << endl;
    } else {
        cout << a2 * b2 << endl;
    }

    return 0;
}
