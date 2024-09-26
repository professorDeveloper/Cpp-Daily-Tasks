//
// Created by azamov on 9/25/2024.
//
#include <iostream>
using namespace std;
string minCat(string a,string b) {
    int lenA = a.length();
    int lenB = b.length();

    if (lenA == lenB) {
        return a + b;
    }

    if (lenA > lenB) {
        return a.substr(lenA - lenB) + b;
    } else {
        return a + b.substr(lenB - lenA);
    }
}
int main() {
    cout << minCat("Hello", "Hi") << endl;       // Output: "loHi"
    cout << minCat("Hello", "java") << endl;     // Output: "ellojava"
    cout << minCat("java", "Hello") << endl;     // Output: "javaello"

}