#include <bits/stdc++.h>
using namespace std;

long long int cal_coefficient(long long int n, long long int k) {
    if (k > n) return 0; // Binomial coefficient is 0 if k > n

    vector<long long int> C(k + 1, 0); // 1D array for binomial coefficients up to C[n][k]
    C[0] = 1; // Base case: C[n][0] = 1 for all n

    for (long long int i = 1; i <= n; i++) {
        for (long long int j = min(i, k); j > 0; j--) { // Update in reverse order
            C[j] = C[j] + C[j - 1]; // Apply recurrence relation
        }
    }

    return C[k]; // Return the binomial coefficient
}

int main() {
    long long int t;
    cin >> t;

    vector<long long int> n_values(t), k_values(t); // Using separate vectors for clarity
    for (long long int i = 0; i < t; i++) {
        cin >> n_values[i] >> k_values[i]; // Read n and k pairs directly into vectors
    }

    for (int i = 0; i < t; i++) {
        long long int n = n_values[i];
        long long int k = k_values[i];

        // Debugging: Print input values before calculating
        cout << "Calculating C(" << n << ", " << k << "): ";

        long long int result = cal_coefficient(n, k);
        cout << result << endl; // Output result for each (n, k) pair
    }
    
    return 0;
}
