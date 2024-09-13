//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    while (true) {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
        if (number == 0) break;
    }


    int num;
    int mult = 1;
    while (true) {
        cout << "Enter a number: ";
        cin >> num;
        mult *= num;
        if (num == 0) break;
    }
}
