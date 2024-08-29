//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;

    int totalChairs = a * b * c * d; // Barcha stullar soni

    // Parta hisoblash
    int totalDesk = totalChairs / 2;//Stullarni partaga ozgartirish

    cout << totalDesk << endl;

}