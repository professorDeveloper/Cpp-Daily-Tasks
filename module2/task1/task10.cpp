//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;
int main() {
    string str= "hello123world23";

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            str[i] ='9';
        }
    }


    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = '*';
        }
    }
    for (int i = 0; i < str.length(); i++) {
        if (!isdigit(str[i] && !isalpha(str[i]))) {
            str[i]=str[0];
        }
    }



}