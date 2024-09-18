//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

void getSymbol(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (!isalpha(str[i]) && !isdigit(str[i])) {
            cout << str[i] << endl;
        }
    }
}

void getNNumber(int n) {
    for (int i = 0; i < n; i++) {
        cout << n << endl;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    getSymbol(str);
    getNNumber(10);

}
