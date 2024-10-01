//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;

int main() {
    string s = "Ah+sd)><*d4554a";
    char first;
    char second;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i]) && !isalpha(s[i])) {
            if (count == 0) {
                first = s[i];
                count++;
            }else if (count == 1) {
                second = s[i];
                break;
            }
        }
    }

    cout << first << " " << second << endl;
    return 0;
}
