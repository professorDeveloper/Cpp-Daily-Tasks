//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;
int main() {
    cout<<"summa";
    double s;cin>>s;
    cout<<"Foizni kiriting: ";
    double p;cin>>p;
    double oy = 0;
    double boshSum = 2 * s;
    while (s < boshSum) {
        s += s * (p / 100);
        oy++;
    }
    cout<<oy<<" oydan so'ng boshlang'ich qiymatidan 2 marta ko'p "<<endl;
    cout<<oy<< "- oydagi pul miqdori = "<<s;
}

