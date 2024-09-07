//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (str == "yashil") {
        cout << "harakatlanishni davom ettiring " << endl;
    } else if (str == "sariq") {
        cout << "harakatlanishga tayyorlaning" << endl;
    } else if (str == "qizil") {
        cout << "harakatlanishdan toxtang" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    //task2
    int a, b, c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Enter a number: ";
    cin >> c;
    int min = a;
    int max = a;

    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
}
