//
// Created by azamov on 9/23/2024.
//
#include <iostream>
using namespace std;
#include <vector>

bool firstLat6(vector<int> v) {
    return v[0] == 6 || v[v.size() - 1] == 6;
}


int main() {
    vector<int> v = {2, 4, 5, 6};
    cout << firstLat6(v) << endl;

    //Task2
}
