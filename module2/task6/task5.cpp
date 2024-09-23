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
    int k;
    cout << "Enter k:";
    cin >> k;

    if (k < m) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[k][j] % 2 == 0) {
                count++;
            }
        }
        cout << k << " -qator juft count:" << count << endl;
    } else {
        cout << k << " is not a valid input." << endl;
    }

    //Task2

    if (k < m) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (arr[k][j] % 2 != 0) {
                sum += arr[k][j];
            }
        }
        cout << k << " -qator toq sum:" << sum << endl;
    } else {
        cout << k << " is not a valid input." << endl;
    }

    //task3
    int count = 0;
    for (int j = 0; j < n; j++) {
        if (arr[m - 1][j] % 2 == 0) {
            count++;
        }
    }
    cout << count << endl;
}
