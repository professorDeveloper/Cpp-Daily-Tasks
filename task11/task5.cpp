//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 999; i++) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int yuzlar = i / 100 % 10;
        int result = birlar + onlar + yuzlar;
        if (result > 18) {
            cout << i << endl;
        }
    }

    //Task2

    for (int i = 100; i <= 999; i++) {
        int birlar = i % 10;
        int yuzlar = i / 100 % 10;
        if (birlar ==yuzlar) {
            cout << i << endl;
        }
    }
    return 0;
}
