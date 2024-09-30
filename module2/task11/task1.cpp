//
// Created by azamov on 9/29/2024.
//
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 5, 6, 1, 34, 3, 5, 6, 2, 4,4};
    int size = std::size(arr);
    int mostUsedItem = arr[0];
    int maxCount = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostUsedItem = arr[i];
        }
    }

    cout << mostUsedItem << endl;
}
