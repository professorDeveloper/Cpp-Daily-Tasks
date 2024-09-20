//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;

int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int getMinItemIndex(int arr[], int size) {
    int min = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

int getMaxItemIndex(int arr[], int size) {
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter number:";
    cin >> n;
    int arr[4];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(50, 99);
    }


    bool isSorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    cout << boolalpha << isSorted << endl;

    //Task2
    bool isReversed = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            isReversed = false;
        }
    }
    cout << boolalpha << isReversed << endl;

    //task3

    int maxItemIndex=getMaxItemIndex(arr, n);
    int minItemIndex=getMinItemIndex(arr, n);

    int item =arr [ maxItemIndex ];
    arr[maxItemIndex] = arr [ minItemIndex ];
    arr[ minItemIndex ] = item;


}
