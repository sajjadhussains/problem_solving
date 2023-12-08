#include <iostream>
using namespace std;

long long Square_Diff(int n) {
    long long sumOfSquares = (n * (n + 1LL) * (2LL * n + 1LL)) / 6LL;
    long long sum = (n * (n + 1LL)) / 2LL;
    long long squareOfSum = sum * sum;
    long long absDifference = abs(sumOfSquares - squareOfSum);
    return absDifference;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        cout << Square_Diff(n) << endl;
    }

    return 0;
}
