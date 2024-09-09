//
// Created by azamov on 8/28/2024.
//
#include <iostream>
using namespace std;

int main() {
    int totalPage = 750;
    int rowOFPage = 50;
    int charOfRow = 152;
    int totalChars = rowOFPage * (charOfRow * totalPage);
    int totalBookSizeMb = totalChars / 1000000;

    cout << totalBookSizeMb << endl;

    //Task2
    int n = 20;
    cout << "Enter n:";
    cin >> n;
    float word = 5;
    float result =  2.2 * n;
    cout << result / word << endl;

   int x = 2;
    int y = x * x;
    int z = y * y;
    int w = z * y;
    cout << w << endl;
    return 0;
}
