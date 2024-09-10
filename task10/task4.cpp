//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 80;
    int count = 0;
    while (a <= b) {
        if (a % 8 == 0) count++;
        a = a + 1;
    }
    cout << count << endl;
    //Task2
    int a2 = 30;
    int b2 = 120;
    while (a2 <= b2) {
        if (a2 % 9 == 0 || a2 % 5 == 0) {
            cout << a2 << endl;
        }
        a2 = a2 + 1;
    }
    //Task3
    int sum = 0;
    int i = 1;
    while (i <= 100) {
        if (i % 2 != 0) sum += i;
        i = i + 1;
    }
    cout << sum << endl;
}
