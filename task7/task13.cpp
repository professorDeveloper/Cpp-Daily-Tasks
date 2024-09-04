//
// Created by azamov on 9/4/2024.
//

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; // 12345
    int a = number % 10;
    int b = number / 10 % 10;
    int c = number / 100 % 10;
    int d = number / 1000 % 10;
    int e = number / 10000 % 10;

    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    if (max < d) {
        max = d;
    }
    if (max < e) {
        max = e;
    }
    cout << max << endl;
}
