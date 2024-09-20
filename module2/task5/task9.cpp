//
// Created by azamov on 9/21/2024.
//
#include <iostream>
using namespace std;

int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter number :" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(50, 99);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum << endl;


    //Task2

    showArray(arr, n);

    int index = 0;
    int index2 = 1;

    int maxSum = arr[index] + arr[index2];
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] + arr[i + 1] > maxSum) {
            maxSum = arr[i] + arr[i + 1];
            index = i;
            index2 = i + 1;
        }
    }
    cout << arr[index] << endl;
    cout << arr[index2] << endl;

    //task3

    for(int i = 1; i < n; ++i) {
        if(arr[i] > arr[i-1]) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
