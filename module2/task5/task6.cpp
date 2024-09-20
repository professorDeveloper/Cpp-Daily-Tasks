//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;

int getRandomNumbers(int start, int end) {
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
    cout << "Enter number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumbers(-24, 40);
    }
    showArray(arr, n);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 9 && arr[i] < 100) {
            arr[i] += 100;
        }
    }
    showArray(arr, n);

    //Task2

    int count = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        } else {
            count2++;
        }
    }

    cout << "Mustbatlar soni : " << count << endl;
    cout << "Manfiylar soni : " << count2 << endl;


    //Task3
    int item = arr[0];
    int miqdor = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < item) {
            miqdor++;
        }
    }
    cout << "Counter : " << miqdor << endl;
}
