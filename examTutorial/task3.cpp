//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

string reverseAndRemove(string str) {
    string newStr = str.substr(str.size() % 2 == 0 ? str.size() / 2 : str.size() / 2 + 1);
    str.erase(str.size() % 2 == 0 ? str.size() / 2 : str.size() / 2 + 1);
    return newStr + str;
}

int main() {
    string str ="hellow";
    str = reverseAndRemove(str);
    cout << str << endl;
}
