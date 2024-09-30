//
// Created by azamov on 9/29/2024.
//
#include <iostream>
using namespace std;
int main() {
    string str ="    pdp hello  k   ";
    //Find count of words
    ///Remove space
    str.erase(str.find_last_not_of(' ') + 1);

    size_t last_space = str.find_last_of(' ');

    int length = str.length() - last_space - 1;
    cout << length << endl;
}