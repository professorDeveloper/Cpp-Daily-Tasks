//
// Created by azamov on 9/27/2024.
//
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter n :";
    cin >> n;
    vector<float> arr(n);
    for (int i = 0; i < n; i++) {
        cout << i << ":";
        cin >> arr[i];
    }
    float max =INT_MIN;
    int index=-1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    cout << index << endl;
    cout << max << endl;


}
