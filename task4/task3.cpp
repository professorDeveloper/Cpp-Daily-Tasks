//
// Created by azamov on 8/26/2024.
//

#include <iostream>

using namespace std;

int main() {
    //Task1
    int number;
    cout << "Enter a number:";
    cin >> number;
    int birlar = number % 10;
    int onlar = number / 10 % 10;
    int yuzlar = number / 100;
    cout << birlar * onlar * yuzlar << endl;

    //Task2
    int number2 = 23;
    int birlar2 = number2 % 10;
    int onlar2 = number2 / 10 % 10;
    cout << birlar2 * onlar2 << endl;


    //Task3
    int number3 = 12345;
    int birlar3 = number3 % 10;
    int onlar3 = number3 / 10 % 10;
    int yuzlar3 = number3 / 100 % 10;
    int minglar = number3 / 1000 % 10;
    int onminglar = number3 / 10000 % 10;
    // cout<< birlar3 << endl;
    // cout<< onlar3 << endl;
    // cout<< yuzlar3 << endl;
    // cout<< minglar << endl;
    // cout<< onminglar << endl;
    //
    cout << birlar3 + onlar3 + yuzlar3 + minglar + onminglar << endl;


    //Task4
    int number4 = 123;
    yuzlar = number4 / 100; //
    cout << yuzlar << endl;
    onlar = number4 - yuzlar * 100; //
    cout << onlar << endl;
    birlar = onlar / 10; //
    cout << birlar << endl;
    int e = onlar - birlar * 10; //
    int f = yuzlar + 10 * birlar + 100 * e;

    cout << f << endl;

    return 0;
}
