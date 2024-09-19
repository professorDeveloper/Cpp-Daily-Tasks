//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

void findMax(int num1, int num2, int num3) {
    int max = num1 > num2 ? num1 : num2;
    if (max < num3) {
        max = num3;
    }
    cout << max << endl;
}

void findMax(int num1, int num2, int num3, int num4) {
    int max = num1 > num2 ? num1 : num2;
    if (max < num3) { max = num3; }
    if (max < num4) { max = num4; }
    cout << max << endl;
}

void findMax(int num1, int num2, int num3, int num4, int num5) {
    int max = num1 > num2 ? num1 : num2;
    if (max < num3) { max = num3; }
    if (max < num4) { max = num4; }
    if (max < num5) { max = num5; }
    cout << max << endl;
}


int multiplication(int num1) {
    int num = 1;
    for (int i = 1; i <= num1; i++) {
        num *= i;
    }
    return num;
}

int multiplication(int num1, int num2) {
    int sum = num1;
    for (int i = num1; i <= num2; i++) {
        sum *= i;
    }
    return sum;
}

int multiplication(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}

int main() {
    int num1, num2, num3;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Third Number: ";
    cin >> num3;
    findMax(num1, num2, num3);
    cout << multiplication(num1);
    cout << multiplication(num1, num2);
    cout << multiplication(num1, num2, num3);
    return 0;
}
