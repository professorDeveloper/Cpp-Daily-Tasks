//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;

int countCode(string str) {
    string find = "code";
    int count = 0;
    string checker;
    for (int i = 0; i < find.length(); i++) {
        checker = find.substr(i, find.length());

        // 'c', 'o' va 'e' , 3-chi harf farqi yo'q
        if (checker[0] == 'c' && checker[1] == 'o' && checker[3] == 'e') {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "aaacodebbb";
    cout << countCode(str) << endl;
}
