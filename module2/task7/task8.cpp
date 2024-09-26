//
// Created by azamov on 9/24/2024.
//
#include <iostream>
#include <vector>
using namespace std;

int matchUp(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size())
        return 0;
    int count = 0;
    for (int i = 0; i < v1.size(); i++) {
        if (abs(v1[i] - v2[i]) == 1 || abs(v2[i] - v1[i]) == 2) {
            count++;
        }
    }
    return count;
}
int main() {

    cout << matchUp({1,2,3},{2,3,10}) << endl;
    cout << matchUp({1,2,3},{2,3,5}) << endl;
    cout << matchUp({1,2,3},{2,3,3}) << endl;

}