//
// Created by azamov on 9/14/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Task
    for (int i = 1; i <= n; i++) {
        int start = i * 9 + 6;
        for (int j = 1  ; j <= i; j++) {
            cout <<  j+start-1 << " ";
        }
        cout << endl;
    }
}
