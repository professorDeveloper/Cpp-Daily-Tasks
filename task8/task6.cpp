//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

int main() {
    int fineDay;
    int fineAmount;
    cout << "Jarima miqdori  : ";
    cin >> fineAmount;
    cout << " Kun: ";
    cin >> fineDay;
    if (fineDay != 0) {
        if (fineDay <= 3) {
            int reuslt = 10 * fineAmount / 100; /// 10

            cout << "Tolashingiz kerak bolgan jarima miqdori :" << fineAmount - reuslt << endl;
        } else if (fineDay >= 15) {
            int reuslt = 10 * fineAmount / 100; /// 10
            cout << "Tolashingiz kerak bolgan jarima miqdori :" << fineAmount + reuslt << endl;
        } else {
            cout << "To`lashingiz kerak bolgan jarima miqdori :" << fineAmount << endl;
        }
    }

    //task2
    int temp ;
    cout << "Enter Temp:" ;
    cin >> temp;
    if (temp >25) {
        cout << "Oynalar ochilsin" << endl;
    }else if (temp <25) {
        cout << "Oynalar yopilsin " << endl;
    }
}
