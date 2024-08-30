//
// Created by azamov on 8/30/2024.
//
#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Enter a number: ";
    cin >> c;
    bool sum =a>c && b>c;

    cout << sum << endl;

    //task2

    bool result =a==b*2;
    cout << result << endl;

    return 0;


}