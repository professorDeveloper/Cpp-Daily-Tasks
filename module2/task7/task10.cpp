//
// Created by azamov on 9/24/2024.
//
#include <iostream>
using namespace std;
#include <vector>

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool linearIn(vector<int> a,vector<int> b){

    for(int i=0;i<b.size();i++){
        bool check = false;
        for(int k=0;k<a.size();k++){
            if(b[i] == a[k]){
                check = true;
                break;
            }
        }
        if(!check){
            return false;
        }
    }
    return true;
}

int main() {
    cout << linearIn({1, 2, 4, 6}, {2, 4}) << endl;
    cout << linearIn({1, 2, 4, 6}, {1, 4}) << endl;
}
