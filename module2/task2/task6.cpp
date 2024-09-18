//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

string getLow(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] ='*';
        }
    }
    return str;
}
string getXYZ(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'x') {
            str[i] = 'y';
        } else if (str[i] == 'y') {
            str[i] = 'z';
        }
    }
    return str;

}
int main() {
    string str= "HEllow Worlzd xy";
    cout << getLow(str) << endl;
    cout << getXYZ(str) << endl;
    cout << getLow(str) << endl;
}
