//
// Created by azamov on 9/24/2024.
//
#include <algorithm>
#include <iostream>
#include <ranges>
using namespace std;
#include <vector>

vector<int> reverse3(vector<int> v) {
    reverse(v.begin(), v.end());
    return v;
}

int main() {
    vector<int> v = {2,4,5};

    vector<int> v2 = reverse3(v);

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
}
