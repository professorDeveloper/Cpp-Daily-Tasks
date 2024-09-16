//
// Created by azamov on 9/16/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str = "Hello";
    char first = str[0];
    char strEnd = str[str.length() - 1];
    char strEnd2 = str[str.length() - 2];
    cout << (islower(strEnd) && islower(strEnd2)) ? "PDP" : "ACADEMY" << endl;


    //Task2
    cout << (isdigit(first) && isdigit(strEnd))?"PDP":"ACADEMY" << endl;



    //Task3
    cout << (isupper(strEnd) && isupper(strEnd2)) ? "PDP" : "ACADEMY" << endl;

}


