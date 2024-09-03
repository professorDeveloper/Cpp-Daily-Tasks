//
// Created by azamov on 9/1/2024.
//
#include <iostream>
using namespace std;

int main () {
    int number ;
    cout<<"Enter a number : ";
    cin>>number;
    if (number%2==0) {
        cout << number+10 << endl;
    }else {
        cout << number << endl;
    }
    //task2

    if (number%2!=0) {

        cout << number-10 << endl;
    }else {
        cout << number << endl;
    }

    //task3
    if(number>9 && number<100) {
        cout << number+100 << endl;

    }else {
        cout << number << endl;
    }
}
