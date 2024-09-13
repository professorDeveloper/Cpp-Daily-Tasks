//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    while (true) {
        cout << "Please enter a number: ";
        cin >> num;
        if (num > 50) {
            sum += num;
        }
        if (num == 0) break;
    }

    int number;
    int count = 0;
    while (true) {
        cout << "Please enter a number: ";
        cin >> num;
        count++;
        if (number % 2 == 0)break;
    }
}
