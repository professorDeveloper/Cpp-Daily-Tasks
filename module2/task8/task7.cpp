//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;

string middleThere(string str) {
    //solving /2
    int index = str.length() / 2 - 1;
    return str.substr(index, 3);
}

int main() {
    cout << middleThere("solving") << endl;
}
