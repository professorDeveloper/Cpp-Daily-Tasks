//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

string zipZap(string str) {
    string s;

    for (int i = 0; i < str.length(); i++) {
        s =str.substr(i,3);
        if (s[0] =='z'  && s[2] == 'p') {
            str.erase(i+1, 1);
        }
    }
    return str;
}

int main() {

    cout << zipZap("zopzop") << endl;

}