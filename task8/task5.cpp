//
// Created by azamov on 9/7/2024.
//

#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;
    cout << "Please enter  number" << endl;
    cin >> number1;
    cout << "Please enter  number" << endl;
    cin >> number2;
    cout << "Please enter  number" << endl;
    cin >> number3;
    if (number1 == number2 || number1 == number3 || number2 == number3) {
        cout << "ikkitasi bir biriga teng" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    //task2
    int k;
    int d;
    cout << "Please enter  number" << endl;
    cin >> k;
    cout << "Please enter  number" << endl;
    cin >> d;
    int k40 = 40; //// this for 100km
    int distance = (k * 100) / k40;//30 *100 /40 = 3000 /40
    cout << distance << endl;
    if (distance >= d) {
        cout << "quvvat yetarli" << endl;
    } else {
        int enoughD = d-distance;
        int reuslt =(k40*enoughD)/100;//40*100 =4000/100 =40
        cout << reuslt +"% quvvat yetarli emas " << endl;

    }
}
