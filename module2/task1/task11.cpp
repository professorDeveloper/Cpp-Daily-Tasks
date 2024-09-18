//
// Created by azamov on 9/17/2024
#include "iostream"
using namespace std;

int main() {
    string str = "hello123World";
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            str[i] = str[str.length() - 1];
        }
    }

    //task2

    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i]) || count < 6) {
            count++;
            cout << str[i] << endl;
        }
    }

    //task3
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            str[i]=tolower(str[i]);
        }
    }

}
