//
// Created by azamov on 8/29/2024.
//
#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a number :";
    cin >> a;

    int result = a % 2 == 0 && (a > 999 && a <=9999);

    cout << result << endl;

    //Task

    int b, c;
    cout << "Enter b number :";
    cin >> b;
    cout << "Enter c number :";
    cin >> c;
    int result2 = b % 2 != 0 && c % 2 != 0;

    cout << result2 << endl;
    //Task3

    int d, e;
    cout << "Enter d number :";
    cin >> d;
    cout << "Enter e number :";
    cin >> e;
    int result3 = d % 2 != 0 && e % 2 != 0;

    cout << result3 << endl;
}
