//
// Created by azamov on 8/30/2024.
//
#include <iostream>
using namespace std;

int main () {

    int a,b;
    a=5;
    b=10;

    bool result =a*5==b;

    cout<<result<<endl;

    bool resultB =a*4==b || b*4==a;

    cout<<resultB<<endl;

    return 0;
}