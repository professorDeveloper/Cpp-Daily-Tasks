//
// Created by azamov on 10/1/2024.
//
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    int max1;
    int max2;
    if (a > b && a > c && b > c) {
        max1 = a;
        max2 = b;
    } else if (b > a && b > c && a > c) {
        max1 = b;
        max2 = a;
    } else if (c > a && c > b && a > b) {
        max1 = c;
        max2 = a;
    } else if (c > b && c > a && b > a) {
        max1 = c;
        max2 = b;
    } else if (a > b && c > b) {
        max1 = a;
        max2 = c;
    }

    int result = max1 + max2;
    cout << result << endl;
    return 0;
}
