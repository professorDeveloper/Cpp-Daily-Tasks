//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a = 24;
    int b = 32;
    int min = a > b ? b : a;
    int max = a < b ? b : a;
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}
