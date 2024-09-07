//
// Created by azamov on 9/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int year = 2016;
    bool isLeapYear = (year % 4 == 0);
    isLeapYear = isLeapYear && (year % 100 != 0 || year % 400 == 0);
    if (isLeapYear) {
        cout << "Kabisa Yili" << endl;
    } else cout << "Kabisa yili emas" << endl;

    //task2
    int rating;
    cout << "Enter Rating: ";
    cin >> rating;
    if (rating > 0 && rating < 55) {
        cout << "Qoniqarsiz" << endl;
    } else if (rating > 56 && rating < 70) {
        cout << "qoniqarli" << endl;
    } else if (rating > 70 && rating < 85) {
        cout << "Yaxshi" << endl;
    } else if (rating > 85 && rating < 100) {
        cout << "A`lo" << endl;
    }else {
        cout << "Bunday Ballar mavjud emas" << endl;
    }
}
