//
// Created by azamov on 9/26/2024.
//
#include <iostream>
using namespace std;
string removeAtSymbols(const std::string& input) {
    string result;
    for (char c : input) {
        if (c != '@') {
            result += c;
        }
    }
    return result;
}



int main() {
    cout << removeAtSymbols("He@llo") << endl;
}
