//
// Created by azamov on 9/21/2024.
//
#include <iostream>
#include <ctime>
using namespace std;
#include <cmath>

int getArrBSize(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    srand(time(0));

    int n;
    int arr1[n];
    int arr2[n];

    int arr3[n];

    for (int i = 0; i < n; i++) {
        arr1[i] = getRandomNumber(24, 999);
        arr2[i] = getRandomNumber(24, 999);
    }

    for (int i = 0; i < n; i++) {
        arr3[i] = max(arr1[i], arr2[i]);
    }


    //task2
    int arrA[n];
    for (int i = 0; i < n; i++) {
        arrA[i] = arr2[i];
    }
    int bSize =getArrBSize(arrA, n);
    int arrB[bSize];
    for (int i = 0; i < n; i++) {
        if (arr1[i] % 2 == 0) {
            arrB[i] = arrA[i];
        }
    }

    for (int i = 0; i < bSize; i++) {
        cout << arrB[i] << " ";
    }
    cout << endl;
    cout << "Juft sonlar Miqdori : " << bSize << endl;
}
