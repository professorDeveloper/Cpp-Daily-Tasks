//
// Created by azamov on 9/9/2024.
//
#include <iostream>
using namespace std;

int main() {
    int sum;
    int num;
    cout << "Pulni kiriting: ";
    cin >> sum;
    cout << "Valyutani tanlang :";
    cin >> num;;
    switch (num) {
        case 1: {
            int result = sum / 12735;
            cout << "Dollar : " << result << endl;
            break;
        }
        case 2: {
            cout << "Rubl:" << sum / 140 << endl;
            break;
        }
        case 3: {
            cout << "Evro:"  << sum / 14115 << endl;
            break;
        }
        default: {
            cout << "Invalid Input" << endl;
            break;
        }
    }
}
