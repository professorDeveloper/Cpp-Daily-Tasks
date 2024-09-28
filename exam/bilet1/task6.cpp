#include <iostream>
using namespace std;

bool checkNum(int num) {
    return num % 5 == 0;
}

int main() {
    int number = 25;
    cout << boolalpha << checkNum(number) << endl;
}
