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
    int n;
    cout << "enter m:";
    cin >> m;
    cout << "enter n:";
    cin >> n;
    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = getRandom(24, 99);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int count = 0;
    for (int i = m - 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    cout << count << endl;

    for (int j = 0; j < n; j++) {
        cout << matrix[0][j] << " ";
    }
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << matrix[2][j];
    }

    //Task3
    int max = matrix[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    cout << max << endl;
}
