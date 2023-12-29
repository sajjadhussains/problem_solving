#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        // kth position is in the odd integers sequence
        cout << 2 * k - 1 << endl;
    } else {
        // kth position is in the even integers sequence
        cout << 2 * (k - (n + 1) / 2) << endl;
    }

    return 0;
}
