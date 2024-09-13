//
// Created by azamov on 9/12/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 1234;
    int count = 0;
    while (true) {
        ++count;
        n = n / 10;
        if (n == 0) {
            break;
        }
    }

    //Task2
    int num = 11;
    int sum = 0;
    while (true) {
        sum += num % 10;
        num = num / 10;
        if (num == 0) {
            break;
        }
    }

    cout << sum << endl;
}
