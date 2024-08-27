//
// Created by azamov on 8/26/2024.
//
#include <iostream>
using namespace std;

int main() {

    int number=2456;
    int birlar = number % 10;  // birlar xonasi
    int onlar = (number / 10) % 10;  // o'nlar xonasi
    int qolgan = number / 100;  // qolgan raqamlar
    // cout << birlar << endl;
    // cout << onlar << endl;
    // cout << qolgan << endl;
    // Almashtirilgan raqam
    int result = (qolgan * 100) + (birlar * 10) + onlar;
    cout << result << endl;

    //Task2
    int number2=245;
    int yuzlar = number2 % 10;
    int onlar2 = (number2 / 10) % 10;
    int qolgan2 = number2 / 100;
    //answer =213
    cout << yuzlar << endl;//3
    cout << onlar2 << endl;//2
    cout << qolgan2 << endl;//1
    int result2=(onlar2 * 100) + (qolgan2 * 10) +yuzlar;
    cout << result2 << endl;


    return 0;
}