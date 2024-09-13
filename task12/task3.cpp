//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number, sanoq = 0;
    while (true) {
        cout << "Please enter your number: ";
        cin >> number;
        if (number != 0)sanoq++;
        else break;
    }


    int count = 0;
    int num;
    //task2
    while (true) {
        cout << "Please enter your number: ";
        cin >> num;

        if (num > 10) {
            count++;
        }

        if (num == 0)break;
    }
}
