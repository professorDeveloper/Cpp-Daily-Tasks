#include <iostream>
#include <cmath> // ildiz va darajaga oshirih uchun kutubxona

double Y_aniqlash(double x) {
    double y = 4 * pow((sqrt(x) - 3), 6) - 5 * pow((x - 2), 2) - 8;
    return y;
}

int main() {
    double x;
    std::cout << "X ni kiriting: ";
    std::cin >> x;
    
    double natija = Y_aniqlash(x);
    std::cout << "Y ning qiymati : " << natija << std::endl;
    
    return 0;
}