//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

void add(float a,float b) {

    cout << a+b << endl;
}


void add(float a,float b,float c) {
cout << a+b+c << endl;
}

void add (string str,string str1) {
    cout << str+str1 << endl;
}

int main() {
    float a,b,c;
    cin >> a >> b >> c;
    add(a,b);
    add(c,a);
    return 0;

}