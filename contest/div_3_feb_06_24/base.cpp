#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canChooseElements(int n, int m, int k, vector<int>& arr1, vector<int>& arr2) {
    vector<bool> present(k * k + 1, false);

    for (int i = 0; i < n; ++i) {
        if (arr1[i] <= k) {
            present[arr1[i]] = true;
        }
    }

    for (int i = 0; i < m; ++i) {
        if (arr2[i] <= k) {
            present[arr2[i]] = true;
        }
    }

    for (int i = 1; i <= k; ++i) {
        if (!present[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr1(n), arr2(m);

        for (int i = 0; i < n; ++i) {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> arr2[i];
        }

        if (canChooseElements(n, m, k, arr1, arr2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
