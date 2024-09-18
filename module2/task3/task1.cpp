//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

void getMaxNum(int num1,int num2,int num3,int num4,int num5) {
    int max1= max(num1,num2);
    int max2= max(num3,num4);
    int max3= max(num5,max1);
    int resultMax = max(max2,max(max1,max3));
    int minResult = min(num1,min(num2,min(num3,min(num4,num5))));
    cout << "Max result is: " << resultMax << endl;
    cout << "Min result is: " << minResult << endl;
}

void getPowPlus(int num1,int num2,int num3,int num4,int num5) {
    int reuslt =num1+num2+num3+num4+num5;
    int resultMult =num1*num2*num3*num4*num5;
    cout << "Reuslt is: " << reuslt << endl;
    cout << "Mult is: " << resultMult << endl;
}


int main() {
    int num1,num2,num3,num4,num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    getMaxNum(num1,num2,num3,num4,num5);
}
