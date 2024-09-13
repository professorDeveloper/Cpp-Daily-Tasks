//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 2456;
    int count = 0;
    int countToq = 0;

    while (true) {
        int checkNumber = number % 10;
        if (checkNumber % 2 == 0) {
            count++;
        }
        number = number / 10;
        if (number == 0) {
            break;
        }
    }



    while (true) {
        int checkNumber = number % 10;
        if (checkNumber % 2 != 0) {
            countToq++;
        }
        number = number / 10;
        if (number == 0) {
            break;
        }
    }


    cout << "Juft Sonlar"<< count << endl;
    cout << "Toq  Sonlar"<< countToq << endl;

    return 0;
}
