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
        case 1: cout << "G`arb" << endl;
            break;
        case 2: cout << "Sharq" << endl;
            break;
        case 3: cout << "Shimol" << endl;
            break;
        case 4: cout << "Janub" << endl;
            break;
        default: {
            cout << "Input " << endl;
        }
    }
}
