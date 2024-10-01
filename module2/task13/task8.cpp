//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int getRandom(int start, int end) {
    return rand() % (end - start + 1) + start;
}

bool checkTub(int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count == 2;
}

int main() {
    int n;
    cout << "Enter n :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandom(20, 99);
    }
    for (int i = 0; i < n; i++) {
        if (checkTub(arr[i])) {
            arr[i] += arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
