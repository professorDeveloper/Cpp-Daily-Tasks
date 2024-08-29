//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;

int main () {
    int hour =20;
    int minute =23;
    int second = 24;
    int hourToMinute =hour*60;
    int secondToMinute =second/60;
    int totalMinute =hourToMinute+minute+secondToMinute;

    cout << totalMinute << endl;
}