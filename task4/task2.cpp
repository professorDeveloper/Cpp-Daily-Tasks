//
// Created by azamov on 8/26/2024.
//
#include <iostream>

using namespace std;
#include <cmath>

int main() {
    int a = 12345;

    int ming = (a / 1000) % 10;

    cout << ming << endl;


    //Task2

    int b = 2456;

    int yuzlar = (b / 100) % 10;

    cout << yuzlar << endl;


    //Tasak3
    int c = 555;

    int yuzlarq = c / 100;
    int onnlar = (c / 10) % 10;
    int birlar = c % 10;

    cout << yuzlarq + onnlar + birlar << endl;


    //Task4

    return 0;

    return 0;
}
