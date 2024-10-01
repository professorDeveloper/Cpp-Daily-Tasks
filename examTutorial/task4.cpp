//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

void showStrSym(string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            cout << str[i] << ",";
        }
    }
    cout << endl;
}

int main() {
    showStrSym("C++ dasturlash tilini muvaffaqiyatli tugatdim");
}
