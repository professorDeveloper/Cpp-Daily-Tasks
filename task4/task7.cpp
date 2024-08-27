//
// Created by azamov on 8/26/2024.
//
#include <iostream>
using namespace std;

int main() {
    int memoryGb=32;
    int movieSize =5;
    int numberOfMovies  =memoryGb/movieSize;
    cout << numberOfMovies  << endl;

    return 0;
}