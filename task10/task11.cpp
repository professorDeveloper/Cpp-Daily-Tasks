//
// Created by azamov on 9/10/2024.
//
#include <iostream>
using namespace std;

int getCountNum(int n) {
    int i = 1;
    int count = 0;
    while (i <= n) {
        if (n % i == 0) {
            count++;
        }
        ++i;
    }
}

int main() {
    int a;
    int b;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter a number : ";
    cin >> b;
    if (getCountNum(a) > getCountNum(b)) {
        cout << getCountNum(a) << endl;
    } else {
        cout << getCountNum(b) << endl;
    }

    //Task2
    int a2, b2;
    cout << "Enter a number : ";
    cin >> a2;
    cout << "Enter a number : ";
    cin >> b2;
    int i = a2 + 1;
    int sum = 0;
    while (i < b2) {
        sum += i;
        i = i + 1;
    }
}
