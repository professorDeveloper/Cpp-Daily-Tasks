//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

string getSpaceStr(string str) {
    int firstIndex = str.find(' ');
    int secondIndex = str.find(' ', firstIndex + 1);
    cout << secondIndex << endl;
    cout << firstIndex << endl;
    return secondIndex == -1 ? " " : str.substr(firstIndex + 1, secondIndex - firstIndex);
}

int main() {
    string str = "Hello World lol";
    cout << getSpaceStr(str);
}
