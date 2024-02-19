#include <iostream>

long long sumOfDigits(long long num) {
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

long long sumOfDigitsInRange(long long n) {
    long long totalSum = 0;
    for (long long i = 1; i <= n; ++i) {
        totalSum += sumOfDigits(i);
    }
    return totalSum;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long n;
        std::cin >> n;
        std::cout << sumOfDigitsInRange(n) << std::endl;
    }
    return 0;
}
