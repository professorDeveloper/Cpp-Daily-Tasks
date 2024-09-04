//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

string getNumberType(int number) {
    if (number == 0) {
        return "0 Soni";
    } else if (number < -9 && number > -100) {
        return "2 Xonali manfiy";
    } else if (number < -99 && number > -1000) {
        return "3 Xonali manfiy";
    } else if (number < 0 && number > -10) {
        return "1 xonali manfiy";
    } else if (number < 10) {
        return "Bir Xonali Musbat";
    } else if (number > 9 && number < 100) {
        return "2 xonali  Musbat";
    } else if (number > 99 && number < 1000) {
        return "3 xonali  Musbat";
    };
}


string checkNumber(int number) {
    if (number < 10 && number > 0) {
        return "Bir Xonali ";
    } else if (number > 9 && number < 100) {
        return "2 xonali ";
    } else if (number > 99 && number < 1000) {
        return "3 xonali  ";
    } else if (999 < number && number < 10000) {
        return "4 xonali ";
    } else if (number == 0) {
        return "0 Soni";
    }
}

string checkNumberFormat(int number) {
    if (number == 0) {
        return "";
    } else if (number % 2 == 0) {
        return "Juft son";
    } else if (number % 2 != 0) {
        return "Toq Son";
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << getNumberType(number) << endl;
    cout << checkNumber(number) + checkNumberFormat(number) << endl;
    main();
    return 0;
}
