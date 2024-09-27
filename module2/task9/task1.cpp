//
// Created by azamov on 9/26/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n1,n2 ;
    n1 =3;
    n2 =2;

    string str ="helloWorld";
    string str2 ="hiBob24";

    string newStr =str.substr(0,n1)+str2.substr(str2.size()-n2);

    cout<<newStr<<endl;
}
