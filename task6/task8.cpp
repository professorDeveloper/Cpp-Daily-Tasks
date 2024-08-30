//
// Created by azamov on 8/30/2024.
//
#include <iostream>

using namespace std;

int main() {
    int a = 23;

    int result = a % 5 != 0;
    cout << result << endl;
    //task2

    int b = 12;
    bool resultB = b % 4 == 0 && b % 3 != 0;

    cout << resultB << endl;

    //task3
    int x= 4;
    int y = 5;
    bool resultX= x>y;
    cout << resultX << endl;
    //Task4
    int z=4;
    int w=5;
    bool resultZ= z==w;

    cout << resultZ << endl;
}
