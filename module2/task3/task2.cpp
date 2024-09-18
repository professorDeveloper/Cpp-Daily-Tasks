//
// Created by azamov on 9/18/2024.
//
#include <iostream>
using namespace std;
void getShowNums(int num) {
    for (int i = 1; i <= num; i++) {
        cout << i << endl;
    }
}

void getBolNum(int number) {
    for (int i = 1; i <= number; i++) {
        if (number%i == 0) {
            cout << i << endl;
        }
    }
}
int main() {
    int number;
    cin >> number;
    getShowNums(number);
    getBolNum(number);

}