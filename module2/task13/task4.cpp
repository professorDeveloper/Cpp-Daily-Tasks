//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    if (n > 46) {
        for (int i = 46; i <= n; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    } else {
        for (int i = n; i >= 46; i--) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
}
