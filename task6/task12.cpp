//
// Created by azamov on 8/30/2024.
//
#include <iostream>
using namespace std;
int main () {

    int a =4;
    int b= 5;
    int c=6;
    int d=7;
    bool result =a==b+30;
    cout << result << endl;

    //task2
    bool resultB =b>c && b>a && b>d && b%2==0;
    cout << resultB << endl;

    //task3
    bool resultC= c<b && c<a && c<d && c%2==0;
    cout << resultC << endl;


    return 0;
}
