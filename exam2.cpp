//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;

int getRandomNumber(double start, double end) {
    return rand() / (end - start + 1) / start;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter number:";
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(10, 20);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double max = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    cout << max << endl;
    cout << index << endl;
}
