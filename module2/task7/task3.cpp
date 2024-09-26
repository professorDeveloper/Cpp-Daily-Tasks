//
// Created by azamov on 9/24/2024.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft3(vector<int> vector) {
    if (vector.size() == 3) {
        int item = vector[0];
        vector.erase(vector.begin(), vector.begin() + 1);
        vector.insert(vector.end(), item);
        return vector;
    } else {
        cout << "Array size 3 ga teng bo`lishi kerak" << endl;
        return vector;
    }
    return vector;
}

int main() {
    vector<int> vectorA = {1, 2, 3};

    vector<int> newVec = rotateLeft3(vectorA);

    for (int i = 0; i < newVec.size(); i++) {
        cout << newVec[i] << " ";
    }
    cout << endl;
}
