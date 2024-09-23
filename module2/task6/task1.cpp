//
// Created by azamov on 9/21/2024.
//
#include <iostream>
using namespace std;

int getRandomNumber(int start, int end) {
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
    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = getRandomNumber(67, 99);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 != 0) {
                count++;
            }
        }
    }
    cout << "Toq elementlar soni" << count << endl;

    int countJuft = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    cout << "Juft elementlar soni" << countJuft << endl;

    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    cout << "Total sum  elements: " << sum << endl;
}
