//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;
string nTwice(string str,int n) {
    string out =str.substr(0,n);
    string end =str.substr(str.size()-n);

    return out+end;
}
int main() {
    cout<<nTwice("Hello",2);
}