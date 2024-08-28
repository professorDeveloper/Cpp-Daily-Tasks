//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;

int main() {
    //Task1
    int week = 2;
    int hour = 24;
    int day = (week * 7) + (hour / 24);
    cout << day << endl;

    //Task2
    int minute = 60;
    int hour2 = 22;
    int hourToMinute = hour2 * 3600;
    int result = hourToMinute + (minute * 60);
    cout << result << endl;
}
