#include <bits/stdc++.h>
using namespace std;

long long sumOfDigitsInRange(long long n) {
    long long sum = 0;
    long long digitSum = 0;
    long long base = 1;
    
    while (n > 0) {
        long long quotient = n / 10;
        long long remainder = n % 10;

        sum += (base * remainder * (remainder + 1) / 2) + (quotient * 45 * base);
        digitSum += remainder * quotient;

        base *= 10;
        n = quotient;
    }
    return sum + digitSum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout<< sumOfDigitsInRange(n) << std::endl;
    }
    return 0;
}
