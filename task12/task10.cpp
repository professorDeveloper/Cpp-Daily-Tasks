//
// Created by azamov on 9/13/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* " ;
        }
        cout << endl;
    }


    //task2
    cout << endl;

    int n2 =5;
    for (int i = 1; i <= n2; i++) {
        for (int j = 1; j <= n2; j++) {
            if (j==1 || j==n2) {cout << "* " ;
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
