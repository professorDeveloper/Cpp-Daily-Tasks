//
// Created by azamov on 9/17/2024.
//
#include <iostream>
using namespace std;
int main() {
    string str= "hello";
    int count =0;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])||isdigit(str[i]))count ++;
    }
    cout << count << endl;


    //task2
    int countUp =0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])||isdigit(str[i]))count ++;
    }
    cout << countUp << endl;



    int countSym =0;
    int countDig =0;
    int countUpd =0;
    int countLow =0;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i]))countLow ++;
        else if (isupper(str[i]))countUpd ++;
        else if (isdigit(str[i]))countDig ++;
        else if(!isalpha(str[i]) && !isdigit(str[i])) countSym ++;
    }

    cout << "countSym = " << countSym << endl;
    cout << "countDig = " << countDig << endl;
    cout << "countUp = " << countUp << endl;
    cout << "countLow = " << countLow << endl;
    return 0;
}
