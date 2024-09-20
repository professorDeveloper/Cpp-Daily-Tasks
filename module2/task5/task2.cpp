//
// Created by azamov on 9/19/2024.
//
#include <iostream>
using namespace std;


int main() {
    int array[] = {24, 22, 133, 456, 99};
    int size = sizeof(array) / sizeof(array[0]);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 3 == 0 && array[i] % 7 == 0) {
            count++;
        }
    }


    int array2[] = {24, 11, 44, 55, 67, 88, 120, 421};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int counter = 0;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if ((array2[i] > 9 && array2[i] < 100) && array2[i] % 2 != 0) {
            counter = counter + 1;
            sum = sum + array[i];
        }
    }


    int array3[] = {24, 22, 133, 456, 99};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    int firstItem = array3[0];
    array3[0] = array3[size3 - 1];
    array3[size3 - 1] = firstItem;

    for (int i = 0; i < size3; i++) {
        cout << array3[i] << " ";
    }
}
