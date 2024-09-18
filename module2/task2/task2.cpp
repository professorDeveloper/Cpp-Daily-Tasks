//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;
int getLowStrCount(string str) {
    int count =0;
    for (int i = 0; i < str.length(); i++) {
        if(islower(str[i])) {
            count++;
        }
    }
}

int getSpaceCount(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if(str[i]==' ') count ++;
    }
}

int getSymCount(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if(str[i]=='@') count ++;
    }
}




int main() {
    string str= "Hello World@123@ ";
    cout << getLowStrCount(str) << endl;
    cout << getSpaceCount(str) << endl;
    cout << getSymCount(str) << endl;

}