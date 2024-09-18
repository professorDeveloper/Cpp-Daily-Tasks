//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;
int getPlusNums(int a,int b) {
    return a+b;
}

int getNumsCount(string str) {
    int count =0;
    for(int i=0;i<str.length();i++) {
        if(isdigit(str[i]))count++;
    }
    return count;
}

int getUpperSym(string str) {
    int count=0;
    for(int i=0;i<str.length();i++) {
        if(isupper(str[i]))count++;
    }
}


int main() {
    string str= "Hello Wor4123ld";
    cout<<getPlusNums(3,4)<<endl;
    cout<<getNumsCount(str)<<endl;
    cout<<getUpperSym(str)<<endl;

}