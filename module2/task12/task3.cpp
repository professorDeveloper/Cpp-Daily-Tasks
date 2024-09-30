//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n =4;
    int start = n + 3;

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n - i; ++j) {
            cout << start - j << " ";
        }
        cout << endl;
    }
}