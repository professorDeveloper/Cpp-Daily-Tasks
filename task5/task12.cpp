//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;
 int main () {

     int x,y,a,b;
     cout<<"Enter x number : ";
     cin>>x;
     cout<<"Enter y number : ";
     cin>>y;
     cout << "Enter a : ";
     cin >>a;
     cout << "Enter b : ";
     cin >>b;

     int bResult =b/y;
     int aResult =a/x;

     int result=bResult-aResult;
     cout << result << endl;



     return 0;
 }