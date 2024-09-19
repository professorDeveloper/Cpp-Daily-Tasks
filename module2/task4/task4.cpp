//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;

int getNum(int n) {
    //123
    if (n == 0) return 0; //false
    return 1 + getNum(n / 10);// 1+1+1 = 3
}

int sumAB(int a, int b) {
    if (b == a) return b;

    return a + sumAB(a+1 , b);
}

int main() {
    int n;
    cin >> n;
    cout << getNum(n) << endl;
    cout << sumAB(1,5) << endl;

    return 0;
}
