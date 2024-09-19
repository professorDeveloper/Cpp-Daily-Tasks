//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;

int calculate(int num1, int num2) {
    return num1 + num2;
}

int calculate(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}


void getAmountDigit(int num) {
    int count = 0;
    while (true) {
        count++;
        num = num / 10;
        if (num == 0) {
            break;
        }
    }
    cout << count << endl;
}

void getAmountDigit(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    cout << count << endl;
}


int main() {
    int num1, num2, num3;
    cout << "Please enter numbers:" << endl;
    cin >> num1 >> num2 >> num3;
    cout << calculate(num1, num2) << endl;
    cout << calculate(num1, num2, num3) << endl;


    getAmountDigit(244);
    getAmountDigit("stringHello1231:D4");

}

