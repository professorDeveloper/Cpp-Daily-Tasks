// #include <iostream>
// #include <ctime>
// using namespace std;
// int taxminiyson() {
//     srand(time(0));
//     int son = rand() % 100 + 1;
//     return son;
// }
// void game() {
//     int Kson = taxminiyson();
//     int son;
//     while (true) {
//         cout << "sonni kiriting:";  cin >> son;
//         if ( son == Kson ) {
//             cout << "urra:";
//             return;
//         } else if (son > Kson) {
//             cout << "kattaroq son kiriting: \n";
//         } else if (son < Kson) {
//             cout << "kichikroq son kiriting: \n";
//         }
//     }
// }
//
// int main() {
//     game();
//     return 0;
// }

#include <iostream>
#include <ctime>
using namespace std;


int getRandomNumber(int start, int end) {
    return rand() % (end - start + 1) + start;
}

void game() {
    srand(time(0));  // Tasodifiy son hosil qilishni faqat bir marta boshlash
    int Kson = getRandomNumber(1,2);
    int son;
    while (true) {
        cout << "sonni kiriting: ";
        cin >> son;
        if (son == Kson) {
            cout << "To'g'ri! Urra!" << endl;
            return;  // O'yinni tugatish
        }
        if (son > Kson) {
            cout << "Kichikroq son kiriting: \n";
        } else {
            cout << "Kattaroq son kiriting: \n";
        }
    }
}

int main() {
    game();
    return 0;
}
