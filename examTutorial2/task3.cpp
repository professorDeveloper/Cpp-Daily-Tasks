//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter arr[" << i << "] :";
        cin >> arr[i];
        cout << endl;
    }

    float max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "MaxIndex:" << maxIndex;
}
