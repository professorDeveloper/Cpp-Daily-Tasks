//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number = 27;
    int i = 1;
    while (i < number) {
        i *= 3;
    }

    if (i == number) {
        cout << "3 ning darajasi" << endl;
    } else {
        cout << "3 ning darajasi emas" << endl;
    }



    return 0;
}
