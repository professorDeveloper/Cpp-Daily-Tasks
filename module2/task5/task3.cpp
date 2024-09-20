//
// Created by azamov on 9/19/2024.
//
#include <ctime>
#include <iostream>
using namespace std;

int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter th number : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = getRandomNumber(20, 25);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = arr[0] + arr[1] + arr[2];
    cout << sum << endl;

    //Task3
    int summa = arr[n - 1] + arr[n - 2] + arr[n - 3];
    cout << summa << endl;

    int countToq =0;
    int countJuft=0;

    for (int i = 0; i < n; i++) {
        if (arr[i]%2 == 0) {
            countJuft++;
        }else {
            countToq++;
        }
    }

    if (countJuft <countToq) {
        cout << boolalpha << true << endl;
    }else {
        cout << boolalpha << false << endl;
    }

}
