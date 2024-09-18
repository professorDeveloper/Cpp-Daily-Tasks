//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;

int getNumCount(int n) {
    int count = 0;
    //n=123;
    while (true) {
        ++count;//count =1, 2,3
        n = n / 10;// n = 123/10 = 12; n =12/10 =1; n=1 /10 =0
        if (n == 0) {//false,false,true
            break; // done
        }
    }
    return count;
}

int getToq(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }
    return count;
}

bool getTub(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    if (count == 2) true;
    else return false;
}

int main() {
    int number =241;
    int a =24;
    int b=123;
    cout << getNumCount(number) << endl;
    cout << getToq(a,b) << endl;
    cout << getTub(number) << endl;
    return 0;
}
