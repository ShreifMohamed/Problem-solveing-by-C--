#include <iostream>

int main() {
    long long size, Queries;
    std::cin >> size >> Queries;

    long long arr[size];
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    while (Queries--) {
        int left, right;
        std::cin >> left >> right;

        long long sum = 0;
        for(int i = left - 1; i <= right - 1; ++i) {
            sum += arr[i];
        }
        std::cout << sum << "\n";
    }

    return 0;
}
