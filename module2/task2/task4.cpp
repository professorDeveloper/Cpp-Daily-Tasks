#include <iostream>

int teskari_raqam(int n) {
    if (n >= 100 && n <= 999) {
        int oxirgiSon = n % 10;
        int orta_had = (n / 10) % 10;
        int birinchi_son = n / 100;

        int teskariNatija = oxirgiSon * 100 + orta_had * 10 + birinchi_son;
        return teskariNatija;
    } else {
        std::cout << "3 xonali son emas!" << std::endl;
        return -1;
    }
}

int main() {
    int n;
    std::cout << "3 xonali son kiriting: ";
    std::cin >> n;
    int teskariRaqam = teskari_raqam(n);
    if (teskariRaqam != -1) {
        std::cout << "kiritilgan raqam abc teskari xolatga o`tgani cba ->  " << teskariRaqam << std::endl;
    }
    return 0;
}
 

