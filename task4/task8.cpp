//
// Created by azamov on 8/26/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number= 245;
    int yuzlar = number/100 %10;
    int onlar =number / 10 % 10;
    int birlar = number % 10;
    //answer=231
    cout << yuzlar << endl;
    cout << onlar << endl;
    cout << birlar << endl;
    int result =(onlar *100) + (birlar *10) +yuzlar;
    cout << result << endl;

    return 0;
}
