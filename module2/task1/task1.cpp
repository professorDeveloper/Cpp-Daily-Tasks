//
// Created by azamov on 9/15/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    f = 2;

    int max1 = max(a, b);
    int max2 = max(c, d);
    int max3 = max(e, f);

    int result = max(max1, max2);
    cout << max(result, max3) << endl;


    //task2
    int min1 = min(a, b);
    int min2 = min(c, d);
    int min3 = min(e, f);
    int resultMin = min(min1, min(min2, min3));

    cout << resultMin << endl;


    //task3
    double num =24.4;
    cout << round(num) << endl;
}
