#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> permutation(n);
        for (int i = n; i >= 1; --i) {
            permutation[n - i] = i;
        }

        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
