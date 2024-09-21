//
// Created by azamov on 9/21/2024.
//
#include <iostream>
using namespace std;

int getRandom(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = getRandom(44, 99);
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = getRandom(44, 99);
    }
    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i] * arr2[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    //task2
    string arr[n];
    for (int i = 0; i < n; i++) {
        cout << " Enter String:";
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        string str = arr[i];
        if (str[0] == '$') {
            count++;
        }
    }
    cout << count << endl;
    //Task3
    for (int i = 0; i < n; i++) {
        string item = arr[i];
        bool isUpper = true;
        for (int j = 0; j < item.size(); j++) {
            if (!isupper(item[j])) {
                isUpper = false;
                break;
            }
        }
        if (isUpper) {
            cout << item << endl;
        }
    }
}
