//
// Created by azamov on 9/20/2024.
//
#include <iostream>
using namespace std;

int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    srand(time(0));
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(20, 51);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        arr[i] *= 3;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    //Task2

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            count++;
        }
    }
    if (count == n) {
        cout << true << endl;
    } else cout << false << endl;


    //Task3
    int item1 = arr[0];
    int item2 = arr[1];
    int item3 = arr[2];
    if ((item1 > 9 && item2 > 9 && item3 > 9) && (item1 < 100 && item2 < 100 && item3 < 100)) cout << true << endl;
    else cout << false <<  endl;
}
