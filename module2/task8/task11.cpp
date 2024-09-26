//
// Created by azamov on 9/26/2024.
//
#include <iostream>
using namespace std;

string withoutX(string str) {
    if (str[0]=='x') {
        return str.substr(1, str.length());
    }else if (str[str.length()-1]=='x') {
        return str.substr(0, str.length());
    }
}

int main() {
    cout << withoutX("hello") << endl;
    cout << withoutX("hellox") << endl;
}