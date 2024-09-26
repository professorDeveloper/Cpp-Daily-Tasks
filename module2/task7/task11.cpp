//
// Created by azamov on 9/24/2024.
//
#include <iostream>
#include <vector>
using namespace std;

void squareUp(int n)
{
    vector<int> vec(n * n, 0); /// 3

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            vec[i * n - j - 1] = j + 1;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{

    squareUp(3);
    cout << endl;
    squareUp(2);
    cout << endl;
    squareUp(4);
    cout << endl;

    return 0;
}
