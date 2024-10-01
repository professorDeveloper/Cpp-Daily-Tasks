//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int getRand(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRand(10, 18);
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = arr[0];
    int indexMin = 0;
    int indexMax = 0;
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            indexMin = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            indexMax = i;
        }
    }
    // a = a + b;
    // b = a - b;
    // a = a - b;  // its not Good idea for this)
    int temp = arr[indexMin];
    arr[indexMin] = arr[indexMax];
    arr[indexMax] = temp;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
