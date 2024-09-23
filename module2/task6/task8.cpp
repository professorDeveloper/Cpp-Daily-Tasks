//
// Created by azamov on 9/23/2024.
//
#include <iostream>
using namespace std;

int getRandom(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    srand(time(0));
    int m;
    cout << "Enter m:";
    cin >> m;
    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = getRandom(22, 66);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Task1
    for (int i = 0; i < m; i += 2) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Task2
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j += 2) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Task3
    cout << "Enter k:";
    int k;
    cin >> k;
    if (k < n) {
        int sum = 0;
        int mult = 1;
        for (int i = 0; i < m; i++) {
            sum += arr[i][k];
            mult *= arr[i][k];
        }

        cout << "Sum :" << sum << endl;
        cout << "Sum :" << mult << endl;
    } else {
        cout << "Invalid Input" << endl;
    }
}
