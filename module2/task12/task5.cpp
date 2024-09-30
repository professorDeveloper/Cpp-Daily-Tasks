//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;

string checkAndReplaceNum(char num) {
    if (isdigit(num)) {
        return "raqam";
    } else if (isupper(num)) {
        return "katta";
    } else if (islower(num)) {
        return "kichik";
    }
    return to_string(num);
}

// string
int main() {
    string str = "Hello World23";
    string newStr;
    for (int i = 0; i < str.length(); i++) {
        newStr += checkAndReplaceNum(str[i]);
    }
    cout << newStr << endl;
}
