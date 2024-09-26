//
// Created by azamov on 9/24/2024.
//

#include <iostream>
#include <vector>
using namespace std;
//only14([1, 4, 1, 4]) → true
//only14([1, 4, 2, 4]) → false
bool only14(vector<int> v) {
    for (int num: v) {
        if (num != 1 && num != 4) {
            return false; // Agar 1 yoki 4 dan boshqa element uchrasa, false qaytaramiz.
        }
    }
    return true;
}

int main() {
    vector<int> v = {2, 4, 5, 6};
    cout << boolalpha << only14(v) << endl;
}
