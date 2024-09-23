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


    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }


    //task2
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 != 0) {
                count++;
            }
        }
        cout << "Toq element count : " << count << endl;
    }

    //Task3
    for (int i = 0; i < m; i++) {
        int sum2 = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 != 0) {
                sum2 += arr[i][j];
            }
        }
        cout << i << "- qator toq sum ->" << sum2 << endl;
    }
}
