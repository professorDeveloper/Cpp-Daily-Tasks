//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

void getMealKg(int kg) {
    int kg1 = kg;

    for (int i = 30; i <= 60; i++) {
        cout << i * kg << endl;
    }
}


void getNumbers() {
    for(int i = 10; i <= 99; i++) {
        int number =i%10;
        int num2 =i/10;
        if (number+num2>8) {
            cout << i << endl;
        }
    }
}

int main() {
    getMealKg(10);
    getNumbers();
}