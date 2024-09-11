//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 45;
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 10 == 0) {
            count++;
        }
    }
    for (int i=b; i>=a; i--) {
        if (i%7==0 || i%8==0) {
            cout << i << endl;
        }
    }

    int sum = 0;
    for (int i =1 ; i<=100 ; i++) {
        if (i%2==0) {
            sum += i;
        }
    }

}
