//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;

int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int getMaxItem(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMinItem(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int main() {
    srand(time(0));
    cout << "Enter number:";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(22, 59);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int item1 = arr[0];
    int item2 = arr[1];

    int item3 = arr[n - 1];
    int item4 = arr[n - 2];

    if (item1 % 2 == 0 && item2 % 2 == 0 && item3 % 2 != 0 && item4 % 2 != 0) {
        cout << boolalpha << true << endl;
    } else cout << boolalpha << false << endl;

    //task2

    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << min << endl;


    //task3
    int max = getMaxItem(arr, n);
    int min2 = getMinItem(arr, n);
    cout << max + min2 << endl;
}
