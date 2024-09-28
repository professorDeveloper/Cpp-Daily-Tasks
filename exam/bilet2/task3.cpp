//
// Created by azamov on 9/28/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter season number:";
    cin >> n;

    switch (n) {
        case 1: cout << "Qish" << endl;
            break;
        case 2: cout << "Bahor";
            break;
        case 3: cout << "Yoz";
            break;
        case 4: cout << "Kuz";
            break;
        default :cout << "Bunday Raqamli fasl yoq";
    }
}
