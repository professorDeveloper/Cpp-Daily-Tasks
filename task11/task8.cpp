//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 24;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
    int count = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            sum += i;
        }
    }

}
