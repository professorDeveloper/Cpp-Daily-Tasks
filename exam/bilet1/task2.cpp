//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a =7;
    int b =4;
    int c =5;


    if(a+b > b+c && a+b >c+a) {
        cout << "Eng katta yig`indi:" << a << "va" << b << endl;
    }else if(a+c >c+b) {
        cout << "Eng katta yig`indi :" << a << "va" << c << endl;
    }else {
        cout << "Eng katta yig`indi :" << b << "va" << c << endl;
    }



}