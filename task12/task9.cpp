//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;


bool checkTub(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return true;
    } else return false;
}

int main() {
    //Task1
    for (int i = 1; i <= 100; i++) {
        if (checkTub(i)) {
            cout << i << endl;
        }
    }

    //task2
    int a = 24;
    int b = 299;
    for (int i = a; i <= b; i++) {
        if (checkTub(i)) {
            cout << i << endl;
        }
    }
}
