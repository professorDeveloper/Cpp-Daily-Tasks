//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

int getStrCountFromString(string str, string find) {
    int count = 0;
    string checker;
    for (int i = 0; i < find.length(); i++) {
        checker = find.substr(i, find.length());
        if (checker == str) {
            count++;
        }
    }
    return count;
}

bool checkCatDogSize(string str) {
    int sizeC = getStrCountFromString(str, "cat");
    int sizeD = getStrCountFromString(str, "dog");


    return sizeC == sizeD;
}


int main() {
    string str;
    cout << "Please enter a string: ";
    cin >> str;
    cout <<boolalpha << checkCatDogSize(str) << endl;
}