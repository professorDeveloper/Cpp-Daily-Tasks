//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;
#include <ctime>

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
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumbers(24, 68);
    }
    showArray(arr, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[n - 1] < arr[i]) {
            sum += arr[i];
        }
    }

    //task2
    int count =0;
    for (int i = 0; i < n; i++) {
        if (arr[i]%4 ==0 || arr[i]%3==0) {
            count++;
        }
    }
    if (n == count) cout << "hello" << endl;
    else cout << "salom" << endl;


}
