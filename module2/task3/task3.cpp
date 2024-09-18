//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

void getMultNums(int num1, int num2) {
    for (int i = num1; i <= num2; i++) {
        if (i % 5 == 0 || i % 6 == 0) {
            cout << i << endl;
        }
    }
}

void getUpper(string str) {
    string newStr = "";
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            newStr += str[i];
        }
    }
    cout << newStr << endl;
}

void getWords(string str) {
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
}

int main() {
    string str = "Hello WORLD";
    int num1 = 24;
    int num2 = 126;
    getMultNums(num1, num2);
    getUpper(str);
    getWords(str);
    return 0;
}
