//
// Created by azamov on 9/7/2024.
//
#include <iostream>
using namespace std;

string getNumber(int number) {
    if (number == 1) {
        return "Bir";
    }
    if (number == 2) {
        return "Ikki";
    }
    if (number == 3) {
        return "Uch";
    }
    if (number == 4) {
        return "To`rt";
    }
    if (number == 5) {
        return "Besh";
    }
    if (number == 6) {
        return "Olti";
    }
    if (number == 7) {
        return "Yetti";
    }
    if (number == 8) {
        return "Sakkiz";
    }
    if (number == 9) {
        return "Toqqiz";
    }
    return "Invalid";
}

string getOnlik(int number) {
    if (number == 1) {
        return "O`n";
    }
    if (number == 2) {
        return "Yigirma";
    }
    if (number == 3) {
        return "O`ttiz";
    }
    if (number == 4) {
        return "Qiriq";
    }
    if (number == 5) {
        return "Ellik";
    }
    if (number == 6) {
        return "Oltmish";
    }
    if (number == 7) {
        return "Yetmish";
    }
    if (number == 8) {
        return "Sakson";
    }
    if (number == 9) {
        return "Toqson";
    }
}

string getYuzlik(int number) {
    if (number == 1) {
        return "Bir Yuz";
    }
    if (number == 2) {
        return "ikki yuz";
    }
    if (number == 3) {
        return "uch yuz";
    }
    if (number == 4) {
        return "to`rt yuz";
    }
    if (number == 5) {
        return "besh yuz";
    }
    if (number == 6) {
        return "olti yuz";
    }
    if (number == 7) {
        return "yetti yuz";
    }
    if (number == 8) {
        return "sakkiz yuz";
    }
    if (number == 9) {
        return "to`qqiz yuz";
    }
}


int main() {
    int battery;
    cout << "Enter the battery :";
    cin >> battery;
    if (battery <= 20) {
        cout << "Mashinani qayta quvvatlang" << endl;
    } else if (battery > 20 && battery <= 40) {
        cout << "Mashinada kam zaryad miqdori mavjud" << endl;
    } else if (battery > 40 && battery <= 100) {
        cout << "Mashinada quvvat miqdori yetarlicha" << endl;
    } else {
        cout << "Invalid battery percent" << endl;
    }
    cout << "Enter n:";
    int n;
    cin >> n;
    int yuz = n / 100;
    int on = (n % 100) / 10;
    int bir = n % 10;
    if (yuz > 0) {
        cout << getYuzlik(yuz)+" ";
    }

    if (on > 0) {
        cout << getOnlik(on)+" ";
    }

    if (bir > 0) {
        cout << getNumber(bir) << endl;
    }
}
