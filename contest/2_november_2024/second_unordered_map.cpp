#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> brand_cost;

        for (int i = 0; i < k; i++) {
            int bi, ci;
            cin >> bi >> ci;
            brand_cost[bi] += ci;
        }
        vector<int> costs;
        for (auto& entry : brand_cost) {
            costs.push_back(entry.second);
        }
        
        sort(costs.begin(), costs.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < min(n, (int)costs.size()); i++) {
            ans += costs[i];
        }
        
        cout << ans << endl;
    }
    return 0;
}
