//
// Created by azamov on 9/24/2024.
//
#include <iostream>
#include <vector>
using namespace std;

bool either24(vector<int> v) {
    bool has22 = false, has44 = false;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == 2 && v[i + 1] == 2) {
            has22 = true;
        }
        if (v[i] == 4 && v[i + 1] == 4) {
            has44 = true;
        };
    }

    return has22 && !has44 || (!has22 && has44);
}

int main() {
    vector<int> v;
    cout << either24({1, 2, 2}) << endl;
    cout << either24({4, 4, 1}) << endl;
    cout << either24({4, 4, 1, 2, 2}) << endl;
}
