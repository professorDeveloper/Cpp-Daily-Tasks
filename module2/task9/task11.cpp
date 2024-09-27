//
// Created by azamov on 9/27/2024.
//
#include <iostream>
using namespace std;


string wordEnds(string str1,string str2) {
    std::string result;
    int wordLen = str2.length();
    int strLen = str1.length();

    for (int i = 0; i <= strLen - wordLen; ++i) {
        if (str1.substr(i, wordLen) == str2) {
            if (i > 0) {
                result += str1[i - 1];
            }
            if (i + wordLen < strLen) {
                result += str1[i + wordLen];
            }
        }
    }

    return result;
}

int main () {
    cout << wordEnds("abcXY123XYijk", "XY") << endl;  // Output: c13i
    cout << wordEnds("XY123XY", "XY") << endl;        // Output: 13
    cout << wordEnds("XY1XY", "XY") << endl;          // Output: 11

}