//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;


bool checkTub(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count == 2;
}

int getRandomNumber(int start, int end) {
    return rand() % (start - end + 1) + start;
}

int main() {
    srand(time(0));
    int m;
    int n;
    int arr[m][n];
    cout << "Enter m:";
    cin >> m;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = getRandomNumber(1, 10);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int min = arr[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (checkTub(arr[i][j])) {
                arr[i][j] += min;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }}
