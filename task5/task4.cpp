//
// Created by azamov on 8/28/2024.
//

#include <iostream>
using namespace std;

int main() {
    int fileSize = 128;
    int result = fileSize * 1000;
    cout << "File KB Size: " << result << endl;


    //Task2
    double fileSizeMb = 1.8 * 1000;
    double netSpeedMb = 750 * 0.001;

    double resultTime = fileSizeMb / netSpeedMb;


    cout << "file download time: " << resultTime << endl;


    int netSpeed = 750;
    float gb = 1.8;
    float gbToKb = 1000000 * 1.8;
    float time = gbToKb / netSpeed;
    cout << "file download time: " << time << endl;

    return 0;
}
