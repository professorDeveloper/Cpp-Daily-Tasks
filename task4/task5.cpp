
#include <iostream>
using namespace std;

int main() {

    int number =1234;
    //answer =5426
    int minglar= number/1000 %10;
    int yuzlar =number/100 %10;
    int onlar = number/10 %10;
    int qolganlar = number%10 ;
    cout << minglar << endl;
    cout << onlar << endl;
    cout << yuzlar << endl;
    cout << qolganlar << endl;

    int result =(onlar *1000)+(yuzlar*100)+(minglar*10)+qolganlar;
    cout << result << endl;

    //Task2

    int GB =12;
    int mb = GB *1000;
    cout << mb << endl;

    return 0;
}