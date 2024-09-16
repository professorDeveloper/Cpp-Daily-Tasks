//
// Created by azamov on 9/16/2024.
//
#include <complex>
#include <iostream>
#include <cmath>
using namespace std;
#include <cctype>

int main() {

    int number =125;

    for (int i = 1; i <= number; i++) {
        cout << sqrt(i) << endl;
    }


    //Task2
    string str= "hello";
    cout << str[str.length()-1] << endl;

    //task3

    char a =str[1];
    str[1] =str[0];
    str[0] =a;
    cout << str << endl;


}