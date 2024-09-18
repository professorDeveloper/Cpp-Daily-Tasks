//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

string getReverse(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev = rev + s[i];
    }
    return rev;

}

string checkPalindrome(string str){
    string rev = getReverse(str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != rev[i]) {
            return "false";
        }
    }

    return "true";
}
string checkNum(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            return "false";
        }
    }
    return "true";
}

int main() {
    string  str ="loll";
    cout << getReverse(str) << endl;
    cout << checkPalindrome(str) << endl;
    cout << checkNum(str) << endl;
}