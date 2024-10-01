//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    switch (n) {
        case 1: cout << "LapTop" << endl;
            break;
        case 2: cout << "NetBook" << endl;
            break;
        case 3: cout << "Displey" << endl;
            break;
        case 4: cout << "Komputer" << endl;
            break;
        default: {
            cout << "Invalid input !" << endl;
        }
    }

    return 0;
}
