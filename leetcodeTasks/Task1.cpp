//
// Created by azamov on 9/24/2024.
//
#include <iostream>
using namespace std;


//VII

int romanToInt(string str) {
    //MCMXCIV //VV
    if (str[0] == 'V' && str[1] == 'V') {
        return 0;
    } else {
        for (int i = 0; i < str.length() - 1; i++) {
            if (str[i] == 'I' && str[i + 1] == 'V') {
                return 4;
            }
        }
    }
}


/*
if (str[i] == 'I') sum += 1;
        else if (str[i] == 'I' && str[i + 1] == 'V')sum += 4;
        else if (str[i] == 'V') sum += 5;
        else if (str[i] == 'X') sum += 10;
        else if (str[i] == 'L') sum += 50;
        else if (str[i] == 'C') sum += 100;
        else if (str[i] == 'D') sum += 500;
        else if (str[i] == 'M') sum += 1000;
 */
int main() {
    string str;
    cout << "Enter number:";
    cin >> str;

    cout << romanToInt(str) << endl;
    main();
}
