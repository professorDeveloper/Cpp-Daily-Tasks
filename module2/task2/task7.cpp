//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

string getUpperToLower(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

string getLowerToUpper(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int getOkCount(string str) {
    int count = 0;
    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == 'o' && str[i] == 'k') {
            count++;
        }
    }
    return count;
}
int main() {

    string forOk ="ok salom ok";
    cout << getUpperToLower(forOk) << endl;
    cout << getLowerToUpper(forOk) << endl;
    cout << getOkCount(forOk) << endl;
}
