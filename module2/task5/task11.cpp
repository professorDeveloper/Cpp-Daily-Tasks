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
    int n;
    int arr[n];
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(69, 99);
    }

    int firstJuft = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            firstJuft = arr[i];
            break;
        }
    }

    if (firstJuft != 0) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                arr[i] *= firstJuft;
            }
        }
    } else cout << "Massive da juft son yo`q" << endl;

    //Task2

    int firstToq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            firstToq = arr[i];
            break;
        }
    }
    if (firstToq != 0) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                arr[i] *= firstToq;
            }
        }
    } else {
        cout << "Massive da tpq son yo`q" << endl;
    }

    //task3
    int min = arr[0];
    for (int i = 0; i < n; i+=2) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
}
