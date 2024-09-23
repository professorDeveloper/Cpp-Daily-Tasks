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
    int k;
    cout << "enter k:";
    cin >> k;
    for (int i = 0; i < m; i++) {
        arr[i][k] += arr[i][k];
        cout << arr[i][k] << " ";
    }
    cout << endl;


    //Task2
    for (int i = 0; i < n; i++) {
        int natija = arr[k][i] * 3;
        cout << natija << " ";
    }
    cout << endl;



    //task3
    for (int i = 0; i < m; i++) {
        int show =arr[i][k]+20;
        cout << show << " ";
    }
    cout << endl;
}
