//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;

string  makeAbba(string str, string str2) {
    string newStr = str + str2 +str2+str;
    return newStr;
}

int main() {
    cout<<makeAbba("Hello!", "World!");
}