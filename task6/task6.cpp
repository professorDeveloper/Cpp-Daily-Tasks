//
// Created by azamov on 8/30/2024.
//
#include <iostream>
using namespace std;
int main () {

    int number =23;
    int a =number%10;
    int b=number/10;
    int result =a>5 && b>5;
    cout<<result<<endl;

    //task2

    int numberA= 21;
    int resultA =numberA%3==0;
    cout<<resultA<<endl;

    //task3
    int numberB= 21;
    int resultB =numberB%7==0;
    cout<<resultB<<endl;
    return 0;
}