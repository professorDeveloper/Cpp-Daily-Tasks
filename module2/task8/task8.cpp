//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;

string conCat(string a, string b) {
    char end = a[a.length() - 1];
    char first = b[0];
    if (end == first) {
        a.resize(a.length() - 1);
    }

    return a + b;
}

int main() {
    cout << conCat("abc", "cat") << endl;
}
