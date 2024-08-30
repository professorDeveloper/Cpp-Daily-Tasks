//
// Created by azamov on 8/30/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 24;

    int result = a % 3 == 0 && a % 8 == 0;
    cout << result << endl;
    //Task2

    int b = 25;
    int resultB = b % 7 == 0 || b % 9 == 0;

    cout << resultB << endl;

    int c =24;
    int resultC =c%3==0;
    cout << resultC << endl;

    return 0;
}
