//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int getRandom(int start, int end) {
    return rand() %  (end - start + 1) + start;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandom(1, 10);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arrB[n];
    for (int k = 0; k < n; ++k) {
        arrB[k] = 0;
        for (int i = k; i < n; ++i) {
            arrB[k] += arr[i];
        }
    }


    for (int i = 0; i < n; i++) {
        cout << arrB[i] << " ";
    }
    cout << endl;

}
