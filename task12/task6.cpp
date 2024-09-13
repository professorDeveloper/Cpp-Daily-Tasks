//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 12345;
    int count = 0;
    while (true) {
        int result = number % 10;
        number = number / 10;
        if (result == 5) {
            count++;
            break;
        }
    }

    if (count != 0) {
        cout << "5 soni bor" << endl;
    } else {
        cout << "5 soni Mavjud emas" << endl;
    }
    cout << count << endl;


    //task2
    int num = 2456;
    int count2 = 0;
    while (true) {
        int result = num % 10;
        num = num / 10;
        if (result % 2 == 0) {
            count2++;
            break;
        }
    }
    if (count2 != 0) {
        cout << "Juft son mavjud" << endl;
    } else {
        cout << "Juft son mavjud emas" << endl;
    }
}
