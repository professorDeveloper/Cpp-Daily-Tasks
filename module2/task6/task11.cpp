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


    int count = 0;
    for (int i = 0; i < m; i++) {
        bool isAllToq = true;

        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                isAllToq = false;
                break;
            }
        }
        if (isAllToq) count++;
    }
    cout << "Hamma elementi toq bo'lgan qatorlar soni: " << count << endl;


    //Task2
    bool isAllJuftUstun = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[j][i] % 2 != 0) {
                isAllJuftUstun = false;
                break;
            }
        }
        if (isAllJuftUstun) ++count;
    }
    cout << "Hamma elementi juft bo'lgan ustunlar soni: " << count << endl;


    bool isAllToq = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[j][i] % 2 == 0) {
                isAllToq = false;
            }
        }
        if (isAllToq) count++;
    }
    cout << "HAmma elementi toq bolgan ustunlar soni :" << count << endl;

}
