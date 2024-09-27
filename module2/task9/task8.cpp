//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

bool endOther(string str,string str2) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < str2.length(); i++) {
        str2[i] = tolower(str2[i]);
    }

    if (str.length()>str2.length()) {
        int index =str.rfind(str2.length());

        return index == str.length() - str2.length();
    }
    return false;
}

int main() {
    cout << boolalpha << endOther("Hiabc","abc") << endl;
}