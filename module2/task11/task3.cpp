//
// Created by azamov on 9/29/2024.
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool checkTub(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    return count == 2;
}


int main() {
    vector <int> array= {7,5,11,31,27,19};
    vector<int> tubArray;
    for (int i = 0; i < array.size(); i++) {
        if (checkTub(array[i])) {
            tubArray.push_back(array[i]);
        }
    }

    int temp ;
    for (int i = 0; i < tubArray.size(); i++) {
        for (int j = 0; j < tubArray.size(); j++) {
            if(tubArray[j] > tubArray[i]) {
                temp = tubArray[i];
                tubArray[i] = tubArray[j];
                tubArray[j] = temp;
            }
        }
    }

    for (int i = 0; i < tubArray.size(); i++) {
        cout << tubArray[i] << " ";
    }
    cout << endl;
}
