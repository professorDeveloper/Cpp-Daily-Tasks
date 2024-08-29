//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int x = 2;
    int result = x; // a^1
    result = result * result;
    result = result * result;
    result = result * result;
    result = result * result;


    cout << result/x << endl;
    cout << pow(x, 15) << endl;//For check

    return 0;
}
