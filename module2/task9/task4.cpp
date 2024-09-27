//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

string addStrAfterSymbol(string str, string str2, char c) {
    string result ;
    for (char i : str) {
        result += i;
        if (i == c) {
            result += str2;
        }
    }
    return result ;
}

int main() {
    string str ="hello c plus";
    string str2 = "huh";
    char c ='c';

    cout << addStrAfterSymbol(str, str2, c);
}
