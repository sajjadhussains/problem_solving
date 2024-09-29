#include <bits/stdc++.h>
using namespace std;

int minOperations(long long n, long long k) {
     if (k == 1) return n;
    long long operations = 0;
    
    while (n > 0) {
        operations += n % k;
        n /= k;
    }

    return operations;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n, k;
        cin >> n >> k;

        cout << minOperations(n, k) << endl;
    }

    return 0;
}
