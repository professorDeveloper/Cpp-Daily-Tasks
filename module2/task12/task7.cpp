//
// Created by azamov on 9/30/2024.
//
#include <iostream>
using namespace std;

int main() {
    string str = "Hayot  qiyin !";
    if (str.find("qiyin") != string::npos) {
        str.erase(str.find("qiyin"));
    }else {
        str ="PDP";
    }
    cout << str << endl;
}
