//
// Created by azamov on 8/26/2024.
//
#include <iostream>
using namespace std;

int main() {
    int number =473;
    int yuzlar =number /100 %10;
    int onlar =number/10%10;
    int birlar =number %10;
    cout<<yuzlar<<endl;
    cout<<onlar<<endl;
    cout<<birlar<<endl;

    //answer= 524;
    int result =(birlar *100) + (yuzlar *10 )+onlar;
    cout << result << endl;

    return 0;
}
