//
// Created by azamov on 9/20/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int getJuft(int number) {
    int result = 0;
    if (number % 2 == 0) {
        result = sqrt(number);
    } else {
        result = number * number;
    }
    return result;
}

int main() {
}


