//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    string amal;
    cout << "Please enter number:" << endl;
    cin >> number1;
    cout << "Please enter type:" << endl;
    cin >> amal;
    cout << "Please enter number:" << endl;
    cin >> number2;
    if (amal == "+") {
        cout << number1 + number2 << endl;
    } else if (amal == "-") {
        cout << number1 - number2 << endl;
    } else if (amal == "*") {
        cout << number1 * number2 << endl;
    } else if (amal == "/") {
        cout << number1 / number2 << endl;
    } else {
        cout << "Invalid Input" << endl;
    }


    //TAsk2
    int num =121;
    int birlar= num%10;
    int onlar =num/10%10;
    int yuz=num/100%10;

    if (num >99 && num <999) {
        if(yuz<onlar<birlar) {
            cout << "Osuvchi" << endl;
        }else if (birlar < onlar < yuz) {
            cout << "kamayuvchi " << endl;
        }
    }else {
        cout << "Invalid Input" << endl;
    }

    main();
}
