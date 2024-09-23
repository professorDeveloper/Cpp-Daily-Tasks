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
            arr[i][j] = getRandom(66, 99);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int min = arr[0][0];
    int minIndexRow = 0;
    int minIndexColumn = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                minIndexRow = i;
                minIndexColumn = j;
            }
        }
    }
    cout << "[" << minIndexRow << "][" << minIndexColumn << "]" << endl;

    //Task2
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        cout << i << "-qator yig`indisi :" << sum << endl;
    }

    //Task3
    for (int i = 0; i < m; i++) {
        int toqCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 != 0) {
                toqCount++;
            }
        }
        cout << i << "-qator Toq sonlar miqdori:"<< toqCount << endl;
    }
    return 0;
}
