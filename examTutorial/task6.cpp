//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

bool checkAbsoluteNum(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) { // 1+2+3
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}


int main() {

    for (int i=1 ; i<1000; i++) {
        if (checkAbsoluteNum(i)) {
            cout << i << ",";
        }
    }
    cout << endl;

}