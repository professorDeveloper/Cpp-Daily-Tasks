//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 9; i++) {
        for (int j = 2; j <= 9; j++) {
            cout << i << "*" << j << "=" << i * j << endl;
        }
    }

    //Task2
    int a = 2;
    int b = 7;
    for (int i = a + 1; i < b; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << endl;
        }
    }
    return 0;
}
