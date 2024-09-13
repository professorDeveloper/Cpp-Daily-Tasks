//
// Created by azamov on 9/11/2024.
//
#include <iostream>
using namespace std;

int getCount(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a = 24;
    int b = 44;
    if (getCount(a) > getCount(b)) {
        cout << a << endl;
    } else cout << b << endl;


    int sum = 0;
    for (int i = a + 1; i < b; i++) {
        sum += i;
    }
    cout << sum << endl;


    return 0;
}
