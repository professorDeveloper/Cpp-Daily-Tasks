//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 53;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }

    //Task2
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 && i % 6 == 0) {
            cout << i << endl;
        }
    }



    return 0;
}
