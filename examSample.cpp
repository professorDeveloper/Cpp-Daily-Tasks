//
// Created by azamov on 9/23/2024.
//
//Mukammal son bu 1 dan ozigacha bolgan yig`indi

#include <iostream>
using namespace std;

bool checkNumberMukammal(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (checkNumberMukammal(i)) {
            cout << i << endl;
        }
    }
}
