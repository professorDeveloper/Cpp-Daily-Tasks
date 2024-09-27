//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

string addStrBeforeSymbol(string str, string str2, char c) {
  string result ;
    for (char i : str) {
        if (i == c) {
            result += str2;
        }
        result += i;
    }
    return result ;
}

int main() {
    string str ="hello c plus";
    string str2 = "huh";
    char c ='c';

    cout << addStrBeforeSymbol(str, str2, c);
}
