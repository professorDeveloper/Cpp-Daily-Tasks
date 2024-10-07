#include <iostream>
#include <string>

bool isPalindrome(const std::string& s, int left, int right, bool removed) {
    if (left >= right) {
        return true; // Base case: when pointers cross
    }
    if (s[left] == s[right]) {
        return isPalindrome(s, left + 1, right - 1, removed); // Move inward
    } else {
        // If there is a mismatch, try removing one character
        if (!removed) {
            return isPalindrome(s, left + 1, right, true) || // Remove left character
                   isPalindrome(s, left, right - 1, true); // Remove right character
        }
        return false; // Mismatch found after removing a character
    }
}

bool validPalindrome(std::string s) {
    return isPalindrome(s, 0, s.length() - 1, false);
}

int main() {
    std::string s = "abca"; // Example input
    if (validPalindrome(s)) {
        std::cout << "The string can be a palindrome after deleting at most one character." << std::endl;
    } else {
        std::cout << "The string cannot be a palindrome even after deleting one character." << std::endl;
    }
    return 0;
}
