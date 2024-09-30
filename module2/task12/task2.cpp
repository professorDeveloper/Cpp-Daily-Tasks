//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str="Hello World";
    int n=4;
    if (str.size() > n) {
        cout << str.substr(str.size()-n) << endl;
    }
}
