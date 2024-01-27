#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> ai(n), bi(m);

        for (int i = 0; i < n; ++i) {
            cin >> ai[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> bi[i];
        }

        sort(ai.begin(), ai.end());
        sort(bi.begin(), bi.end());

        long long D = 0;

        for (int i = 0; i < n; ++i) {
            D += abs(ai[i] - bi[i]);
        }

        cout << D << endl;
    }

    return 0;
}
