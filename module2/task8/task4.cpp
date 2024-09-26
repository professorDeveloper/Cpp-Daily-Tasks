//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;
string extraEnd(string str) {
    string out =str.substr(str.length()-2,str.length());

    return out+out+out;
}
int main() {
    string str ="hello";
    cout << extraEnd(str) << endl;
}