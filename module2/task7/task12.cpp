//
// Created by azamov on 9/24/2024.
//
#include <iostream>
#include <vector>
using namespace std;
vector<int> seriesUp(int a) {
    vector<int>name;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= i; ++j) {
            name.push_back(j);
        }
    }
    return name;
}




int main()
{
    vector<int>natija=seriesUp(3);
    vector<int>natija1=seriesUp(5);
    for(int t=0;t<natija.size();t++) {
        cout<<natija[t]<<" ";
    }
    cout<<endl;
    for(int t=0;t<natija1.size();t++) {
        cout<<natija1[t]<<" ";
    }
    return 0;
}
