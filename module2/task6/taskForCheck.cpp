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


    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

}