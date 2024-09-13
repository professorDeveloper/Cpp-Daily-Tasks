//
// Created by azamov on 9/12/2024.
//
#include <iostream>
using namespace std;
int main(
    ) {
    int k =4;
    int n=25;
    int result= n;
    for (int i = 1; i <= k; i++) {
        result = result * n;
    }
    cout << result << endl;
}