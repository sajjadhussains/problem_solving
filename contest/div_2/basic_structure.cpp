#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int maxBalance(int x, int n) {
    int maxGCD = 1;
    if (n == 1)
        return x;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (i <= x / n)
                maxGCD = max(maxGCD, i);
            if (x / i <= x / n)
                maxGCD = max(maxGCD, x / i);
        }
    }

    return maxGCD;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        int max_bal = maxBalance(x, n);
        cout << max_bal << endl;
    }

    return 0;
}
