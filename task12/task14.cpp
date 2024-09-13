//
// Created by azamov on 9/14/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Task
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) {
                cout << j << " ";
            } else {
                cout  << "  ";
            }

        }
        cout << endl;
    }
}
