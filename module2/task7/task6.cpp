//
// Created by azamov on 9/24/2024.
//
#include <iostream>
using namespace std;
#include <vector>
bool isEverywhere(vector<int> arr, int n) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] != n && arr[i + 1] != n) {
            return false;
        }
    }
    return true;
}
int main() {
    std::vector<int> test1 = {1, 2, 1, 3};
    std::vector<int> test2 = {1, 2, 1, 3};
    std::vector<int> test3 = {1, 2, 1, 3, 4};

    std::cout << std::boolalpha;  // true/false ni so'z shaklida chiqarish uchun
    std::cout << "isEverywhere([1, 2, 1, 3], 1) " << isEverywhere(test1, 1) << std::endl;
    std::cout << "isEverywhere([1, 2, 1, 3], 2) " << isEverywhere(test2, 2) << std::endl;
    std::cout << "isEverywhere([1, 2, 1, 3, 4], 1) " << isEverywhere(test3, 1) << std::endl;

}