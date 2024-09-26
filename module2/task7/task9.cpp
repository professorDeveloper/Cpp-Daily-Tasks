//
// Created by azamov on 9/24/2024.
//
#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool canBalance(vector<int> a) {
    if(a.size()%2==0){
        int balance = a.size()/2,yig1=0,yig2=0;
        for(int i = 0;i<balance;i++){
            yig1 += abs(a[i]);
        }
        for(int i = a.size()-1;i>=balance;i--){
            yig2 += abs(a[i]);
        }
        if(yig1 == yig2||yig1+1 == yig2) return 1;
        else return 0;
    }
    else return 0;

}
int main(){
    cout << boolalpha;
    cout << canBalance({1, 1, 1, 2, 1,0}) << endl;
    cout << canBalance({2, 1, 1, 2, 1}) << endl;
    cout << canBalance({10, 10}) << endl;
    cout << canBalance({10, 0, 1, -1, 10}) << endl;



    return 0;
}