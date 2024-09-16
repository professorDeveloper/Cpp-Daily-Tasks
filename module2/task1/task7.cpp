//
// Created by azamov on 9/16/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str = "He123llo";
    char first = str[0];
    char end = str[str.length() - 1];

    cout << (isupper(first) && islower(end)) ? "PDP" : "ACADEMY" << endl;


    //task2
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    cout << count << endl;


    //task3


    int countAlpha =0;

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            countAlpha++;
        }
    }
    cout << countAlpha << endl;


    return 0;
}
