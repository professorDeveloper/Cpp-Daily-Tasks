//
// Created by azamov on 8/29/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter b number :";
    cin >> b;
    int result = (a % 2 == 1 && b % 2 == 1) && (a>99 && b>9 && a<100 && b<100); ;
    cout << result << endl;

    //task2

    int c=2,d=3;

    int result2 = (c>9 && d>9 && c<100 && d<100) && c==d  ;

    cout << result2 << endl;
}
