//
// Created by azamov on 10/1/2024.
//
#include <cmath>
#include <iostream>
using namespace std;

bool checkTub(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count == 2;
}

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (checkTub(n)) {
            cout << "Kvadrat ildizi :" << sqrt(n) << endl;
        }
    }
}
