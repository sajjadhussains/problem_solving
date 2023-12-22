#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int upper_limit) {
    vector<bool> is_prime(upper_limit + 1, true);
    vector<int> primes;

    for (int p = 2; p * p <= upper_limit; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= upper_limit; i += p) {
                is_prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= upper_limit; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int nth_prime(int n, const vector<int>& primes) {
    return primes[n - 1];
}

int main() {
    const int upper_limit = 105000;  // Adjust based on the required range of primes
    vector<int> primes = sieve(upper_limit);

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;
        int result = nth_prime(n, primes);
        cout << result << endl;
    }

    return 0;
}
