//
// Created by azamov on 9/16/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str = "salom";
    char firstStr = str[0];
    char endStr =str[str.length()-1];
    char secondStr = str[1];

    cout << (isupper(firstStr) && isupper(secondStr)) ? "PDP" : "ACADEMY" << endl;


    //
    //task2
    cout << (isdigit(firstStr)&& isdigit(secondStr)) ? "PDP" : "ACADEMY" << endl;

    //task3
    cout << (isdigit(firstStr)&& isdigit(endStr)) ? "PDP" : "ACADEMY" << endl;



}
