//
// Created by azamov on 9/24/2024.
//
#include <iostream>
using namespace std;
#include <vector>

bool commonEnd(vector<int> a, vector<int> b) {
    return a[0] == b[0] || a[a.size() - 1] == b[a.size() - 1];
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << boolalpha << commonEnd(a, b) << endl;
}
