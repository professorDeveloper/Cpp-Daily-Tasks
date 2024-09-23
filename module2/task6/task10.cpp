//
// Created by azamov on 9/23/2024.
//
#include <iostream>
#include <limits>
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
        int min = arr[i][0];
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        cout << i << "- ustun min num :" << min << endl;
    }

    //Task2
    for (int i = 0; i < n; i++) {
        int min = numeric_limits<int>::max();
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        cout << "Ustun " << i + 1 << ": " << min << endl;
    }
    //Task3

    int count = 0;
    for (int i = 0; i < m; i++) {
        bool isAllJuft = true;

        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 != 0) {
                isAllJuft = false;
                break;
            }
        }
        if (isAllJuft) count++;
    }
    cout << "Hamma elementi juft bo'lgan qatorlar soni: " << count << endl;

}
