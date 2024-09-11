//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int sum = 0;
    for (int i = 10; i <= 99; i++) {
        int birlar = i % 10;
        int onlar = i / 10;
        if (onlar * birlar > 15) {
            count++;
            sum += i;
        }
    }

    for (int i = 100; i <= 999; i++) {
        int onlar = i / 10 % 10;
        if (onlar == 4 || onlar == 7) {
            cout << i << endl;
        }
    }



    return 0;
}
