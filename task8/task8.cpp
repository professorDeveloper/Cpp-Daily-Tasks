//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

int main() {
    float salary;
    float minimumWage;
    float tax = 0;
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter your minimum wage: ";
    cin >> minimumWage;
    if (salary < 5 * minimumWage) {
        tax = salary * 0.09;
    } else if (5 * minimumWage < salary && salary < 10 * minimumWage) {
        tax = salary * 0.16;
    } else if (salary > 10 * minimumWage) {
        tax = 0.23 * salary;
    }

    cout << tax << endl;


    //Task2
    int number = 101;
    if (number == 101) {
        cout << "O`t ochirish hizmati" << endl;
    } else if (number == 102) {
        cout << "Militsiya hizmati" << endl;
    } else if (number == 103) {
        cout << "tez tibbiy yordam hizmati " << endl;
    } else if (104 == number) {
        cout << "Tabiy gaz hizmati" << endl;
    }



    return 0;
}
