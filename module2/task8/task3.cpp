//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;

string makeOutWord(string str, string str2) {
    //str = <<>>
    // str 2= hello
    string out = str.substr(0, str.length() / 2);
  string  newStr = str.substr(str.length() / 2, str.length());
    return out +str2+newStr;
}

int main() {
    cout <<     makeOutWord("<<>>", "Hello") << endl;
}
