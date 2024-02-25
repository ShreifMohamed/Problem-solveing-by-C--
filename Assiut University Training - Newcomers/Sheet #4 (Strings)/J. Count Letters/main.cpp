#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    // Create an array to store the count of each letter
    int letter_count[26] = {0};

    // Count occurrences of each letter in the string
    for (char c : S) {
        letter_count[c - 'a']++;
    }

    // Print the count of each letter in ascending order
    for (char c = 'a'; c <= 'z'; ++c) {
        if (letter_count[c - 'a'] > 0) {
            std::cout << c << " : " << letter_count[c - 'a'] << "\n";
        }
    }

    return 0;
}
