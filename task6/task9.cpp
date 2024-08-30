//
// Created by azamov on 8/30/2024.
//
#include <iostream>
using namespace std;

 int main() {
     int a;
     int b;
     int c;
     cout << "Enter a number: ";
     cin >> a;
     cout << "Enter b number: ";
     cin >> b;
     cout << "Enter c number: ";
     cin >> c;

     bool result =a>b && c<a;
     cout << result << endl;

     //task2
     bool resultC =a<c&& b<c;

     cout << resultC << endl;


 }