//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str = "hello";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    cout << count << endl;


    int countLow = 0;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            countLow++;
        }
    }
    cout << countLow << endl;
    int countSym = 0;
    for (int i = 0; i < str.length(); i++) {
        if (!isalpha(str[i]) && isdigit(str[i])) {
            countSym++;
        }
    }
    cout << countSym << endl;


}
