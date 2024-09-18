//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

bool checkUpper(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (!isupper(str[i])) return false;
    }
    return true;
}



bool checkLow(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) return false;
    }
    return true;
}
int main() {
    string str="hello World";
    cout << checkUpper(str) << endl;
    cout << checkLow(str) << endl;

}
