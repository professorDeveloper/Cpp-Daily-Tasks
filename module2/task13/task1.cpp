//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;

int getRandom(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    int m =3;
    int n =4;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = getRandom(1, 12);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        int sum =0;
        for (int j = 1; j < n; j+=2) {
            sum += arr[i][j];
        }
        cout << i << "-qator  natija:" << sum << endl;
    }


}
