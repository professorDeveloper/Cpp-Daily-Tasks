//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (password == "Aziz20") {
        cout << "Assalomu alaykum Azizbek, Xush kelibsiz" << endl;
    } else {
        cout << "Siz xato passwordni kiritidingiz" << endl;
    }

    //task2
    int a, b, c;
    a = 3;
    b = 4;
    c = 5;
    if (a == b || b == c | c == a) {
        cout << "Natija 10" << endl;
    } else if (a == b && b == c && c == a) {
        cout << "Natija 20" << endl;
    } else {
        cout << "Natija 0" << endl;
    }
}
