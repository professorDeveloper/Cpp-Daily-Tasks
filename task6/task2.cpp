#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number:";
    cin >> a;


    int result = a > 999 && a <= 9999;

    cout << result << endl;

    ///Task2
    int b;
    cout << "Enter b number:";
    cin >> b;
    int result2 = b % 2 == 0 && (b > 9 && b <= 99);
    cout << result2 << endl;


    int c = 123;

    int result3 = c % 2 == 1 && c > 99 && c <= 999;
    cout << result3 << endl;

    return 0;
}
