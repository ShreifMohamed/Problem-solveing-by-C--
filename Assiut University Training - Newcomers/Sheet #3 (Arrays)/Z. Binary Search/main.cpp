#include <iostream>
#include <unordered_set>

int main() {
    long long size, Queries;
    std::cin >> size >> Queries;

    std::unordered_set<long long> elements;
    for (int i = 0; i < size; i++) {
        long long num;
        std::cin >> num;
        elements.insert(num);
    }

    while (Queries--) {
        long long index;
        std::cin >> index;
        if (elements.count(index)) {
            std::cout << "found\n";
        } else {
            std::cout << "not found\n";
        }
    }

    return 0;
}
