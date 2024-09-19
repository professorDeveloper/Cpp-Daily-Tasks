//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;

int recursive(int n) {
    if (n == 1) return 1;
    return n * n * n + recursive(n - 1);
}


int main() {
    cout << recursive(10) << endl;
}