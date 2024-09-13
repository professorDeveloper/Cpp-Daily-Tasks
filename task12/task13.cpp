//
// Created by azamov on 9/14/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        //
        for (int j = 1; j <= n; j++) {
            if (j >= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    //Task2

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) {
                cout << i;
            }
        }
        cout << endl;
    }
}


/// [1,1][1,2][1,3][1,4][1,5]
///[2,1][2,2][2,3][2,4][2,5]
///[3,1][3,2][3,3][3,4][3,5]
///[4,1][4,2][4,3][4,4][4,5]
///[5,1][5,2][5,3][5,4][5,5]
