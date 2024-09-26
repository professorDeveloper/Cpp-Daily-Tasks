//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {24, 31, 56, 1, 7, 5};
    //Sort
    for (int i = 0; i < 6; i++) {
        int x = arr[i];
        for (int j = 0; j < 6; j++) {
            if (x < arr[j]) {
                x = arr[j];
                arr[j] = arr[i];
                arr[i] = x;
            }
        }
    }


    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

