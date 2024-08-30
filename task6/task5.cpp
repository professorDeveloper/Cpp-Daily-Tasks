//
// Created by azamov on 8/29/2024.
//
#include <iostream>

using namespace std;
int main () {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int x= a%10;
    int y = a/10;

    bool result = x+y>10;

    cout << result << endl;
    //task2
    int b;
    cout << "Enter b number: ";
    cin >> b;
    int z= b%10;
    int w = b/10;

    bool result2 = z*w>20;

    cout << result2 << endl;
    //task3
    int c;
    cout << "Enter c number: ";
    cin >> c;
    int birlar = c%10;
    int onlar = c/10;
    bool result3= birlar %2==1 && onlar%2==1;
    cout << result3 << endl;

    return 0;
}